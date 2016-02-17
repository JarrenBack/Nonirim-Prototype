#pragma once
#include <iostream>
#include <list>
#include "Card.h"

using namespace std;

class Labyrinth
{
	list <Card> theLab;
public:
	Labyrinth()
	{

	}
	void addCard(Card newCard)
	{
		theLab.push_back(newCard);
	}
	void removeCard(Card toRemoveCard)
	{
		theLab.remove(toRemoveCard);
	}

	void seeLab()
	{
		int i = 0;
		for (list<Card>::iterator itr = theLab.begin(); itr != theLab.end(); ++itr)
		{
			cout << "Card #" << i << endl;
			cout << itr->getCardType() << endl;
			cout << itr->getCardColor() << endl << endl;
			i++;
		}
	}
};