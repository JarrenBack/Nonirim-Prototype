#pragma once
#include <string>
#include "Card.h"
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;




class Deck {
private:
	 vector<Card> deck_h;

public:

	 bool isEmpty() {
		return deck_h.empty();
	}

	 int getNumCardsInDeck() {
		return deck_h.size();
	}

	 void shuffle() { 
		 random_shuffle(deck_h.begin(), deck_h.end());
	}

	 Card draw() {

		 Card tempCard(deck_h.back().getId(), deck_h.back().getCardType(), deck_h.back().getCardColor());
		 deck_h.pop_back();
		 return tempCard;

	}

	 Deck() {

	}

	 void addCardToDeck(Card cardToBeAdded) {

		deck_h.push_back(cardToBeAdded);
	}

};
