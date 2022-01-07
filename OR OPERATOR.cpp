// This programs explains how to use the || or operator
// You will learn || operator requires complete expression on both side, one condition
// must be true to produce true.
#include<iostream>
using namespace std;

int main()
{
	// constants to hold the ranging values.
	const int MIN_INCOME = 35000;  // Anual minimum incom
	const int MIN_YEAR = 5;        // Minimum employment years.
	// variable declaration
	double income, years; // variables that holds incom and years values

	// prompt user to input the minimum incom and employment years
	cout << "What is your current income? " << endl;
	cin >> income;
	cout << "How many years you have been employed? " << endl;
	cin >> years;
	
	// make decisions on the user input data
	// take a closer look at the or || operator
	if (income >= MIN_INCOME || years >= MIN_YEAR)
	{
		cout << "You qualify " << endl;
	}
	else
	{
		cout << "Your annual income must be $" << MIN_INCOME << endl;
		cout << "or must be employed more than " << MIN_YEAR << " years to qualify" << endl;
	}
	
	return 0;

}