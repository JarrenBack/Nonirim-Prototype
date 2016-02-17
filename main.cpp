#include <iostream>

#include "Interface.h"

using namespace std;

int main()
{
	//Deck theDeck;
	//Labyrinth theLab;
	////Hand theHand(theDeck.draw(), theDeck.draw(), theDeck.draw(), theDeck.draw(), theDeck.draw());

	//theHand.seeHand();

	//cout << endl << endl;

	//theLab.seeLab();

	//cout << endl << endl;

	//theLab.seeLab();

	Interface theInter;

	theInter.drawFromDeckIntoHand();



	system("pause");
	return 0;
}