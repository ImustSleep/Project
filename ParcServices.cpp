#include "ParcServices.h"
ParcServices::ParcServices()
{
	subtropicSwimmingPool = false;
	sportsInfrastructure = false;
	bowlingAlley = false;
	bicyleRent = false;
	childrenParadise = false;
	waterBikes = false;
}

//get functions
bool ParcServices::getsubtropicSwimmingPoolPS() { return subtropicSwimmingPool; }

bool ParcServices::getsportsInfrastructurePS() { return sportsInfrastructure; }

bool ParcServices::getbowlingAlleyPS() { return bowlingAlley; }

bool ParcServices::getbicyleRentPS() { return bowlingAlley; }

bool ParcServices::getchildrenParadisePS() { return childrenParadise; }

bool ParcServices::getwaterBikesPS() { return waterBikes; }



//set functions
void ParcServices::setsubtropicSwimmingPoolPS(bool value) { subtropicSwimmingPool = value; }

void ParcServices::setsportsInfrastructurePS(bool value) { sportsInfrastructure = value; }

void ParcServices::setbowlingAlleyPS(bool value) { bowlingAlley = value; }

void ParcServices::setbicyleRentPS(bool value) { bicyleRent = value; }

void ParcServices::setchildrenParadisePS(bool value) { childrenParadise = value; }

void ParcServices::setwaterBikesPS(bool value) {waterBikes = value;}