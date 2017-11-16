cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Board.cpp Board.h Cell.cpp Cell.h DisplayGameOnConsole.cpp DisplayGameOnConsole.h HumanPlayer.cpp HumanPlayer.h GameLogic.cpp GameLogic.h Point.cpp Point.h GameFlow.cpp GameFlow.h DisplayGame.h Player.h AbstractGameLogic.h)
add_executable(ex3.out ${SOURCE_FILES})