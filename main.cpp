#include <iostream>
#include "Deck.h"
#include "Hand.h"
#include "Labyrinth.h"

using namespace std;

int main()
{
	Deck theDeck;
	Labyrinth theLab;
	Hand theHand(theDeck.draw(), theDeck.draw(), theDeck.draw(), theDeck.draw(), theDeck.draw());

	theHand.seeHand();

	cout << endl << endl;

	theLab.seeLab();

	cout << endl << endl;

	theLab.seeLab();




	system("pause");
	return 0;
}