#pragma once
#include <iostream>
using namespace std;
class LuxuryLevel
{
public:
	LuxuryLevel();
	//get functions
	bool getBBQLL();

	bool getsurroundSystemLL();

	bool getbreakfastServiceLL();

	bool getcleaningServiceLL();

	string getaccommodationKindLL();


	//set functions
	void setBBQLL(bool value);

	void setsurroundSystemLL(bool value);

	void setbreakfastServiceLL(bool value);

	void setcleaningServiceLL(bool value);

	void setaccommodationKindLL(string value);




private:
	bool BBQ;
	bool surroundSystem;
	bool breakfastService;
	bool cleaningService;
	string accommodationKind;

};

