//
// Udi Goldman 301683264 , Aviya Goldfarb 201509635
//

#include "GameLogicTest.h"

TEST_F(GameLogicTest, fullBoardTest){
    EXPECT_EQ(this->gameLogic->fullBoard(), true) << "the function fullBoard does not recognize full board";
    this->board->setBoard(1, 1, EMPTY);
    EXPECT_EQ(this->gameLogic->fullBoard(), false) << "the function fullBoard does not recognize unfull board";
}

TEST_F(GameLogicTest, checkCellExistence) {
    EXPECT_EQ(true, gameLogic->checkCellExistence(this->possibleMovesVector, this->cell)) << "the function didn't find the existense cell ";
    this->possibleMovesVector.pop_back();
    EXPECT_NE(true, gameLogic->checkCellExistence(this->possibleMovesVector, this->cell)) << "the function found a a cell that not exist";
}

TEST_F(GameLogicTest, possibleMoves) {

}