#pragma once

#include "Card.h"
#include "Deck.h"

using namespace std;
class Hand {
public:
	Hand(Card c1, Card c2, Card c3, Card c4, Card c5)
	{
			hand[0] = c1;
			hand[1] = c2;
			hand[2] = c3;
			hand[3] = c4;
			hand[4] = c5;
	}
	void addCard(Card newCard)
	{
		int i = 0;
		while (hand[i].getId() != 0)
		{
			i++;
		}
		//newCard.setIsDrawn = true;
		hand[i] = newCard;
	}
	void removeCard(Card toRemoveCard)
	{
		int i = 0;
		while (hand[i] != toRemoveCard)
		{
			i++;
		}
		hand[i].remove();
	}

	void seeHand()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Card #" << i << endl;
			cout << hand[i].getCardType() << endl;
			cout << hand[i].getCardColor() << endl << endl;
		}
	}
private:
	Card hand[5];


};