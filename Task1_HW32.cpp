#include<iostream>
#include "Function1.h"
#include "checkV.h"
using namespace std;

//Task1
//Write a header file "math_utils.h" that contains the following function declarations:
//int sum(int a, int b)			: function receive two int values and return them sum.
//int subtract(int a, int b)	: function receive two int values and return them substraction.
//int multiply(int a, int b)	: function receive two int values and return them multiplication.

int main()
{
	int a = 0, b = 0;

	cout << "\n Enter integer values:";
	cout << "\n\tValue x1 = ";
	a = checkV();
	cout << "\n\tValue x2 = ";
	b = checkV();

	cout << "\n Sum = \t\t" << sum(a, b);
	cout << "\n Substract = " << subtract(a, b);
	cout << "\n Multiply  = " << multiply(a, b) << endl;

	return 0;
}