#include "Customers.h"
Customers::Customers()
{
	name = "";
	address = "";
	mail = "";
}
//get function
string Customers::getnameC() { return name; }
string Customers::getaddressC() { return address; }
string Customers::getmailC() { return mail; }

//set function
void Customers::setnameC() { cin >> name; }
void Customers::setaddressC() { cin >> address; }
void Customers::setmailC() { cin >> mail; }
