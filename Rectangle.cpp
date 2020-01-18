/*
 * Rectangle.cpp
 *
 *  Created on: Oct 27, 2019
 *      Author: ashishsingh
 */
#include <C:\Users\ashishsingh\cpp\MyC++\myCode\MyLibrary\Rectangle.hpp>
//include "Rectangle.hpp"

 Rectangle::Rectangle(int top, int left, int bottom, int right)   //default constructor
 {
	mTop	=	top;
	mLeft	=	left;
	mBottom	=	bottom;
	mRight	=	right;

	mUpperLeft.SetX(top);
	mUpperLeft.SetY(left);
	mLowerLeft.SetX(bottom);
	mLowerLeft.SetY(left);
	mUpperRight.SetX(top);
	mUpperRight.SetY(right);
	mUpperRight.SetX(bottom);
	mUpperRight.SetY(right);
	setlength = 0;
	setwidth	=	0;

 }

 Rectangle::Rectangle()
 {
	 setlength = 10;
	 setwidth = 5;
	 mTop	=	0;
	 mLeft	=	0;
	 mBottom	=	0;
	 mRight	=	0;
 }

 Rectangle::~Rectangle()
 {

 }

 int Rectangle::GetArea() const
 {
	 int height	=	mTop - mBottom;
	 int width	=	mRight - mLeft;

	 Point testo,testb;

	 testo.test = 100;
	 testo.test += 200;
	 std::cout << std::endl;
	 std::cout << std::endl << "Point's testo object " <<testo.test;
	 std::cout << std::endl << "Point's testb object " <<testb.test;
	 return height*width;

 }

void Rectangle::setLength(int length)
{
	this->setlength = length;
}

void Rectangle::setWidth(int width)
{
	this->setwidth = width;
}


int Rectangle::getLength()
{
	return setlength;
}

int Rectangle::getWidth()
{
	return setwidth;
}
