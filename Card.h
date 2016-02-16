#pragma once
#include <string>

using namespace std;
class Card 
{
	string type;
	string color;
	int id;
	bool isCardDrawn;
	bool isCardPlayed;
	bool isCardDiscarded;

public:

	void setIsDrawn(bool isDrawn) 
	{
		isDrawn = isDrawn;
	}

	void setIsPlayed(bool isPlayed) 
	{
		isPlayed = isPlayed;
	}

	void setIsDiscarded(bool isDiscarded) 
	{
		isDiscarded = isDiscarded;
	}

	string getCardType() 
	{
		return type;
	}

	string getCardColor() 
	{
		return color;
	}

	int getId() 
	{
		return id;
	}

	bool isDrawn() 
	{
		return isCardDrawn;
	}

	bool isPlayed() 
	{
		return isCardPlayed;
	}

	bool isDiscarded() 
	{
		return isCardDiscarded;
	}
	
	Card()
	{
		id = 0;
		type = "NULL";
		color = "NULL";
		isCardDrawn = false;
		isCardPlayed = false;
		isCardDiscarded = false;

	}

	Card(int idCard, string cardType, string cardColor) 
	{
		id = idCard;
		type = cardType;
		color = cardColor;
		isCardDrawn = false;
		isCardPlayed = false;
		isCardDiscarded = false;
	}

	bool operator !=(const Card& rhs)
	{
		return (id != rhs.id);
	}

	bool operator == (const Card& rhs)
	{
		return (id == rhs.id);
	}

	void remove()
	{
		id = 0;
		type = "NULL";
		color = "NULL";
		isCardDrawn = false;
		isCardPlayed = false;
		isCardDiscarded = false;
	}

};