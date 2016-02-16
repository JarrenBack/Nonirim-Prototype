#pragma once
#include <string>
#include "Card.h"
#include <stack>

using namespace std;


class Deck {
	 stack<Card> theDeck;
public:

	 bool isEmpty() {
		return theDeck.empty();
	}

	 int getNumCardsInDeck() {
		return theDeck.size();
	}

	 void shuffle() {

	}

	 Card draw() {
		 Card tempCard(theDeck.top().getId(), theDeck.top().getCardType(), theDeck.top().getCardColor());
		 theDeck.pop();
		 return tempCard;

	}

	 Deck() {
		//here we could initialize the deck (push all of the cards on to the deck that it starts off with)
		//So we will create of the needed cards and push them onto the stack
		 Card blueKey(1, "key", "blue");
		 Card greenSun(2, "sun", "green");
		 Card brownMoon(3, "moon", "brown");
		 Card greenSun2(4, "sun", "green");
		 Card brownMoon2(5, "moon", "brown");
		 Card blueKey2(6, "key", "blue");
		 Card greenSun3(7, "sun", "green");

		 addCardToDeck(blueKey);
		 addCardToDeck(greenSun);
		 addCardToDeck(brownMoon);
		 addCardToDeck(greenSun2);
		 addCardToDeck(brownMoon2);
		 addCardToDeck(blueKey2);
		 addCardToDeck(greenSun3);



	}

	 void addCardToDeck(Card cardToBeAdded) {
		theDeck.push(cardToBeAdded);
	}

};
