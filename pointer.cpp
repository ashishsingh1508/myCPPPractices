/*
 * pointer.cpp
 *
 *  Created on: Dec 31, 2019
 *      Author: ashishsingh
 */
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\pointer.hpp>

PointerObject::PointerObject()		//default contructor
{
	cout << "\nDefault contructure called...";
	a = b = 10;
	pontr = 0;

}


void PointerObject::PrintData()
{
	cout << "\nThis is called inside print data. ";
}


int PointerObject::addition(int a,int b)
{
	cout << "\nAddition of "<< a <<" and " << b<<" is ";

	return a+b;
}

int PointerObject::addition()                           // add default value if user doesn't pass any value
{
	cout << "\nAddition of "<< a <<" and " << b<<" is ";

	return a+b;
}

PointerObject::~PointerObject()
{

	cout << "\nDistructure called..!!! Rest in peace...";
	delete pontr;                                       // Don't delete the pointer here for now. as it is deleting the address
														  // long before its being referenced.
}

int const PointerObject::printAddr(int a)
{
	cout << "\nThis is function to print the value at address passed, i.e. ";
	pontr = new int(a);
	return *pontr;
}

