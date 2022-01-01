// This program is designed for General Crate Inc, to calculate 
// volume, cost, customer charge and profit of a crate of any size.
//Note: think about the algorithm and the complete algorithm can be found
// in starting out with C++ by Tony Gadis.
#include<iostream>
#include <iomanip>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
using namespace std;
int main()
{
	const double COST_PER_CUBIC_FOOT = 0.23;    //constant for cost
	const double CHARGE_PER_CUBIC_FOOT = 0.50; // constant for charging cutomers
	//variables
	double  lenght,//lenght of crate
		width,	//width of crate
		height,	// height of crate
		volume,	// volume of the crate
		cost,	// cost ot build the crate
		charge,	// charge to the customer
		profit; // profit made on the crate

	// set the output formating to show the desire decimal place.
	cout << setprecision(2) << endl;

	// prompt the user to enter the dimension of the crate
	cout << "Please enter the dimension of the crate in (feet): " << endl;
	cout << "lenght" << endl;
	cin >> lenght;
	cout << "Width" << endl;
	cin >> width;
	cout << "height" << endl;
	cin >> height;

	//calculation: calculate volume, cost, and profit
	volume = lenght * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;
	// display you calculations
	cout << "The volume of the crate is " << volume << "cubic feet" << endl;
	cout << "Cost to built: $" << cost << endl;
	cout << "Charge to customer: $" << charge << endl;
	cout << "Profit to company is: $" << profit << endl;

	return 0;
}
 