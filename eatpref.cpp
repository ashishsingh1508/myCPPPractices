/*
 * eatperf.cpp
 *
 *  Created on: Dec 23, 2019
 *      Author: ashishsingh
 */
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\eatpref.h>

void eatpref::PrintFood()
{
	int x, y;
	cout<<"Please enter your choice (one of below): \n 1) Pizza \n 2) Indian \n 3) Western \n\n";
	cin >> x;
	int *address = 0;
	address = &x;
	//int va;
	switch (x)
	{
			case 1:
			{
				cout << "You have chosen Pizza, enjoy your food";
				break;
			}

			case 2:
			{
				cout << "You have chosen Indian, enjoy your food";
				break;
			}
			case 3:
			{
				cout << "You have chosen Western food, enjoy your food";
				break;
			}
			default:
				cout << "You have not chosen any food from the option.";
	}

	cout<<"\nThe address where the value \""<< x <<"\" you entered is stored is: "<< &x;
	cout << "\nThe value at address \""<< address << "\" is " << *address << endl;

	cout << "\nLets change the value by referencing the address, \nWhat value would you like to set\n";
	cin >> y;

	*address = y;

	cout << "\nChanged the value at address " << address << " to " << *address ;

	cout << "\nPrint changed value of x: "<< x;

	int *address1;
	address1 = new int;

	cout << "\nPrint a address in free pool memory and assign it to var \"address1\" " << address1;

	cout << "\nCopying the value from \"address\" "<< address << " to \"address1\" " << address1 << "\n\nThe value at address from free pool is " << *address1;

	*address1 = *address;

	cout << "\nThe value at address \"address1\" i.e. "<<address1 <<" is ---> " << *address1;

	//delete address;
	delete address1;
	address = 0;
	delete address;

}


