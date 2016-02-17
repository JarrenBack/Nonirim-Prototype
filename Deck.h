#pragma once
#include <string>
#include "Card.h"
#include <stack>

using namespace std;

class Deck {
private:
	 stack<Card> deck_h;
public:

	 bool isEmpty() {
		return deck_h.empty();
	}

	 int getNumCardsInDeck() {
		return deck_h.size();
	}

	 void shuffle() {

	}

	 Card draw() {
		 Card tempCard(deck_h.top().getId(), deck_h.top().getCardType(), deck_h.top().getCardColor());
		 deck_h.pop();
		 return tempCard;

	}

	 Deck() {
		//here we could initialize the deck (push all of the cards on to the deck that it starts off with)
		//So we will create of the needed cards and push them onto the stack





	}

	 void addCardToDeck(Card cardToBeAdded) {
		deck_h.push(cardToBeAdded);
	}

};
