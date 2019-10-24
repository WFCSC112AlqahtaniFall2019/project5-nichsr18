#ifndef BLINDMANSBLUFF_DECK_H
#define BLINDMANSBLUFF_DECK_H

#include "Card.h"

class Deck {
public:
    Deck(int arraySize=52, int cardsLeft=0);
    Deck(const Deck& list);
    ~Deck();
    void fillDeck();
    void shuffleDeck();
    Card drawCard();
    bool addCard(Card newCard);
    Deck& operator=(const Deck& rhs);


private:
    Card* cards;
    int arraySize;
    int cardsLeft;
};


#endif //BLINDMANSBLUFF_DECK_H
