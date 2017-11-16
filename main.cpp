//
// aviya goldfarb 201509635
//

#include "Board.h"
#include "HumanPlayer.h"
#include "GameLogic.h"
#include "DisplayGameOnConsole.h"
#include "GameFlow.h"

int main() {

    //creating an instance of Board object
    Board *board = new Board();
    Player *blackPlayer = new HumanPlayer(BLACK);
    Player *whitePlayer = new HumanPlayer(WHITE);
    AbstractGameLogic *gameLogic = new GameLogic(board);
    DisplayGame *displayGameOnConsole = new DisplayGameOnConsole(board);

    GameFlow *gameFlow = new GameFlow(blackPlayer, whitePlayer, gameLogic, displayGameOnConsole);
    gameFlow->playTheGame();

    //delete created objects
    delete board;
    delete blackPlayer;
    delete whitePlayer;
    delete gameLogic;
    delete displayGameOnConsole;
    delete gameFlow;
    return 0;
}