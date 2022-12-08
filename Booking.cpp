#include "Booking.h"
#include <cstdlib>
#include <iostream>

	Booking::Booking()
	{
		ID = 0;
		customer = Customers();
		activityPass = false;
		sportsPass = false;
		bicylePass = false;
		swimmingPass = false;
	}

	//get function
	int Booking::getIDB() { return ID; }
	Customers Booking::getcustomerB() { return customer; }
	bool Booking::getactivityPassB() { return activityPass; }
	bool Booking::getsportsPassB() { return sportsPass; }
	bool Booking::getbicylePassB() { return bicylePass; }
	bool Booking::getswimmingPassB() { return swimmingPass; }
	Accommodations Booking::getaccommodationB(Accommodations value) { return value; }
	//set function
	void Booking::setIDB() { cin >> ID; }
	void Booking::setcustomerB(Customers value) { customer = value;; }
	void Booking::setactivityPassB(bool value) { activityPass = value; }
	void Booking::setsportsPassB(bool value) { sportsPass = value; }
	void Booking::setbicylePassB(bool value) { bicylePass = value; }
	void Booking::setswimmingPassB(bool value) { swimmingPass = value; }
	void Booking::setaccommodationB(Accommodations value, int index) { accommodation[index] = value; }