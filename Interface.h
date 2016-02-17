#pragma once
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Labyrinth.h"

class Interface
{
public:
	Interface() {
		string sun = "sun", moon = "moon", key = "key", blue = "blue", brown = "brown",
			green = "green", red = "red", nightmare = "nightmare", door = "door";

		int i = 1;
		for (int j = 0; j < 9; j++) {
			Card c(i, sun, red);
			deckInter.addCardToDeck(c);
			i++;
		}

		for (int j = 0; j < 8; j++) {
			Card c(i, sun, blue);
			deckInter.addCardToDeck(c);
			i++;
		}

		for (int j = 0; j < 7; j++) {
			Card c(i, sun, green);
			deckInter.addCardToDeck(c);
			i++;
		}

		for (int j = 0; j < 6; j++) {
			Card c(i, sun, brown);
			deckInter.addCardToDeck(c);
			i++;
		}

		for (int j = 0; j < 4; j++) {
			Card c(i, moon, red);
			i++;
			Card c1(i, moon, blue);
			i++;
			Card c2(i, moon, green);
			i++;
			Card c3(i, moon, brown);
			i++;
			deckInter.addCardToDeck(c);
			deckInter.addCardToDeck(c1);
			deckInter.addCardToDeck(c2);
			deckInter.addCardToDeck(c3);

		}

		for (int j = 0; j < 3; j++) {
			Card c(i, key, red);
			i++;
			Card c1(i, key, blue);
			i++;
			Card c2(i, key, green);
			i++;
			Card c3(i, key, brown);
			i++;
			deckInter.addCardToDeck(c);
			//deckInter2.addCardToDeck(c);
			deckInter.addCardToDeck(c1);
			deckInter.addCardToDeck(c2);
			deckInter.addCardToDeck(c3);

		}

		for (int j = 0; j < 10; j++) {
			Card c(i, nightmare, nightmare);
			deckInter.addCardToDeck(c);
			i++;
		}

		for (int j = 0; j < 2; j++) {
			Card c(i, door, red);
			i++;
			Card c1(i, door, blue);
			i++;
			Card c2(i, door, green);
			i++;
			Card c3(i, door, brown);
			i++;
			deckInter.addCardToDeck(c);
			deckInter.addCardToDeck(c1);
			deckInter.addCardToDeck(c2);
			deckInter.addCardToDeck(c3);

		}
	}
	//drawCardIntoHand
	void drawFromDeckIntoHand() {
		Card tempCard = deckInter.draw();
		tempCard.setIsDrawn(true);
		theHand.addCard(tempCard);

	}
	//playCardFromHand
	//DiscardFromHand
	//

	void showHand() {
		theHand.seehand_h();
	}

	void shuffleDeck() {
		deckInter.shuffle();
	}

private:
	Deck deckInter;
	Hand theHand;
};
