/*
 * Employee.cpp
 *
 *  Created on: Oct 29, 2019
 *      Author: ashishsingh
 */

#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\Employee.h>

Employee::Employee()
{
	itsAge	=	itsYearsOfService	=	itsSalary	=	0;
}

Employee::Employee(int age, int service, int salary)
{
	itsAge	=	age;
	itsYearsOfService	=	service;
	itsSalary	=	salary;

}


void Employee::GetEmployeeDetails() const
{
	std::cout << "The details of employee are: - "<<std::endl;
	std::cout << "Employee Age \t\t"<<itsAge<<std::endl;
	std::cout << "Employee YoS \t\t"<<itsYearsOfService<<" year(s)"<<std::endl;
	std::cout << "Employee's Salary\t"<< "Rs."<<itsSalary<<std::endl<<std::endl;

}

void Employee::SetEmployeeDetails(int age, int yos, int sal)
{
	itsAge	=	age;
	itsYearsOfService	=	yos;
	itsSalary	=	sal;


}
