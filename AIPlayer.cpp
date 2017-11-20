//
// aviya goldfarb 201509635
//

#include "AIPlayer.h"

AIPlayer::AIPlayer(Sign playerSign) : Player(playerSign) {

}

Sign AIPlayer::getPlayerSign() const {
    return playerSign;
}

void AIPlayer::setPlayerSign(Sign playerSign) {
    this->playerSign = playerSign;
}

int AIPlayer::getPlayerScore() const {
    return playerScore;
}

void AIPlayer::setPlayerScore(int addToPlayerScore) {
    this->playerScore += addToPlayerScore;
}

AIPlayer::~AIPlayer() {

}
