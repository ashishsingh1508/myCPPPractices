/*
 * main.cpp
 *
 *  Created on: Oct 27, 2019
 *      Author: ashishsingh
 */
//#include <iostream>
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\Employee.h>
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\eatpref.h>
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\pointer.hpp>
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\Rectangle.hpp>



int main()
{

	// eatpref eat;
	// eat.PrintFood();
	PointerObject po;
	PointerObject *po1 = new PointerObject; ;		//object of pointerobject class
	PointerObject po2;
	//po1 = new PointerObject;
	po.PrintData();
	po2.~PointerObject();
	//x = po.addition(5,8);
	//po1 = new PointerObject;   									//allocating memory to po1 from the free store
	cout << "equal to \""<<po.addition(10,13)<<"\".\n";

	cout << po1->addition(6,7);
	cout << po1->addition(7,15);

	//po1 = new PointerObject;

	cout << po1->printAddr(10);
	delete po1;
	po1 = 0;

	/* 1.  This is a pointer to a constant integer. The value that is pointed to
	 * can't be changed.
	 * But the value if int can point to anyother pointer as shown below
	 */

	const int testint = 20;
	const int *testp = &testint;
	const int anotherint = 12918;

	cout << "\nInt pointer " << *testp <<" and value is "<< &testp;
	// changing the value of the pointer

	*testp = ;

	/***** 1. Ends here *****/

	/*
	 * 2. This (below) is constant pointer which we can assign a value however
	 * we can not change the address of the pointer.
	 * But the value can be changed.
	 */

	int testvalue = 1990;
	int *const pointer2 = &testvalue;   // this was not working.
	cout << "\nInt pointer2 is " << *pointer2 <<" and value is "<< &pointer2;
	testvalue = 1991;
	cout << "\nPrint constant pointer again: " << *pointer2 << " and address "<< &pointer2;


	/**** 2. This ends here *****/

	/*
	 *  3. This is a constant pointer to a constant integer. The value
	 *  that is pointed to can't be changed,
	 *  and pThree can't be changed to point to anything else either.
	 *
	 */

	const int constantint = 1988;
	const int * const constp = &constantint;

	cout << "\n This is a constant pointer " <<&constp << "\n to a constant integer "
			<< *constp;

	/**** 3. This pointer example ends here  ****/

	Rectangle *rpontr = new Rectangle;
	const Rectangle *pconstrec = new Rectangle;
	Rectangle *const pconstptr = new Rectangle;


	cout << "\n\npRect width: " << rpontr->getWidth() << " feet"  << endl;
	//cout << "\npConstRect width: " << pconstrec->getWidth() << " feet" << endl;
	cout << "pConstPtr width: " << pconstptr->getWidth() << " feet" << endl;

	rpontr->setWidth(10);
	//pconstrec->setWidth(10);
	pconstptr->setWidth(10);
	pconstptr->setLength(20);

	 cout << "pRect width: " << rpontr->getWidth() << " feet\n";
	// cout << "\npConstRect width: " << pconstrec->getWidth() << " feet\n";
	 cout << "pConstPtr width: " << pconstptr->getWidth() << " feet\n";
	 cout << "pConstPtr Length: " << pconstptr->getLength() << " feet\n";
	 delete rpontr;
	 delete pconstrec;
	 delete pconstptr;

	return 0;
}



