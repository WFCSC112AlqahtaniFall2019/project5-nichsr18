#include "Deck.h"
#include<iostream>
using namespace std;

//constructor
Deck::Deck(int size, int cLeft) {
    //cout<<"constructor called"<<endl;
        cards=new Card[size];
        arraySize=size;
        cardsLeft=cLeft;
        fillDeck();

}

//Destructor, part of big 3
Deck::~Deck() {
    //cout<<"Destructor Called"<<endl;
    delete [] cards;
}

//Copy Constructor, part of big 3
Deck::Deck(const Deck &list) {
    //cout<<"Copy Constructor called"<<endl;
    cards=new Card [list.arraySize];
    for(int i=0;i<arraySize;i++){
        cards[i]=list.cards[i];
    }
    arraySize=list.arraySize;
    cardsLeft=list.cardsLeft;
}

//Copy assignment operator, part of big 3
Deck& Deck::operator=(const Deck& rhs) {
    //cout<<"assignment operator called"<<endl;
    Deck temp(rhs);
    swap(cards,temp.cards);
    return *this;
}

//fills deck with integers 0-51
void Deck::fillDeck() {
   // cout<<"fill deck called"<<endl;
    for(int r=0; r <13; r++){
         for(int s=0;s<4;s++){
             cardsLeft++;
             cards[cardsLeft].value=(r*4)+s;
             //cout<<cards[cardsLeft].value<<' ';
         }
    }
    //cout<<endl;

}
//shuffles deck by swapping two random indices
void Deck::shuffleDeck() {
    //cout<<"shuffle deck called"<<endl;
    for(int i=0;i<(cardsLeft^2);i++){
        swap(cards[rand()%(cardsLeft)],cards[rand()%(cardsLeft)]);
    }
}

//gets card from top of deck moves cards left over
Card Deck::drawCard() {
    //cout<<"drawCard called"<<endl;
    cardsLeft--;
    return cards[cardsLeft];
}

bool Deck::addCard(Card newCard) {
    if(cardsLeft<arraySize){
        cards[cardsLeft]=newCard;
        return true;
    }else{
        return false;
    }
}
