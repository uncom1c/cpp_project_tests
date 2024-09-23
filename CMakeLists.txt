
#### THIS CODE IS NOT MINE AND WAS TAKEN FROM A FORUM
cmake_minimum_required( VERSION 3.10 )

project( Kartinka VERSION 1.0 LANGUAGES CXX )
set( CMAKE_CXX_STANDARD 14 )

set( SFML_COMPILER_TYPE gcc_x32 )
#-----------------------------------------------------------

set( SRC 
    main.cpp 
)
set( INC 
    inc/
    SFML_${SFML_COMPILER_TYPE}/include/
)

add_subdirectory(sorts)
add_subdirectory(test)


set( CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/SFML_${SFML_COMPILER_TYPE}" )
find_package( SFML 2.6.1 REQUIRED network audio graphics window system )
set( SFML_LIBS sfml-network sfml-audio sfml-graphics sfml-window sfml-system )

add_executable( ${PROJECT_NAME} ${SRC} )
target_include_directories( ${PROJECT_NAME} PUBLIC ${INC} )
target_link_libraries( ${PROJECT_NAME} PUBLIC ${SFML_LIBS} ${OPEN_GL_LIBS} )
#### THIS CODE IS NOT MINE AND WAS TAKEN FROM A FORUM

