/*
 *  .file oglplus/enums/limit_query_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/oglplus/limit_query.txt' instead.
 *
 *  Copyright 2010-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	LimitQuery
> EnumValueRange(LimitQuery*)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVR_LIMITQUERY)
#define OGLPLUS_IMPL_EVR_LIMITQUERY
{
static const GLenum _values[] = {
#if defined GL_MAX_3D_TEXTURE_SIZE
GL_MAX_3D_TEXTURE_SIZE,
#endif
#if defined GL_MAX_ARRAY_TEXTURE_LAYERS
GL_MAX_ARRAY_TEXTURE_LAYERS,
#endif
#if defined GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS
GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS,
#endif
#if defined GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE
GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE,
#endif
#if defined GL_MAX_CLIP_DISTANCES
GL_MAX_CLIP_DISTANCES,
#endif
#if defined GL_MAX_COLOR_ATTACHMENTS
GL_MAX_COLOR_ATTACHMENTS,
#endif
#if defined GL_MAX_COLOR_TEXTURE_SAMPLES
GL_MAX_COLOR_TEXTURE_SAMPLES,
#endif
#if defined GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS
GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS,
#endif
#if defined GL_MAX_COMBINED_ATOMIC_COUNTERS
GL_MAX_COMBINED_ATOMIC_COUNTERS,
#endif
#if defined GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS
GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS
GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_COMBINED_IMAGE_UNIFORMS
GL_MAX_COMBINED_IMAGE_UNIFORMS,
#endif
#if defined GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS
GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS,
#endif
#if defined GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS
GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS
GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS,
#endif
#if defined GL_MAX_COMBINED_UNIFORM_BLOCKS
GL_MAX_COMBINED_UNIFORM_BLOCKS,
#endif
#if defined GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS
GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_CUBE_MAP_TEXTURE_SIZE
GL_MAX_CUBE_MAP_TEXTURE_SIZE,
#endif
#if defined GL_MAX_DEPTH_TEXTURE_SAMPLES
GL_MAX_DEPTH_TEXTURE_SAMPLES,
#endif
#if defined GL_MAX_DRAW_BUFFERS
GL_MAX_DRAW_BUFFERS,
#endif
#if defined GL_MAX_DUAL_SOURCE_DRAW_BUFFERS
GL_MAX_DUAL_SOURCE_DRAW_BUFFERS,
#endif
#if defined GL_MAX_ELEMENTS_INDICES
GL_MAX_ELEMENTS_INDICES,
#endif
#if defined GL_MAX_ELEMENTS_VERTICES
GL_MAX_ELEMENTS_VERTICES,
#endif
#if defined GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS
GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS,
#endif
#if defined GL_MAX_FRAGMENT_ATOMIC_COUNTERS
GL_MAX_FRAGMENT_ATOMIC_COUNTERS,
#endif
#if defined GL_MAX_FRAGMENT_IMAGE_UNIFORMS
GL_MAX_FRAGMENT_IMAGE_UNIFORMS,
#endif
#if defined GL_MAX_FRAGMENT_INPUT_COMPONENTS
GL_MAX_FRAGMENT_INPUT_COMPONENTS,
#endif
#if defined GL_MAX_FRAGMENT_INTERPOLATION_OFFSET
GL_MAX_FRAGMENT_INTERPOLATION_OFFSET,
#endif
#if defined GL_MAX_FRAGMENT_UNIFORM_BLOCKS
GL_MAX_FRAGMENT_UNIFORM_BLOCKS,
#endif
#if defined GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
GL_MAX_FRAGMENT_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_FRAGMENT_UNIFORM_VECTORS
GL_MAX_FRAGMENT_UNIFORM_VECTORS,
#endif
#if defined GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS
GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS,
#endif
#if defined GL_MAX_GEOMETRY_ATOMIC_COUNTERS
GL_MAX_GEOMETRY_ATOMIC_COUNTERS,
#endif
#if defined GL_MAX_GEOMETRY_IMAGE_UNIFORMS
GL_MAX_GEOMETRY_IMAGE_UNIFORMS,
#endif
#if defined GL_MAX_GEOMETRY_INPUT_COMPONENTS
GL_MAX_GEOMETRY_INPUT_COMPONENTS,
#endif
#if defined GL_MAX_GEOMETRY_OUTPUT_COMPONENTS
GL_MAX_GEOMETRY_OUTPUT_COMPONENTS,
#endif
#if defined GL_MAX_GEOMETRY_OUTPUT_VERTICES
GL_MAX_GEOMETRY_OUTPUT_VERTICES,
#endif
#if defined GL_MAX_GEOMETRY_SHADER_INVOCATIONS
GL_MAX_GEOMETRY_SHADER_INVOCATIONS,
#endif
#if defined GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS
GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS,
#endif
#if defined GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS
GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS,
#endif
#if defined GL_MAX_GEOMETRY_UNIFORM_BLOCKS
GL_MAX_GEOMETRY_UNIFORM_BLOCKS,
#endif
#if defined GL_MAX_GEOMETRY_UNIFORM_COMPONENTS
GL_MAX_GEOMETRY_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_IMAGE_SAMPLES
GL_MAX_IMAGE_SAMPLES,
#endif
#if defined GL_MAX_IMAGE_UNITS
GL_MAX_IMAGE_UNITS,
#endif
#if defined GL_MAX_INTEGER_SAMPLES
GL_MAX_INTEGER_SAMPLES,
#endif
#if defined GL_MAX_PATCH_VERTICES
GL_MAX_PATCH_VERTICES,
#endif
#if defined GL_MAX_PROGRAM_TEXEL_OFFSET
GL_MAX_PROGRAM_TEXEL_OFFSET,
#endif
#if defined GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET
GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET,
#endif
#if defined GL_MAX_RECTANGLE_TEXTURE_SIZE
GL_MAX_RECTANGLE_TEXTURE_SIZE,
#endif
#if defined GL_MAX_RENDERBUFFER_SIZE
GL_MAX_RENDERBUFFER_SIZE,
#endif
#if defined GL_MAX_SAMPLE_MASK_WORDS
GL_MAX_SAMPLE_MASK_WORDS,
#endif
#if defined GL_MAX_SAMPLES
GL_MAX_SAMPLES,
#endif
#if defined GL_MAX_SERVER_WAIT_TIMEOUT
GL_MAX_SERVER_WAIT_TIMEOUT,
#endif
#if defined GL_MAX_SUBROUTINES
GL_MAX_SUBROUTINES,
#endif
#if defined GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS
GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS,
#endif
#if defined GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS
GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS,
#endif
#if defined GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS
GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS,
#endif
#if defined GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS
GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS,
#endif
#if defined GL_MAX_TESS_CONTROL_INPUT_COMPONENTS
GL_MAX_TESS_CONTROL_INPUT_COMPONENTS,
#endif
#if defined GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS
GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS,
#endif
#if defined GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS
GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS,
#endif
#if defined GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS
GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS,
#endif
#if defined GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS
GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS,
#endif
#if defined GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS
GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS
GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS,
#endif
#if defined GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS
GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS,
#endif
#if defined GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS
GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS,
#endif
#if defined GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS
GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS,
#endif
#if defined GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS
GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS,
#endif
#if defined GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS
GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS,
#endif
#if defined GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS
GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS,
#endif
#if defined GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS
GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_TESS_GEN_LEVEL
GL_MAX_TESS_GEN_LEVEL,
#endif
#if defined GL_MAX_TESS_PATCH_COMPONENTS
GL_MAX_TESS_PATCH_COMPONENTS,
#endif
#if defined GL_MAX_TEXTURE_BUFFER_SIZE
GL_MAX_TEXTURE_BUFFER_SIZE,
#endif
#if defined GL_MAX_TEXTURE_IMAGE_UNITS
GL_MAX_TEXTURE_IMAGE_UNITS,
#endif
#if defined GL_MAX_TEXTURE_LOD_BIAS
GL_MAX_TEXTURE_LOD_BIAS,
#endif
#if defined GL_MAX_TEXTURE_SIZE
GL_MAX_TEXTURE_SIZE,
#endif
#if defined GL_MAX_TRANSFORM_FEEDBACK_BUFFERS
GL_MAX_TRANSFORM_FEEDBACK_BUFFERS,
#endif
#if defined GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS
GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS,
#endif
#if defined GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS
GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS,
#endif
#if defined GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS
GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS,
#endif
#if defined GL_MAX_UNIFORM_BLOCK_SIZE
GL_MAX_UNIFORM_BLOCK_SIZE,
#endif
#if defined GL_MAX_UNIFORM_BUFFER_BINDINGS
GL_MAX_UNIFORM_BUFFER_BINDINGS,
#endif
#if defined GL_MAX_VARYING_COMPONENTS
GL_MAX_VARYING_COMPONENTS,
#endif
#if defined GL_MAX_VARYING_VECTORS
GL_MAX_VARYING_VECTORS,
#endif
#if defined GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS
GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS,
#endif
#if defined GL_MAX_VERTEX_ATOMIC_COUNTERS
GL_MAX_VERTEX_ATOMIC_COUNTERS,
#endif
#if defined GL_MAX_VERTEX_ATTRIBS
GL_MAX_VERTEX_ATTRIBS,
#endif
#if defined GL_MAX_VERTEX_IMAGE_UNIFORMS
GL_MAX_VERTEX_IMAGE_UNIFORMS,
#endif
#if defined GL_MAX_VERTEX_OUTPUT_COMPONENTS
GL_MAX_VERTEX_OUTPUT_COMPONENTS,
#endif
#if defined GL_MAX_VERTEX_STREAMS
GL_MAX_VERTEX_STREAMS,
#endif
#if defined GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS,
#endif
#if defined GL_MAX_VERTEX_UNIFORM_BLOCKS
GL_MAX_VERTEX_UNIFORM_BLOCKS,
#endif
#if defined GL_MAX_VERTEX_UNIFORM_COMPONENTS
GL_MAX_VERTEX_UNIFORM_COMPONENTS,
#endif
#if defined GL_MAX_VERTEX_UNIFORM_VECTORS
GL_MAX_VERTEX_UNIFORM_VECTORS,
#endif
#if defined GL_MAX_VIEWPORT_DIMS
GL_MAX_VIEWPORT_DIMS,
#endif
#if defined GL_MAX_VIEWPORTS
GL_MAX_VIEWPORTS,
#endif
#if defined GL_MAX_COMPUTE_WORK_GROUP_COUNT
GL_MAX_COMPUTE_WORK_GROUP_COUNT,
#endif
#if defined GL_MAX_COMPUTE_WORK_GROUP_SIZE
GL_MAX_COMPUTE_WORK_GROUP_SIZE,
#endif
#if defined GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS
GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS,
#endif
#if defined GL_MAX_COMPUTE_SHARED_MEMORY_SIZE
GL_MAX_COMPUTE_SHARED_MEMORY_SIZE,
#endif
#if defined GL_MIN_FRAGMENT_INTERPOLATION_OFFSET
GL_MIN_FRAGMENT_INTERPOLATION_OFFSET,
#endif
#if defined GL_MIN_MAP_BUFFER_ALIGNMENT
GL_MIN_MAP_BUFFER_ALIGNMENT,
#endif
#if defined GL_MIN_PROGRAM_TEXEL_OFFSET
GL_MIN_PROGRAM_TEXEL_OFFSET,
#endif
#if defined GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET
GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET,
#endif
#if defined GL_MIN_SAMPLE_SHADING_VALUE
GL_MIN_SAMPLE_SHADING_VALUE,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	LimitQuery
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif

