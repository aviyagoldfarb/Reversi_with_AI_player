//
// Udi Goldman 301683264 , Aviya Goldfarb 201509635
//

#include "AIPlayerTest.h"

TEST_F(AIPlayerTest, miniMaxAlgorithmTest) {
/*
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

    EXPECT_NE(*this->point4, this->whitePlayer->miniMaxAlgorithm(this->possibleMovesVector, gameLogic, blackPlayer))
                        << "The function didn't choose the best move";
    //EXPECT_EQ(this->point2, this->whitePlayer->miniMaxAlgorithm(this->possibleMovesVector, gameLogic, blackPlayer))
    //                    << "The function didn't choose the best move" ;
    EXPECT_EQ(*this->point3, this->whitePlayer->miniMaxAlgorithm(this->possibleMovesVector, gameLogic, blackPlayer))
                        << "The function didn't choose the best move" ;
}

