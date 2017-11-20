//
// aviya goldfarb 201509635
//

#ifndef EX3_AIPLAYER_H
#define EX3_AIPLAYER_H

#include "Player.h"

/**
 * the class AIPlayer defines AIPlayer object.
 */
class AIPlayer: public Player{
public:
    /**
     * constructor of AIPlayer object.
     * @param playerSign value from enum Sign.
     */
    AIPlayer(Sign playerSign = EMPTY);
    /**
     * get the sign of the player(BLACK or WHITE).
     * @return sign of the player.
     */
    Sign getPlayerSign() const;
    /**
     * set the sign of the player(BLACK or WHITE).
     * @param playerSign.
     */
    void setPlayerSign(Sign playerSign);
    /**
     * get the score of the player.
     * @return playerScore.
     */
    int getPlayerScore() const;
    /**
     * set the score of the player.
     * @param addToPlayerScore number to add to the current score.
     */
    void setPlayerScore(int addToPlayerScore);
    /**
     * destructor of AIPlayer object.
     */
    virtual ~AIPlayer();
};

#endif //EX3_AIPLAYER_H
