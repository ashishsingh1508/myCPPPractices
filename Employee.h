/*
 * Employee.h
 *
 *  Created on: Oct 29, 2019
 *      Author: ashishsingh
 */
#include<iostream>
using namespace std;
class Employee
{
	private:
		int itsAge, itsYearsOfService, itsSalary;

	public:
		Employee();
		Employee(int,int,int);
		void GetEmployeeDetails() const;
		void SetEmployeeDetails(int, int, int);



};
