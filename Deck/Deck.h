//
// Created by vecr on 10/05/18.
//

#ifndef GOP_DECK_H
#define GOP_DECK_H


#include "Card.h"
#include "../Utils/Util.h"
#include "Effects.h"
#include "../Player/Player.h"
#include "../Dice/Dice.h"
#include <vector>
#include <iostream>


class Deck {
private:
    int numberOfCards, playerNumber;
    Effects e;
    Player p;
    dice d;
    Colors c;
    static std::vector<Card> cards;
    Player executeAction(int effectNumber);
public:
    Deck();
    int getCard();
    int getEffectFromCardNumber (int cardNumber);
    Player executeCardAction (Player p, int playerNumber);
    Player executeCellAction (Player p, int playerNumber, int effectNumber);
    void stepsMessage(int playerNumber, int step);
};


#endif //GOP_DECK_H
