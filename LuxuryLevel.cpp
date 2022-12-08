#include "LuxuryLevel.h"
LuxuryLevel::LuxuryLevel()
{
	BBQ = false;
	surroundSystem = false;
	breakfastService = false;
	cleaningService = false;
	accommodationKind = "";
}
//get functions
bool LuxuryLevel::getBBQLL() { return BBQ; }

bool LuxuryLevel::getsurroundSystemLL() { return surroundSystem; }

bool LuxuryLevel::getbreakfastServiceLL() { return breakfastService; }

bool LuxuryLevel::getcleaningServiceLL() { return cleaningService; }

string LuxuryLevel::getaccommodationKindLL() { return accommodationKind; }


//set functions
void LuxuryLevel::setBBQLL(bool value) { BBQ = value; }

void LuxuryLevel::setsurroundSystemLL(bool value) { surroundSystem = value; }

void LuxuryLevel::setbreakfastServiceLL(bool value) { breakfastService = value; }

void LuxuryLevel::setcleaningServiceLL(bool value) { cleaningService = value; }

void LuxuryLevel::setaccommodationKindLL(string value) { accommodationKind = value; }

