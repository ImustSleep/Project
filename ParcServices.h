#pragma once
class ParcServices
{
public:


	ParcServices();

	//get functions
	bool getsubtropicSwimmingPoolPS();

	bool getsportsInfrastructurePS();

	bool getbowlingAlleyPS();

	bool getbicyleRentPS();

	bool getchildrenParadisePS();

	bool getwaterBikesPS();



	//set functions
	void setsubtropicSwimmingPoolPS(bool value);

	void setsportsInfrastructurePS(bool value);

	void setbowlingAlleyPS(bool value);

	void setbicyleRentPS(bool value);

	void setchildrenParadisePS(bool value);

	void setwaterBikesPS(bool value);


private:
	bool subtropicSwimmingPool;
	bool sportsInfrastructure;
	bool bowlingAlley;
	bool bicyleRent;
	bool childrenParadise;
	bool waterBikes;
};

