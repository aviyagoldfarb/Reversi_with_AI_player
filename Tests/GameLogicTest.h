//
// Udi Goldman 301683264 , Aviya Goldfarb 201509635
//

#ifndef EX3_GAMELOGICTEST_H
#define EX3_GAMELOGICTEST_H

#include "gtest/gtest.h"
#include "../GameLogic.h"

#include <iostream>
using namespace std;

class GameLogicTest: public testing::Test {
public:
    GameLogicTest(){
        //creating an instance of Board object
        this->board = new Board();
        this->gameLogic = new GameLogic(board);
       // this->cell = Point(0, 0);
        Point cell2(1, 2);
        Point cell3(5, 8);
        vector<Point> possibleMovesVectorA;
        possibleMovesVectorA.push_back(cell2);
        possibleMovesVectorA.push_back(cell3);
        possibleMovesVectorA.push_back(cell);
        this->possibleMovesVector = possibleMovesVectorA;
    }

    virtual void SetUp() {
        cout << "Setting up" << endl;
        for(int i = 0; i < board->getRows(); i++){
            for(int j = 0; j < board->getColumns(); j++){
                this->board->setBoard(i, j, WHITE);
            }
        }
    }



    virtual void TearDown() {
        cout << "Tearing down" << endl;
    }

    ~GameLogicTest(){
        delete gameLogic;
    }

protected:
    Board *board;
    GameLogic *gameLogic;
    vector<Point> possibleMovesVector;
    Point cell = Point(1, 1);
};

#endif //EX3_GAMELOGICTEST_H
