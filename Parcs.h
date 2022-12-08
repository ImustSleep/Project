#pragma once
#include "Accommodations.h"
#include"ParcServices.h"
using namespace std;
class Parcs
{
public:
	Parcs();
	//get function
	string getnameP();
	string getaddressP();
	ParcServices getservicesP();
	Accommodations getacommodationsP(Accommodations value);

	//set fuction
	void setnameP();
	void setaddressP();
	void setservicesP(ParcServices value);
	void setaccommodationsP(Accommodations value, int index);






private:
	string name;
	string address;
	ParcServices services;
	Accommodations accommodations[];
};

