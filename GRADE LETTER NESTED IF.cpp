// Purpose of the following code is to demonstrate the usage of the nested if and else in coding.
// this program calculate testscore and convert the testcore to a grade letter
#include<iostream>
using namespace std;

int main()
{
	// constants 
	int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60;
	int test_score; // to hold the numeric test score
	// promt user and get the numeric test score
	cout << "Enter numeric test score I will show your grade letter " << endl;
	cin >> test_score;
	// make decisions 
	if (test_score >= A_SCORE)
	{
		cout << "Your grade is A" << endl;
	}
	else
	{
		if (test_score >= B_SCORE)
		{
			cout << "Your grade is B" << endl;
		}
		else
		{
			if (test_score >= C_SCORE)
			{
				cout << "Your grade is C" << endl;
			}
		}
		// you add D and F grade letter to grasp and practice the topic
	}
	return 0;
}