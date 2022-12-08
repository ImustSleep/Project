#pragma once
#include "LuxuryLevel.h"
#include "Cabin.h"
#include "HotelRoom.h"
#pragma "Accommodations.h"
class Accommodations
{
public:
	Accommodations();

	//get function
	int getIDA();
	int getnrPeopleA();
	int getsizeA();
	bool getbathroomWithBathA();
	LuxuryLevel getLuxuryLevelA();

	//set function
	void setIDA(int value);
	void setnrPeopleA();
	void setsizeA();
	void setbathroomWithBathA();
	void setLuxurylevelA(LuxuryLevel value);

private:

	int ID;
	int nrPeople;
	int size;
	bool bathroomWithBath;
	LuxuryLevel luxuryLevel;
};

