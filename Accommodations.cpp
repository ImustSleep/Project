#include "Accommodations.h"
#include "LuxuryLevel.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Accommodations::Accommodations()
{
	int ID = 0;
	int nrPeople = 0;
	int size = 0;
	bool bathroomWithBath = false;
	LuxuryLevel luxuryLevel = LuxuryLevel();
}
//get function
int Accommodations::getIDA() { return ID; }
int Accommodations::getnrPeopleA() { return nrPeople; }
int Accommodations::getsizeA() { return size; }
bool Accommodations::getbathroomWithBathA() { return bathroomWithBath; }
LuxuryLevel Accommodations::getLuxuryLevelA() { return luxuryLevel; }

//set function
void Accommodations::setIDA(int value) { ID = value; }
void Accommodations::setnrPeopleA() { cin >> nrPeople; }
void Accommodations::setsizeA() { cin >> size; }
void Accommodations::setbathroomWithBathA() { cin >> bathroomWithBath; }
void Accommodations::setLuxurylevelA(LuxuryLevel value) { luxuryLevel = value; }