add_library(pbrt geometry.cpp)
target_link_libraries(pbrt 
	PUBLIC glm)
target_include_directories(pbrt
	INTERFACE .)