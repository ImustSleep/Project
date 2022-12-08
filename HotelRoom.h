#pragma once
#include <iostream>
using namespace std;
class HotelRoom
{
public:
	HotelRoom();
	//get functions
	int getfloorHR();
	string getlocationHR();
	int getnrBedsHR();
	bool getchildrenBedHR();


	//set functions
	void setfloorHR();
	void  setlocationHR();
	void setnrBedsHR();
	void setchildrenBedHR(bool value);



private:
	int floor;
	string location;
	int nrBeds;
	bool childrenBed;



};

