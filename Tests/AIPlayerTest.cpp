//
// Created by udi on 25/11/17.
//

#include "AIPlayerTest.h"

TEST_F(AIPlayerTest, miniMaxAlgorithm) {
/**
    for(int i = 0; i < board->getRows(); i++){
        for(int j = 0; j < board->getColumns(); j++){
            this->board->setBoard(i, j, BLACK);
        }
    }
    this->board->setBoard(1,1,EMPTY);
    this->possibleMovesVector = this->gameLogic->possibleMoves(this->aiPlayer, this->humanPlayer);
    EXPECT_EQ(this->point1, this->aiPlayer->miniMaxAlgorithm(this->possibleMovesVector, gameLogic, humanPlayer))
                        << "The function return wrong cell, when there is only one cell to return";

    for(int i = 0; i < board->getRows(); i++){
        for(int j = 0; j < board->getColumns(); j++){
            this->board->setBoard(i, j, EMPTY);
        }
    }

*/

    EXPECT_NE(this->badPoint, this->aiPlayer->miniMaxAlgorithm(this->possibleMovesVector, gameLogic, humanPlayer))
                    << "The function return the wrong optimal cell";
 //   EXPECT_EQ(this->point2, this->aiPlayer->miniMaxAlgorithm(this->possibleMovesVector, gameLogic, humanPlayer))
   //                     << "The function didn't choose the best move" ;
    EXPECT_EQ(this->point3, this->aiPlayer->miniMaxAlgorithm(this->possibleMovesVector, gameLogic, humanPlayer))
                        << "The function didn't choose the best move" ;
}

