/*
 * testmain.cpp
 *
 *  Created on: Oct 19, 2019
 *      Author: ashishsingh
 */

#include <iostream>
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\testHead.hpp>
using namespace std;

CarDetails::CarDetails()
{
	horsePower	=	10;
	price		=	100000;
	tax			=	20*price/100;
}

CarDetails::CarDetails(float price)
{
	this->price = price;
	this->horsePower	=	horsePower;
	this->tax			=	30*this->price/100;
	//cout << endl<< "This is contructure with price passed as argument " << endl<<" Price " <<price << " Horse Power " << this->horsePower << " Tax "<< this->tax ;
}

void CarDetails::printDetails()
{
	cout << endl<< "This is constructure with price passed as argument " << endl<<" Price " <<price << " Horse Power " << this->horsePower << " Tax "<< this->tax ;
}

void CarDetails::printDetails(float tax, int hp)
{
	tax = tax*price/100;
	cout << endl<< "This is contructure with price and hp passed as argument " << endl<<" Price " <<price << " Horse Power " << hp << " Tax "<< tax ;
}


CarDetails::~CarDetails()
{

}
void CarDetails::printDefaultDetails()
{
	cout << "The default details of the car:"<<endl<< " Horse Power " << horsePower << endl << " Price: Rs. " << price <<endl<< " and the tax is: Rs. " << tax;
	cout << endl<< "Total price to pay is: Rs. " << price+tax;
}

void CarDetails::setDetails(int horsePower, float price)
{
	this->price = price;
	tax	=	20*this->price/100;
	cout << endl << "The details you have set is: " <<endl;
	cout << "Horse Power \"" << horsePower<<"\"";
	cout << " Price: Rs." << price;
	cout << " 20% Tax: Rs." << tax;
}









