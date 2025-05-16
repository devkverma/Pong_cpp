cmake_minimum_required(VERSION 3.10)

#Set project name and version
project(Pong VERSION 1.0)

#Set the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the SFML package
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Add the executable for your project
add_executable(Pong 
                src/main.cpp
                src/Ball.cpp
                src/Wall.cpp
                )

# Link SFML libraries to your project
target_link_libraries(Pong sfml-graphics sfml-window sfml-system)