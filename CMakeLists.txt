cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 17) #Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) #require C++17 (otherwise allows fallback to earlier version)
set(CMAKE_CXX_EXTENSIONS OFF) #Don't use non-standard compiler extensions

#turn on all warnings, minus some that are not useful

set(CMAKE_CXX_FLAGS
    "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -Weverything \
    -Wno-padded -Wno-c++98-compat -Wno-weak-vtables -Wno-missing-prototypes \
    ")

project (ProxyDesignPattern)
set(SOURCES 
	ActualBeer.cpp ActualBeer.hpp
	SummerShandyProxy.cpp SummerShandyProxy.hpp
	Drunk.cpp Drunk.hpp
	main.cpp
)

#add_executable(${SOURCES})
add_executable(ProxyDesignPattern ${SOURCES} main.cpp)
