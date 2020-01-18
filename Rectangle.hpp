/*
 * Rectangle.hpp
 *
 *  Created on: Oct 27, 2019
 *      Author: ashishsingh
 */

#include <iostream>

class Point
{
	//no constructor in this class, compiler will use default
	public:
		void SetX(int x){mX = x;}
		void SetY(int y){mY = y;}
		int GetX(){return mX;}
		int GetY(){return mY;}
		int test = 50;

	private:
		int mX,mY;
};


class Rectangle
{
	public:
		Rectangle(int top, int left, int bottom, int right);
		Rectangle();
		~Rectangle();

		 int GetTop() const { return mTop; }
		 int GetLeft() const { return mLeft; }
		 int GetBottom() const { return mBottom; }
		 int GetRight() const { return mRight; }
		 int GetArea() const;
		 void setWidth(int);
		 void setLength(int);
		 int getWidth();
		 int getLength();

		 Point GetUpperLeft(){return mUpperLeft;}
		 Point GetUpperRight(){return mUpperRight;}
		 Point GetLowerLeft(){return mLowerLeft;}
		 Point GetLowerright(){return mLowerRight;}

		 /*  commenting to check if program runs fine without this as well
		 void SetUpperLeft(Point Location)  {mUpperLeft = Location;}
		 void SetLowerLeft(Point Location)  {mLowerLeft = Location;}
		 void SetUpperRight(Point Location)  {mUpperRight = Location;}
		 void SetLowerRight(Point Location)  {mLowerRight = Location;}
		  */
	private:
		Point  mUpperLeft;
		Point  mUpperRight;
		Point  mLowerLeft;
		Point  mLowerRight;
		int    mTop;
		int    mLeft;
		int    mBottom;
		int    mRight;
		int    setwidth;
		int    setlength;
};
