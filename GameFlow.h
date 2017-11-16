//
// aviya goldfarb 201509635
//

#ifndef EX2_GAMEFLOW_H
#define EX2_GAMEFLOW_H

#include "Player.h"
#include "GameLogic.h"
#include "DisplayGameOnConsole.h"
#include "Point.h"
#include <limits>

/**
 * the class GameFlow defines GameFlow object.
 */
class GameFlow {
public:
    /**
     * constructor of GameFlow object.
     * @param blackPlayer
     * @param whitePlayer
     * @param gameLogic
     * @param DisplayGameOnConsole
     */
    GameFlow(Player *blackPlayer, Player *whitePlayer, AbstractGameLogic *gameLogic, DisplayGame *DisplayGameOnConsole);
    /**
     * checks if the chosen cell is in the possibleMovesVector.
     * @param possibleMovesVector
     * @param chosenCell
     * @return boolean
     */
    bool chosenCellValidity(vector<Point> possibleMovesVector, Point chosenCell);
    /**
     * responsible for the turn exchanges between the players.
     */
    void setNextTurn();
    /**
     * responsible for the game's running.
     */
    void playTheGame();

private:
    //pointers to HumanPlayer object
    Player *blackPlayer, *whitePlayer;
    //pointer to GameLogic object
    AbstractGameLogic *gameLogic;
    //pointer to DisplayGameOnConsole object
    DisplayGame *displayGameOnConsole;
    //pointers to HumanPlayer object
    Player *turn, *nextTurn;
};

#endif //EX2_GAMEFLOW_H
