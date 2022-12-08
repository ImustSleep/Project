#pragma once
#include "Accommodations.h"
#include "Customers.h"
#include <iostream>
#include <array>
using namespace std;

class Booking
{

public:
	Booking();


	int getIDB();
	Customers getcustomerB();
	bool getactivityPassB();
	bool getsportsPassB();
	bool getbicylePassB();
	bool getswimmingPassB();
	Accommodations getaccommodationB(Accommodations value);

	//set function
	void setIDB();
	void setcustomerB(Customers value);
	void setactivityPassB(bool value);
	void setsportsPassB(bool value);
	void setbicylePassB(bool value);
	void setswimmingPassB(bool value);
	void setaccommodationB(Accommodations value, int index);







private:
	int ID;
	Customers customer;
	bool activityPass;
	bool sportsPass;
	bool bicylePass;
	bool swimmingPass;
	Accommodations accommodation[];


};

