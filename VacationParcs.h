#pragma once
#include <iostream>
#include <vector>
#include "Parcs.h"
#include "Customers.h"
using namespace std;
class VacationParcs
{
public:
	VacationParcs();

	//get function
	string getnameVP();
	string getaddressVP();
	string getVATVP();
	Parcs getparcsVP(Parcs value);
	Customers getCustomersVP(Customers value);

	//set function

	void setnameVP();
	void setaddressVP();
	void setVATVP();
	void setparcsVP(Parcs value);
	void setcustomersVP(Customers value, int index);



private:
	string name;
	string address;
	string VAT;
	vector<Parcs> parcs = {};
	Customers customers[];
};

