/*
 * testHead.hpp
 *
 *  Created on: Oct 27, 2019
 *      Author: ashishsingh
 */
//#include <iostream>
#ifndef DEBUG_TESTHEAD_HPP_
#define DEBUG_TESTHEAD_HPP_


class CarDetails
{
	public:
		CarDetails();
		CarDetails(float);
		void printDefaultDetails();
		void setDetails(int, float);
		~CarDetails();
		void printDetails();
		void printDetails(float, int);

	private:
		int horsePower = 10;
		float price, tax;// = 20*price/100;
};




#endif /* DEBUG_TESTHEAD_HPP_ */
