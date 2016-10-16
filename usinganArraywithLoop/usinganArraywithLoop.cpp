// This program asks for the number of hours worked
// by six emplyees. It stores the values in an array

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int NUM_Employees = 6;		// Numbers of employees
	int hours[NUM_Employees];			// Each employee's hours
	int count;							// Loop counter

	// Input the hours worked
	for (count = 0; count < NUM_Employees; count++)
	{
		cout << "Enter the hours worked by employee "
			<< (count + 1) << ": ";
		cin >> hours[count];
	}
	// Dispaly the contents of the array
	cout << "The hours you entered are:";
	for (count = 0; count < NUM_Employees; count++)
		cout << " " << hours[count];
	cout << endl;
    return 0;
}

