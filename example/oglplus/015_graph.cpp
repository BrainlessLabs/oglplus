/**
 *  @example oglplus/015_graph.cpp
 *  @brief Shows how to draw smooth lines and points
 *
 *  @image html 015_graph.png
 *
 *  Copyright 2008-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
#include <oglplus/gl.hpp>
#include <oglplus/all.hpp>

#include <cmath>
#include <cassert>
#include <ctime>

#include "example.hpp"

namespace oglplus {

class GraphExample : public Example
{
private:
	// wrapper around the current OpenGL context
	Context gl;

	// Vertex shader
	VertexShader vs;

	// Fragment shader
	FragmentShader fs;

	// Program
	Program prog;

	// A vertex array object for the rendered cube
	VertexArray graph;

	// VBOs for the graph's vertices and edge element indices
	Buffer verts, edges;

	// The number of nodes in the graph
	const size_t node_count;
	// The number of edges in the graph
	size_t edge_count;

	static double nrand(void)
	{
		return 2.0*(double(std::rand())/RAND_MAX - 0.5);
	}

	CubicBezierLoop<Vec3f, double> cam_path;
	CubicBezierLoop<Vec3f, double> tgt_path;
public:
	GraphExample(void)
	 : node_count(512)
	 , edge_count(0)
	 , cam_path(
		{
			{-30.0f, -40.0f, -40.0f},
			{ 30.0f,   0.0f, -50.0f},
			{ 50.0f,  20.0f,  40.0f},
			{-10.0f,  40.0f,  45.0f},
			{-20.0f,  20.0f,   0.0f},
			{-50.0f,   3.0f, -20.0f}
		}
	), tgt_path(
		{
			{-10.0f,   0.0f, -10.0f},
			{ 10.0f,  10.0f, -10.0f},
			{ 10.0f,   0.0f,  10.0f},
			{-10.0f, - 5.0f,  15.0f},
			{-10.0f, - 3.0f,   0.0f},
			{-10.0f,   0.0f, -10.0f}
		}
	)
	{
		std::srand(std::time(0));
		// Set the vertex shader source
		vs.Source(
			"#version 330\n"
			"uniform mat4 ProjectionMatrix, CameraMatrix;"
			"in vec4 Position;"
			"void main(void)"
			"{"
			"	gl_Position = "
			"		ProjectionMatrix *"
			"		CameraMatrix *"
			"		Position;"
			"	gl_PointSize = 4.0 * gl_Position.w / gl_Position.z;"
			"}"
		);
		// compile it
		vs.Compile();

		// set the fragment shader source
		fs.Source(
			"#version 330\n"
			"out vec4 fragColor;"
			"void main(void)"
			"{"
			"	fragColor = vec4(0.0, 0.0, 0.0, 1.0);"
			"}"
		);
		// compile it
		fs.Compile();

		// attach the shaders to the program
		prog.AttachShader(vs);
		prog.AttachShader(fs);
		// link and use it
		prog.Link();
		prog.Use();

		// bind the VAO for the cube
		graph.Bind();

		std::vector<GLfloat> positions(node_count * 3);
		// bind the VBO for the cube vertices
		verts.Bind(Buffer::Target::Array);
		{
			size_t k = 0;
			for(size_t p=0; p!=node_count; ++p)
			{
				positions[k++] = nrand() *120.0;
				positions[k++] = nrand() *  5.0;
				positions[k++] = nrand() *120.0;
			}
			assert(k == positions.size());

			// upload the data
			Buffer::Data(Buffer::Target::Array, positions);
			// setup the vertex attribs array for the vertices
			VertexAttribArray vert_attr(prog, "Position");
			vert_attr.Setup(3, DataType::Float);
			vert_attr.Enable();
		}

		// bind the VBO for cube edge indices
		edges.Bind(Buffer::Target::ElementArray);
		{
			std::vector<GLuint> edges;
			edges.reserve(node_count * 6);
			for(size_t i=0; i!=node_count; ++i)
			{
				Vec3f pi(
					positions[i*3+0],
					positions[i*3+1],
					positions[i*3+2]
				);
				float min_dist = 1000.0f;
				size_t m = i;
				for(size_t j=i+1; j!=node_count; ++j)
				{
					Vec3f pj(
						positions[j*3+0],
						positions[j*3+1],
						positions[j*3+2]
					);
					float dist = Distance(pi, pj);
					if(min_dist > 1.0 && min_dist > dist)
					{
						min_dist = dist;
						m = j;
					}
				}
				min_dist *= 2.0f;
				size_t done = 0;
				for(size_t j=i+1; j!=node_count; ++j)
				{
					Vec3f pj(
						positions[j*3+0],
						positions[j*3+1],
						positions[j*3+2]
					);
					float dist = Distance(pi, pj);
					if(min_dist > dist)
					{
						float x = dist/min_dist;
						if(std::pow(nrand(), 2.0) >= x)
						{
							edges.push_back(i);
							edges.push_back(j);
							++done;
						}
					}
				}
				if(done == 0)
				{
					if(i != m)
					{
						edges.push_back(i);
						edges.push_back(m);
					}
				}
			}
			Buffer::Data(Buffer::Target::ElementArray, edges);
			assert(edges.size() % 2 == 0);
			edge_count = edges.size();
			positions.clear();
		}

		//
		gl.ClearColor(0.9f, 0.9f, 0.8f, 0.0f);
		gl.ClearDepth(1.0f);
		gl.Enable(Capability::DepthTest);
		gl.Enable(Capability::LineSmooth);
		gl.Enable(Capability::ProgramPointSize);
		gl.Enable(Capability::Blend);
		gl.BlendFunc(BlendFn::SrcAlpha, BlendFn::OneMinusSrcAlpha);
	}

	void Reshape(size_t width, size_t height)
	{
		gl.Viewport(width, height);
		prog.Use();
		Uniform<Mat4f>(prog, "ProjectionMatrix").Set(
			CamMatrixf::Perspective(
				Degrees(48),
				double(width)/height,
				1, 100
			)
		);
	}

	void Render(double time)
	{
		gl.Clear().ColorBuffer().DepthBuffer();
		//
		// set the matrix for camera orbiting the origin
		Uniform<Mat4f>(prog, "CameraMatrix").Set(
			CamMatrixf::LookingAt(
				cam_path.Position(time / 9.0),
				tgt_path.Position(time / 7.0)
			)
		);

		// draw the points
		gl.DrawArrays(PrimitiveType::Points, 0, node_count * 3);
		// draw the edges
		gl.DrawElements(
			PrimitiveType::Lines,
			edge_count,
			DataType::UnsignedInt
		);
	}

	bool Continue(double time)
	{
		return time < 60.0;
	}
};

std::unique_ptr<Example> makeExample(const ExampleParams& params)
{
	return std::unique_ptr<Example>(new GraphExample);
}

} // namespace oglplus