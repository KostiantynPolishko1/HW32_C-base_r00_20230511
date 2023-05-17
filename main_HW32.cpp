#include<iostream>
#include "Function1.h"
#include "array_utils.h"
#include "checkV.h"
using namespace std;

//Task1
//Write a header file "math_utils.h" that contains the following function declarations:
//int sum(int a, int b)			: function receive two int values and return them sum.
//int subtract(int a, int b)	: function receive two int values and return them substraction.
//int multiply(int a, int b)	: function receive two int values and return them multiplication.
void Task1()
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

}

//Task2
//Write a header file "array_utils.h", which has declarations of the next functions
// for working with arrays:

//int findMax(int arr[], int size) : function takes the array of int values and his size and return max value in array
//int findMin(int arr[], int size) : function takes the array of int values and his size and return min value in array
//double calculateAverage(int arr[], int size) : function takes the array of int values and his size and return simple average in array
void Task2()
{
	int arr[]{ 0, 2, 9, 8, 1, -2, -5, 10, -15, 2, -3 };
	int max = 0, min = 0, size = 0;
	double  ma = 0;

	size = sizeof(arr) / sizeof(arr[0]);

	max = findMax(arr, size);
	min = findMin(arr, size);
	ma = calculateAverage(arr, size);

	cout << "\n Array: ";
	for (auto i : arr)
		cout << i << " ";
	cout << "\n Max value = " << max;
	cout << "\n Min value = " << min;
	cout << "\n Av. value = " << ma << endl;
	
}

int main()
{
	Task1();
	Task2();

	return 0;
}
