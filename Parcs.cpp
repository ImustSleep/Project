#include "Parcs.h"
Parcs::Parcs()
{
	name = "";
	address = "";
	services = ParcServices();
}
//get function
string Parcs::getnameP() { return name; }
string Parcs::getaddressP() { return address; }
ParcServices Parcs::getservicesP() { return services; }
Accommodations Parcs::getacommodationsP(Accommodations value) { return value; }

//set fuction
void Parcs::setnameP() { cin >> name; }
void Parcs::setaddressP() { cin >> address; }
void Parcs::setservicesP(ParcServices value) { services = value; }
void Parcs::setaccommodationsP(Accommodations value, int index) { accommodations[index] = value; }