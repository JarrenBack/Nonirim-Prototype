#pragma once
#include <string>
#include "Card.h"
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;


class Deck {
	 vector<Card> theDeck;
public:

	 bool isEmpty() {
		return theDeck.empty();
	}

	 int getNumCardsInDeck() {
		return theDeck.size();
	}

	 void shuffle() { 
		 random_shuffle(theDeck.begin(), theDeck.end());
	}

	 Card draw() {
		 Card tempCard(theDeck.back().getId(), theDeck.back().getCardType(), theDeck.back().getCardColor());
		 theDeck.pop_back();
		 return tempCard;

	}

	 Deck() {
		//here we could initialize the deck (push all of the cards on to the deck that it starts off with)
		//So we will create of the needed cards and push them onto the stack


		 string sun = "sun" , moon = "moon", key = "key", blue = "blue", brown = "brown",
			 green = "green", red = "red" , nightmare = "nightmare", door = "door";

		 int i = 1;	
		 for (int j = 0; i < 9; j++) {
			 Card c(i, sun, red);
			 addCardToDeck(c);
			 i++;
		 }

		 for (int j = 0; i < 8; j++) {
			 Card c(i, sun, blue);
			 addCardToDeck(c);
			 i++;
		 }

		 for (int j = 0; i < 7; j++) {
			 Card c(i, sun, green);
			 addCardToDeck(c);
			 i++;
		 }

		 for (int j = 0; i < 6; j++) {
			 Card c(i, sun, brown);
			 addCardToDeck(c);
			 i++;
		 }
		 
		 for (int j = 0; i < 4; j++) {
			 Card c(i, moon, red);
			 i++;
			 Card c1(i, moon, blue);
			 i++;
			 Card c2(i, moon, green);
			 i++;
			 Card c3(i, moon, brown);
			 i++;
			 addCardToDeck(c);
			 addCardToDeck(c1);
			 addCardToDeck(c2);
			 addCardToDeck(c3);
			 
		 }

		 for (int j = 0; i < 3; j++) {
			 Card c(i, key, red);
			 i++;
			 Card c1(i, key, blue);
			 i++;
			 Card c2(i, key, green);
			 i++;
			 Card c3(i, key, brown);
			 i++;
			 addCardToDeck(c);
			 addCardToDeck(c1);
			 addCardToDeck(c2);
			 addCardToDeck(c3);

		 }

		 for (int j = 0; j < 10; j++) {
			 Card c(i, nightmare, nightmare);
			 addCardToDeck(c);
			 i++;
		 }

		 for (int j = 0; i < 2; j++) {
			 Card c(i, door, red);
			 i++;
			 Card c1(i, door, blue);
			 i++;
			 Card c2(i, door, green);
			 i++;
			 Card c3(i, door, brown);
			 i++;
			 addCardToDeck(c);
			 addCardToDeck(c1);
			 addCardToDeck(c2);
			 addCardToDeck(c3);

		 }


	}

	 void addCardToDeck(Card cardToBeAdded) {
		theDeck.push_back(cardToBeAdded);
	}

};
