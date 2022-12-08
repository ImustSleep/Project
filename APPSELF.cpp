#include <iostream>
#include <cstdlib>
#include <array>
#include <vector>
#include "Accommodations.h"
#include "Booking.h"
#include "Cabin.h"
#include "Customers.h"
#include"HotelRoom.h"
#include "LuxuryLevel.h"
#include "Parcs.h"
#include "ParcServices.h"
#include "VacationParcs.h"

using namespace std;
int main()
{
	int whoareyou; // Used to determine who is currently using the app

	
	cout << "----------------------------------" << endl;
	cout << "Are you a customer (1)  ,employee (2) or owner (3) ?" << endl;
	cin >> whoareyou;
	if (whoareyou == 3) // The user is owner
	{
		int herefor; // use to determine wheter or not the owner is here for Parcs or Accommodations
		int MCD; // Use to check if the owner is modifiying creating or deleting 
		ParcServices parcservices; // Use to add the existing ParcServices to parcs
		vector<Parcs> Vparcs; // A vector of parcs so that owner can enter multiple parcs
		Parcs parcs; // Use to store information of the current parc
		int index; // The index to keep track of Parcs added to Vparcs
		int parcserv; // Use to check if a parcserv is present or not in a parc
		bool moreAccommodations; // Use to add Accommodations if a parc has more than 1 Accommodations

		cout << "Welcome sir are are you here for Parcs (1) or Accommodations (2) " << endl;
		cin >> herefor;
		cout << "Here to Modifty(1), Create(2) or Delete(3) " << endl;
		cin >> MCD;
		if (herefor == 1 && MCD == 2) // Owner creating new Parcs
		{

			cout << "Please enter the name of this Parcs: " << endl;
			parcs.setnameP();

			cout << "Please enter the address of this Parcs: " << endl;
			parcs.setaddressP();

			cout << "Please enter the Services of this Parcs: " << endl;

			cout << "Does the park have Subtropic swimming pool? Yes(1) No(2): " << endl;
			cin >> parcserv;
			parcservices.setsubtropicSwimmingPoolPS(parcserv);

			cout << "Does the park have Sport Infrastructure? Yes(1) No(2): " << endl;
			cin >> parcserv;
			parcservices.setsportsInfrastructurePS(parcserv);

			cout << "Does the park have Bowling alley? Yes(1) No(2): " << endl;
			cin >> parcserv;
			parcservices.setbowlingAlleyPS(parcserv);

			cout << "Does the park have Bicyle rent? Yes(1) No(2): " << endl;
			cin >> parcserv;
			parcservices.setbicyleRentPS(parcserv);

			cout << "Does the park have Children Paradise? Yes(1) No(2): " << endl;
			cin >> parcserv;
			parcservices.setchildrenParadisePS(parcserv);

			cout << "Does the park have water bikes? Yes(1) No(2): " << endl;
			cin >> parcserv;
			parcservices.setwaterBikesPS(parcserv);

			parcs.setservicesP(parcservices);
			cout << "Please enter information on the parcs accomadations " << endl;
			bool accomm = true;
			int indexaccom = 1;
			while (accomm)
			{
				Accommodations accommadation;
				LuxuryLevel luxlevel; // for accommadations luxury level
				accommadation.setIDA(indexaccom);
				cout << "How many people can this Accommodation hold? " << endl;
				accommadation.setnrPeopleA();
				cout << "What is the size of this accommodation (m^2)? " << endl;
				accommadation.setsizeA();
				cout << "Does it have it's own bath? Yes(1) No(2)" << endl;
				accommadation.setbathroomWithBathA();
					THIS IS WHERE YOU LEFT OFF888


			}

			Vparcs.push_back(parcs);
		}
		if (herefor == 1 && MCD == 1) // owner modifiying an existing parc
		{
			string parcname;
			cout << "Please enter the name of the parc you want to modify" << endl;
			cin >> parcname;
			for (int i = 0; i < sizeof(Vparcs); i++)
			{
				if (Vparcs[i].getnameP() == parcname)
				{
					cout << "What would you like to modift about this parc" << endl << "Name?(1)" << endl << "address?(1)" << endl << "services(1)";
				}
			}

		}
	}




	/*if (whoareyou == 1)
	{
		Booking booked;
		int whocustomer;
		cout << "are you a new(1) or existing(2) customer?" << endl;
		cin >> whocustomer;
		if (whocustomer == 1)
		{
			//if(isbooking)
			//{
			Customers person;
			cout << "Thank you for using our services Please enter your name to start registering: ";
			person.setnameC();
			cout << endl << "your address: ";
			person.setaddressC();
			cout << endl << "your mail: ";
			person.setmailC();
			booked.setcustomerB(person);

			//}
		}

	}
	*/


		


	
}