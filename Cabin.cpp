#include "Cabin.h"
#include <cstdlib>
#include <iostream>
Cabin::Cabin()
{
	bedrooms = 0;
}

int Cabin::getbedroomCAB() { return bedrooms; }


void Cabin::setbedroomCAB() { cin >> bedrooms; }
