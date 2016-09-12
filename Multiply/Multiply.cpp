// Multiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "Multiplication tables: " << endl;
	cout << "0 \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10 " << endl;
	for (int i = 1; i<10; i++)
	{
		cout << i << '\t';
		for (int a=1; a<=10; a++)
		{
			cout << a*i << '\t';
			
		}
		cout << endl;
	}

	return 0;
	
}

