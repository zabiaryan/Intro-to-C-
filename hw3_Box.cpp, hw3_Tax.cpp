/**********************************************************************************/
//Program          : Fnu Zabihullah
//Program file name: Box Tax.cpp
//Description      : This program calculates a theater Ravenue merely the sold tickets and
// itemize the profits and distributor percentage!”

#include<iostream>
#include<iomanip> // Header file for the setw 
#include<string>  // Header file for the string
using namespace std;

int main()
{
	//variable declartion
	string movie_name;
	int    adult_tickets,
		   child_tickets;
	double gross_box_office,
		   net_box_office,
		   paid_to_distributor;
	double propertyValue, 
		   assessmentValue,
		   propertyTax;
	char   quotation = '"';

	// geting date from the users
	cout << "Enter the name of the movie: ";
	getline(cin, movie_name);
	cout << "Enter the number of adult tickets sold: ";
	cin  >> adult_tickets;
	cout << "Enter the number of child tickets sold: ";
	cin  >> child_tickets;

	//calculating Box Office gross profit, net profit and amount paid
	//to distributor
	gross_box_office = (adult_tickets * 10.00) + (child_tickets * 6.00);
	net_box_office = (gross_box_office * 20.00) / 100.00;
	paid_to_distributor = gross_box_office - net_box_office;
	cout << endl;

	// output all the information on the screen,
	// the information will be display on the screen in table format.
	cout << "Revenue Report\n";
	cout << "==============\n";
	cout << setprecision(2) << fixed;
	cout << "Movie Name: "                  << setw(18) << quotation <<movie_name<< quotation << endl;
	cout << "Adult Tickets Sold: "          << setw(17) << adult_tickets << endl;
	cout << "Child Tickets Sold: "			<< setw(17) << child_tickets << endl;
	cout << "Gross Box Office Profit: "		<< setw(6) << "$ "<<gross_box_office << endl;
	cout << "Net Box Office Profit: "		<< setw(8) <<"$ "<< net_box_office << endl;
	cout << "Amount Paid to Distributor: "  << setw(3) <<"$ "<<paid_to_distributor << endl;
	
	//this section of the code calculates the property tax,
	cout << "Enter the actual value of the property: ";
	cin  >> propertyValue;
	assessmentValue = (propertyValue * .60);
	propertyTax = (assessmentValue / 100) * .75;
	cout << setw(20) << setprecision(2) << fixed;
	cout << "\nAssessment Value: $"     << assessmentValue << endl
		 << "Property Tax:     $  "      << propertyTax;
	return 0;
}