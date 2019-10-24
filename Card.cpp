#include "Card.h"
#include<iostream>
using namespace std;

//constructor
Card::Card(int indexR, int indexS){
    iRank=indexR;
    iSuit=indexS;
    value=(indexR*4)+indexS;

}

//overloaded operator
bool Card::operator< (Card rhs){
    if(value<rhs.value){
        return true;
    }else {
        return false;
    }
}
//returns string with card written out
string Card::printCard() {
    iRank=value/4;
    iSuit=value%4;
    return ranks[iRank]+" of "+suits[iSuit];

}
