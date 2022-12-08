#pragma once
#include <iostream>
using namespace std;
class Customers
{

public:
	Customers();
	//get function
	string getnameC();
	string getaddressC();
	string getmailC();

	//set function
	void setnameC();
	void setaddressC();
	void setmailC();


private:
	string name;
	string address;
	string mail;
};

