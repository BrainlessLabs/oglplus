#  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
#  Software License, Version 1.0. (See accompanying file
#  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#
find_package(Boost)
if(Boost_FOUND)
	set(BoostConfig_FOUND ON)
	set(BoostConfig_INCLUDE_DIRS ${Boost_INCLUDE_DIRS})
	set(OGLPLUS_USE_BOOST_CONFIG 1)
else()
	set(OGLPLUS_USE_BOOST_CONFIG 0)
endif()
