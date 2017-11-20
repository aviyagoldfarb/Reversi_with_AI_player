//
// aviya goldfarb 201509635
//

#include "Board.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"
#include "GameLogic.h"
#include "DisplayGameOnConsole.h"
#include "HumanEnemyGameFlow.h"
#include "AIEnemyGameFlow.h"

void gameMenu(Player *blackPlayer, Player **whitePlayer, AbstractGameLogic *gameLogic, DisplayGame *displayGameOnConsole, GameFlow **gameFlow){
    char playerInput;
    cout << "Please choose your enemy:" << endl;
    cout << "1. Human Player (press H)" << endl;
    cout << "2. AI player (press A)" << endl;
    cin >> playerInput;
    switch (playerInput) {
        case 'H':
        case 'h':
            {
                //the player choose human player as enemy
                *whitePlayer = new HumanPlayer(WHITE);
                *gameFlow = new HumanEnemyGameFlow(blackPlayer, *whitePlayer, gameLogic, displayGameOnConsole);
                break;
            }
        case 'A':
        case 'a':
            {
                //the player choose AI player as enemy
                *whitePlayer = new AIPlayer(WHITE);
                *gameFlow = new AIEnemyGameFlow(blackPlayer, *whitePlayer, gameLogic, displayGameOnConsole);
                break;
            }
    }
}

int main() {

    //creating an instance of Board object
    Board *board = new Board();
    Player *blackPlayer = new HumanPlayer(BLACK);
    Player *whitePlayer;
    AbstractGameLogic *gameLogic = new GameLogic(board);
    DisplayGame *displayGameOnConsole = new DisplayGameOnConsole(board);
    GameFlow *gameFlow;

    gameMenu(blackPlayer, &whitePlayer, gameLogic, displayGameOnConsole, &gameFlow);

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

