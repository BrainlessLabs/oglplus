/**
 *  @file oglplus/context/viewport.hpp
 *  @brief Wrappers for viewport-related operations
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef OGLPLUS_CONTEXT_VIEWPORT_1201040722_HPP
#define OGLPLUS_CONTEXT_VIEWPORT_1201040722_HPP

#include <oglplus/config.hpp>
#include <oglplus/glfunc.hpp>
#include <oglplus/error.hpp>
#include <vector>

namespace oglplus {
namespace context {

/// Helper structure storing position in a 2D viewport
struct ViewportPosition
{
	// private implementation detail, do not use
	GLfloat _v[2];

	/// The x-coordinate
	GLfloat X(void) const
	{
		return _v[0];
	}

	/// The y-coordinate
	GLfloat Y(void) const
	{
		return _v[1];
	}
};

/// Helper structure storing the dimensions of a 2D viewport
struct ViewportSize
{
	// private implementation detail, do not use
	GLfloat _v[2];

	/// The width of the viewport
	GLfloat Width(void) const
	{
		return _v[0];
	}

	/// The height of the viewport
	GLfloat Height(void) const
	{
		return _v[1];
	}
};

/// Helper structure storing the extents of a 2D viewport
struct ViewportExtents
{
	// private implementation detail, do not use
	GLfloat _v[4];

	/// The x-coordinate
	GLfloat X(void) const
	{
		return _v[0];
	}

	/// The y-coordinate
	GLfloat Y(void) const
	{
		return _v[1];
	}

	/// The width of the viewport
	GLfloat Width(void) const
	{
		return _v[2];
	}

	/// The height of the viewport
	GLfloat Height(void) const
	{
		return _v[3];
	}
};

/// Helper structure storing the newr/far depth range
struct DepthRange
{
	// private implementation detail, do not use
	GLfloat _v[2];

	/// The near limit
	GLfloat Near(void) const
	{
		return _v[0];
	}

	/// The far limit
	GLfloat Far(void) const
	{
		return _v[1];
	}
};

/// Wrapper for the viewport-related operations
/**
 *  @ingroup ogl_context
 */
class ViewportOps
{
public:
	/// Sets the extents of the current viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{Viewport}
	 */
	static void Viewport(GLint x, GLint y, GLsizei w, GLsizei h)
	{
		OGLPLUS_GLFUNC(Viewport)(x, y, w, h);
		HandleIfError(OGLPLUS_ERROR_INFO(Viewport));
	}

	/// Sets the size of the current viewport starting at (0,0)
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{Viewport}
	 */
	static void Viewport(GLsizei w, GLsizei h)
	{
		OGLPLUS_GLFUNC(Viewport)(0, 0, w, h);
		HandleIfError(OGLPLUS_ERROR_INFO(Viewport));
	}

	/// Returns the implementation-dependent viewport bounds range
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{Get}
	 *  @gldefref{VIEWPORT_BOUNDS_RANGE}
	 */
	static ViewportPosition ViewportBoundsRange(void)
	{
		ViewportPosition result;
		OGLPLUS_GLFUNC(GetFloatv)(
			GL_VIEWPORT_BOUNDS_RANGE,
			result._v
		);
		HandleIfError(OGLPLUS_ERROR_INFO(GetFloatv));
		return result;
	}

	/// Returns the implementation-dependent maximum viewport dimensions
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{Get}
	 *  @gldefref{MAX_VIEWPORT_DIMS}
	 */
	static ViewportSize MaxViewportDims(void)
	{
		ViewportSize result;
		OGLPLUS_GLFUNC(GetFloatv)(
			GL_MAX_VIEWPORT_DIMS,
			result._v
		);
		HandleIfError(OGLPLUS_ERROR_INFO(GetFloatv));
		return result;
	}

	/// Sets the @p near / @p far depth range of the default viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{DepthRangef}
	 */
	static void DepthRange(GLclampf near, GLclampf far)
	{
		OGLPLUS_GLFUNC(DepthRangef)(near, far);
		HandleIfError(OGLPLUS_ERROR_INFO(DepthRangef));
	}

	/// Sets the @p near / @p far depth range of the default viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{DepthRangef}
	 */
	static void DepthRange(GLclampd near, GLclampd far)
	{
		OGLPLUS_GLFUNC(DepthRange)(near, far);
		HandleIfError(OGLPLUS_ERROR_INFO(DepthRange));
	}

#if OGLPLUS_DOCUMENTATION_ONLY || GL_VERSION_4_1 || GL_ARB_viewport_array
	/// Returns the number of available viewports
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{Get}
	 *  @gldefref{MAX_VIEWPORTS}
	 */
	static GLuint MaxViewports(void)
	{
		GLint result = 0;
		OGLPLUS_GLFUNC(GetIntegerv)(GL_MAX_VIEWPORTS, &result);
		HandleIfError(OGLPLUS_ERROR_INFO(GetIntegerv));
		return GLuint(result);
	}

	/// Sets the extents of the specified @p viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{ViewportIndexedf}
	 */
	static void Viewport(
		GLuint viewport,
		GLfloat x,
		GLfloat y,
		GLfloat width,
		GLfloat height
	)
	{
		OGLPLUS_GLFUNC(ViewportIndexedf)(viewport, x, y, width, height);
		HandleIfError(OGLPLUS_ERROR_INFO(ViewportIndexedf));
	}

	/// Sets the @p extents of the specified @p viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{ViewportIndexedfv}
	 */
	static void Viewport(GLuint viewport, const GLfloat* extents)
	{
		OGLPLUS_GLFUNC(ViewportIndexedfv)(viewport, extents);
		HandleIfError(OGLPLUS_ERROR_INFO(ViewportIndexedfv));
	}

	/// Sets @p extents of the viewports specified by @p first and @p count
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{ViewportIndexedfv}
	 */
	static void ViewportArray(
		GLuint first,
		GLsizei count,
		const GLfloat* extents
	)
	{
		OGLPLUS_GLFUNC(ViewportArrayv)(first, count, extents);
		HandleIfError(OGLPLUS_ERROR_INFO(ViewportArrayv));
	}

	/// Returns the extents of the specified @p viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{Get}
	 *  @gldefref{VIEWPORT}
	 */
	static ViewportExtents GetViewport(GLuint viewport)
	{
		ViewportExtents result;
		OGLPLUS_GLFUNC(GetFloati_v)(GL_VIEWPORT, viewport, result._v);
		HandleIfError(OGLPLUS_ERROR_INFO(GetFloati_v));
		return result;
	}


	/// Sets the @p near / @p far depth range of a @p viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{DepthRangeIndexed}
	 */
	static void DepthRange(GLuint viewport, GLclampd near, GLclampd far)
	{
		OGLPLUS_GLFUNC(DepthRangeIndexed)(viewport, near, far);
		HandleIfError(OGLPLUS_ERROR_INFO(DepthRangeIndexed));
	}

	/// Sets depth ranges of viewports specified by @p first and @p count
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{DepthRangeArrayv}
	 */
	static void DepthRangeArray(
		GLuint first,
		GLsizei count,
		const GLclampd *v
	)
	{
		OGLPLUS_GLFUNC(DepthRangeArrayv)(first, count, v);
		HandleIfError(OGLPLUS_ERROR_INFO(DepthRangeArrayv));
	}

	/// Returns the depth range of the specified @p viewport
	/**
	 *  @throws Error
	 *
	 *  @glsymbols
	 *  @glfunref{Get}
	 *  @gldefref{DEPTH_RANGE}
	 */
	static oglplus::context::DepthRange GetDepthRange(GLuint viewport)
	{
		oglplus::context::DepthRange result;
		OGLPLUS_GLFUNC(GetFloati_v)(GL_DEPTH_RANGE, viewport,result._v);
		HandleIfError(OGLPLUS_ERROR_INFO(GetFloati_v));
		return result;
	}
#endif
};

} // namespace context
} // namespace oglplus

#endif // include guard