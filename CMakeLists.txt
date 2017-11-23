cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(lib/googletest-release-1.8.0)

include_directories(lib/googletest-release-1.8.0/googletest/include)
include_directories(lib/googletest-release-1.8.0/googlemock/include)

set(SOURCE_FILES main.cpp Board.cpp Board.h Cell.cpp Cell.h DisplayGameOnConsole.cpp DisplayGameOnConsole.h HumanPlayer.cpp HumanPlayer.h GameLogic.cpp GameLogic.h Point.cpp Point.h HumanEnemyGameFlow.cpp HumanEnemyGameFlow.h DisplayGame.h Player.h AbstractGameLogic.h AIPlayer.cpp AIPlayer.h GameFlow.h AIEnemyGameFlow.cpp AIEnemyGameFlow.h Tests/main.cpp)
add_executable(ex3.out ${SOURCE_FILES})

target_link_libraries(ex3.out gtest gtest_main)