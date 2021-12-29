//Program     : Inventory calculation of three stores
// Author     : Zabi Aryan. source stating out with c++ Tony Gadis
// Date       : Fall 2020
// Description: this is a simple program that calculates that the inventory of three stores
// Bunus      : Try to adjust the program to find the total renvenu.

#include <iostream>
using namespace std;

int main()
{
	//variable declaration
	int beg_Inv,     //begining inventory for all 3 stores
		sold,	     // number of sold items 
		store1,	     // store 1 inventory
		store2,      // store 2 inventory
		store3;      // store 3 inventory

		// Get the begining inventory for all stores
		cout << "Enter the begining inventroy for all three stores:" << endl;
		cin >> beg_Inv;

		// set the inventory for all three stores.
		// note the algorithm how the begining inventory of all three stores bieng equal. 
		store1 = store2 = store3 = beg_Inv;
		
		// get the items sold in store one
		cout << "How many items sold in store1? :" << endl;
		cin >> sold;
		store1 -= sold; // not that how to adjust store one inventory. store1 = store1 - sold.

		// get the items sold in store two.
		cout << "How many items sold in store2? :" << endl;
		cin >> sold;
		store2 -= sold; // not that how to adjust store one inventory. store2 = store2 - sold.

		// get the items sold in store one
		cout << "How many items sold in store3? :" << endl;
		cin >> sold;
		store3 -= sold; // not that how to adjust store one inventory. store3 = store3 - sold.

		
		// Now, display the remaining inventory after minusing the sold inventory.
		cout << endl;
		cout << "Following is the remaining inventory of all three stores" << endl;
		cout << "=============================" << endl;
		cout << "Store 1 current inventory: " << store1 << endl;
		cout << "Store 2 current inventory: " << store2 << endl;
		cout << "Store 3 current inventory: " << store3 << endl;
		cout << "==============================" << endl;
		return 0;
}
