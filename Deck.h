#pragma once
#include <string>
#include "Card.h"
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;
<<<<<<< HEAD


class Deck {
	 vector<Card> theDeck;
=======

class Deck {
private:
	 stack<Card> deck_h;
>>>>>>> 0eb06512edd14c584366493fdedbf38f724f390c
public:

	 bool isEmpty() {
		return deck_h.empty();
	}

	 int getNumCardsInDeck() {
		return deck_h.size();
	}

	 void shuffle() { 
		 random_shuffle(theDeck.begin(), theDeck.end());
	}

	 Card draw() {
<<<<<<< HEAD
		 Card tempCard(theDeck.back().getId(), theDeck.back().getCardType(), theDeck.back().getCardColor());
		 theDeck.pop_back();
=======
		 Card tempCard(deck_h.top().getId(), deck_h.top().getCardType(), deck_h.top().getCardColor());
		 deck_h.pop();
>>>>>>> 0eb06512edd14c584366493fdedbf38f724f390c
		 return tempCard;

	}

	 Deck() {
		//here we could initialize the deck (push all of the cards on to the deck that it starts off with)
		//So we will create of the needed cards and push them onto the stack





	}

	 void addCardToDeck(Card cardToBeAdded) {
<<<<<<< HEAD
		theDeck.push_back(cardToBeAdded);
=======
		deck_h.push(cardToBeAdded);
>>>>>>> 0eb06512edd14c584366493fdedbf38f724f390c
	}

};
