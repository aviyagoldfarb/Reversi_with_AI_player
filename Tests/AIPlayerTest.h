//
// Created by udi on 25/11/17.
//

#ifndef EX3_AIPLAYERTEST_H
#define EX3_AIPLAYERTEST_H

#include "gtest/gtest.h"
#include "../GameLogic.h"
#include "../AIPlayer.h"
#include "../HumanPlayer.h"
#include "../DisplayGameOnConsole.h"
#include "../AIEnemyGameFlow.h"
#include <iostream>


class AIPlayerTest: public testing::Test {
public:
    AIPlayerTest(){

        this->board = new Board();
        this->board->setBoard((board->getRows() / 2) - 1,(board->getColumns() / 2) - 1, BLACK);
        this->board->setBoard((board->getRows() / 2) - 2,(board->getColumns() / 2) - 1, BLACK);
        this->gameLogic = new GameLogic(board);
        this->aiPlayer = new AIPlayer(BLACK);
        this->humanPlayer = new HumanPlayer(WHITE);
        this->possibleMovesVector = this->gameLogic->possibleMoves(this->humanPlayer,this->aiPlayer);
    }

    virtual void SetUp() {
        cout << "Setting up" << endl;
    }
    virtual void TearDown() {
        cout << "Tearing down" << endl;
    }

    ~AIPlayerTest() {
        delete gameLogic;
        delete aiPlayer;
        delete humanPlayer;
    }

protected:
    Board *board;
    GameLogic *gameLogic;
    vector<Point> possibleMovesVector;
    HumanPlayer *humanPlayer;
    AIPlayer *aiPlayer;
    const Point point1 = Point(1, 1);
    const Point point2 = Point(5, 3);
    const Point point3 = Point(3, 3);
    const Point badPoint = Point(3, 5);

};

#endif //EX3_AIPLAYERTEST_H
