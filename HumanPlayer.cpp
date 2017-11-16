//
// aviya goldfarb 201509635
//

#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(Sign playerSign) : Player(playerSign) {

}

Sign HumanPlayer::getPlayerSign() const {
    return playerSign;
}

void HumanPlayer::setPlayerSign(Sign playerSign) {
    this->playerSign = playerSign;
}

int HumanPlayer::getPlayerScore() const {
    return playerScore;
}

void HumanPlayer::setPlayerScore(int addToPlayerScore) {
    this->playerScore += addToPlayerScore;
}

HumanPlayer::~HumanPlayer() {

}


