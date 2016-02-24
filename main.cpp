#include <iostream>
#include <time.h>
#include "Interface.h"

using namespace std;

int main()
{
	
	//TURN OFF FOR CONSISTENT GAMEPLAY
	srand(time(NULL));

	Interface theInter;

	theInter.shuffleDeck();

	//for testing
	for (int i = 0; i < 5; i++) {
		theInter.drawFromDeckIntoHand();
	}

	theInter.showHand();


	system("pause");
	return 0;
}