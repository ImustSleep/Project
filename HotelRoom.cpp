#include "HotelRoom.h"
HotelRoom::HotelRoom()
{
	floor = 0;
	location = "";
	nrBeds = 0;
	childrenBed = false;
}
//get functions
int HotelRoom::getfloorHR() { return floor; }
string HotelRoom::getlocationHR() { return location; }
int HotelRoom::getnrBedsHR() { return nrBeds; }
bool HotelRoom::getchildrenBedHR() { return childrenBed; }


//set functions
void HotelRoom::setfloorHR() { cin >> floor; }
void  HotelRoom::setlocationHR() { cin >> location; }
void HotelRoom::setnrBedsHR() { cin >> nrBeds; }
void  HotelRoom::setchildrenBedHR(bool value) { childrenBed = value; }
