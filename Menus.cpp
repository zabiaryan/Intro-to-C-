// 
// Menus ... an great program where you can demonstrate 
// the usage and application of decisions.
// 
#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variables
	int choice;
	int months;
	double charges;
	// constants for memberships rate
	const double ADULT = 40.0,
				SENIOR = 30.0,
				CHILD = 20.0;
		// constants for menu choices
		const int ADULT_CHOICE  = 1,
		          CHILD_CHOICE  = 2,
		          SENIOR_CHOICE = 3,
		          QUIT_CHOICE   = 4;
	// display the menu and get data from the user
	cout << "XYZ Health Club Membership" << endl;
	cout << "=======================" << endl;
	cout << "1. Standard Adult Membership" << endl;
	cout << "2. Child Membership" << endl;
	cout << "3. Senior citizen membership" << endl;
	cout << "4. Quit the program" << endl;
	cout << endl;
	cout << "Please enter your choice:" << endl;
	cin >> choice;
	// format the output
	cout << fixed << showpoint << setprecision(2);
	// diplay the results
	if (choice == ADULT_CHOICE)
	{
		cout << "How many months?" << endl;
		cin >> months;
		charges = months * ADULT;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == CHILD_CHOICE)
	{
		cout << "How many months?" << endl;
		cin >> months;
		charges = months * CHILD;
		cout << "Total charges are $" << charges << endl;
	}
	else if (choice == SENIOR_CHOICE)
	{
		cout << "How many months?" << endl;
		cin >> months;
		charges = months * SENIOR;
		cout << "Total charges are $" << charges << endl;
	}
	else if (choice == QUIT_CHOICE)
	{
		cout << "The program is ending" << endl;
	}
	else
	{
		cout << "The valid choices are 1 through 4 please pick a valid number" << endl;
		cout << "and run the program again." << endl;
	}
	return 0;
}
