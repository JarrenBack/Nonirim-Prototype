#pragma once

#include "Card.h"
#include "Deck.h"

using namespace std;
class Hand {
public:
	Hand(){}
	Hand(Card c1, Card c2, Card c3, Card c4, Card c5)
	{
			hand_h[0] = c1;
			hand_h[1] = c2;
			hand_h[2] = c3;
			hand_h[3] = c4;
			hand_h[4] = c5;
	}
	void addCard(Card newCard)
	{
		int i = 0;
		while (hand_h[i].getId() != 0)
		{
			i++;
		}
		//newCard.setIsDrawn = true;
		hand_h[i] = newCard;
	}
	void removeCard(Card toRemoveCard)
	{
		int i = 0;
		while (hand_h[i] != toRemoveCard)
		{
			i++;
		}
		hand_h[i].remove();
	}

	void seeHand_h()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Card #" << i << endl;
			cout << hand_h[i].getCardType() << endl;
			cout << hand_h[i].getCardColor() << endl << endl;
		}
	}
private:
	Card hand_h[5];


};