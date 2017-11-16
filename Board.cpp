//
// aviya goldfarb 201509635
//

#include "Board.h"

Board::Board(int rows, int columns) : rows(rows) , columns(columns) {
    //creating two dimensional vector of type Cell
    this->board = vector< vector<Cell> >(rows, vector<Cell>(columns));
    //initializing the board as requested
    this->board[(rows/2)-1][(columns/2)-1] = WHITE;
    this->board[(rows/2)][(columns/2)] = WHITE;
    this->board[(rows/2)-1][(columns/2)] = BLACK;
    this->board[(rows/2)][(columns/2)-1] = BLACK;
}

int Board::getRows() const {
    return rows;
}

int Board::getColumns() const {
    return columns;
}

const vector<vector<Cell> > &Board::getBoard() const {
    return board;
}

void Board::setBoard(int i, int j, Sign newCellSign) {
    this->board[i][j] = newCellSign;
}

Board::~Board() {

}