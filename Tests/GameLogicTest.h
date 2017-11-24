//
// Udi Goldman 301683264 , Aviya Goldfarb 201509635
//

#ifndef EX3_GAMELOGICTEST_H
#define EX3_GAMELOGICTEST_H

#include "gtest/gtest.h"
#include "../GameLogic.h"
#include "../HumanPlayer.h"

#include <iostream>
using namespace std;

class GameLogicTest: public testing::Test {
public:
    GameLogicTest(){
        //creating an instance of Board object
        this->board = new Board();
        this->gameLogic = new GameLogic(board);
        this->blackPlayer = new HumanPlayer(BLACK);
        this->whitePlayer = new HumanPlayer(WHITE);
    }

    virtual void SetUp() {
        cout << "Setting up" << endl;

        Point cell2(3, 4);
        Point cell3(4, 3);
        Point cell4(6, 5);
        this->possibleMovesVector.push_back(cell4);
        this->possibleMovesVector.push_back(cell3);
        this->possibleMovesVector.push_back(cell2);
        this->possibleMovesVector.push_back(cell);
    }

    virtual void TearDown() {
        cout << "Tearing down" << endl;
    }

    ~GameLogicTest(){
        delete gameLogic;
        delete blackPlayer;
        delete whitePlayer;
    }

protected:
    Board *board;
    GameLogic *gameLogic;
    vector<Point> possibleMovesVector;
    Point cell = Point(5, 6);
    Player *blackPlayer, *whitePlayer;
};

#endif //EX3_GAMELOGICTEST_H
