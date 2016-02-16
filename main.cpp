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
	Card whiteMoon(8, "sun", "white");
	Card brownKey(9, "key", "brown");
	Card redMoon(10, "moon", "red");

	cout << endl << endl;

	theLab.addCard(whiteMoon);
	theLab.addCard(brownKey);
	theLab.addCard(redMoon);
	theLab.seeLab();

	cout << endl << endl;

	theLab.removeCard(brownKey);
	theLab.seeLab();




	system("pause");
	return 0;
}