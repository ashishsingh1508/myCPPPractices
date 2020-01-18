#include <iostream>
using namespace std;

class PointerObject
		{
			public:
				void PrintData();
				int addition(int,int);
				int addition();
				PointerObject();   //default constructor
				~PointerObject();	//destructor
				int const printAddr(int);
			private:
				int a,b;
				int *pontr;



		};
