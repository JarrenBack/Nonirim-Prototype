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
		//here we could initialize the deck (push all of the cards on to the deck that it starts off with)
		//So we will create of the needed cards and push them onto the stack





	}

	 void addCardToDeck(Card cardToBeAdded) {
<<<<<<< HEAD
		
=======
		deck_h.push_back(cardToBeAdded);
>>>>>>> 0eb06512edd14c584366493fdedbf38f724f390c
	}

};
