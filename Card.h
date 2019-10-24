#ifndef BLINDMANSBLUFF_CARD_H
#define BLINDMANSBLUFF_CARD_H
#include <string>
using namespace std;

// ranks are ordered Ace-low and Queen-high
const string ranks[] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","King","Queen"};
// suits are ordered alphabetically
const string suits[] = {"Clubs","Diamonds","Hearts","Spades"};

class Card {
    public:
    //constructor with capabilities to take a specific card as a parameter through index
    Card(int iRank=0, int iSuit=0);
    string printCard();
    int value;
    bool operator< (Card rhs);
private:
    int iRank;
    int iSuit;







};


#endif //BLINDMANSBLUFF_CARD_H
