/*
 *  .file oglplus/enums/ext/debug_source_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/oglplus/ext/debug_source.txt' instead.
 *
 *  Copyright 2010-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

namespace enums {
OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	DebugSource
> ValueRange_(DebugSource*)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVR_DEBUGSOURCE)
#define OGLPLUS_IMPL_EVR_DEBUGSOURCE
{
static const GLenum _values[] = {
#if defined GL_DEBUG_SOURCE_API
GL_DEBUG_SOURCE_API,
#endif
#if defined GL_DEBUG_SOURCE_WINDOW_SYSTEM
GL_DEBUG_SOURCE_WINDOW_SYSTEM,
#endif
#if defined GL_DEBUG_SOURCE_SHADER_COMPILER
GL_DEBUG_SOURCE_SHADER_COMPILER,
#endif
#if defined GL_DEBUG_SOURCE_THIRD_PARTY
GL_DEBUG_SOURCE_THIRD_PARTY,
#endif
#if defined GL_DEBUG_SOURCE_APPLICATION
GL_DEBUG_SOURCE_APPLICATION,
#endif
#if defined GL_DEBUG_SOURCE_OTHER
GL_DEBUG_SOURCE_OTHER,
#endif
#if defined GL_DONT_CARE
GL_DONT_CARE,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	DebugSource
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif
} // namespace enums

