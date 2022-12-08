#include "VacationParcs.h"
VacationParcs::VacationParcs()
{
	name = "";
	address = "";
	VAT = "";
}

//get function
string VacationParcs::getnameVP() { return name; }
string VacationParcs::getaddressVP() { return address; }
string VacationParcs::getVATVP() { return VAT; }
Parcs VacationParcs::getparcsVP(Parcs value) { return value; }
Customers VacationParcs::getCustomersVP(Customers value) { return value; }

//set function

void VacationParcs::setnameVP() { cin >> name; }
void VacationParcs::setaddressVP() { cin >> address; }
void VacationParcs::setVATVP() { cin >> VAT; }
void VacationParcs::setparcsVP(Parcs value) { Parcs() = value; }
void VacationParcs::setcustomersVP(Customers value, int index) { customers[index] = value; }
