//
// Udi Goldman 301683264 , Aviya Goldfarb 201509635
//

#include "GameLogicTest.h"

TEST_F(GameLogicTest, fullBoardTest){
    EXPECT_EQ(this->gameLogic->fullBoard(), true) << "the function fullBoard does not recognize full board";
    this->board->setBoard(1, 1, EMPTY);
    EXPECT_EQ(this->gameLogic->fullBoard(), false) << "the function fullBoard does not recognize unfull board";
}

