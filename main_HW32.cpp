#include<iostream>
#include "math_utils.h"
#include "array_utils.h"
#include "sorting_utils.h"
#include "checkV.h"
using namespace std;

void printArr(int arr[], int &size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

void Task1()
{
	int a = 0, b = 0;

	cout << "\n Enter integer values:";
	cout << "\n\tValue x1 = ";
	a = checkV();
	cout << "\tValue x2 = ";
	b = checkV();

	cout << "\n Sum = \t" << sum(a, b);
	cout << "\n Substract = " << subtract(a, b);
	cout << "\n Multiply  = " << multiply(a, b) << endl;

}

void Task2(int arr[], int& size)
{
	cout << "\n Array: ";
	printArr(arr, size);

	cout << "\n Max value = " << findMax(arr, size);
	cout << "\n Min value = " << findMin(arr, size);
	cout << "\n Av. value = " << calculateAverage(arr, size) << endl;
	
}

void Task3(int arr[], int &size)
{
	int n = 0;

	cout << "\n Array: ";
	printArr(arr, size);

	cout
		<< "\n Sort:"
		<< "\n\t1 - Bubble"
		<< "\n\t2 - Selection"
		<< "\n\t3 - Insertion"
		<< "\n Enter type: ";

restart0:
	n = checkV();
	if (n > 3)
	{
		cout << "\n !Uncorrect!\n Enter num: ";
		goto restart0;
	}
	n--;

	int*(*operation[3])(int[], int&) = { bubbleSort, selectionSort, insertionSort };
	operation[n](arr, size);

	printArr(arr, size);
	cout << endl;
}

int main()
{
	int arr[]{ 0, 2, 9, 8, 1, -2, -5, 10, -15, 2, -3 }, size = 0;
	size = sizeof(arr) / sizeof(arr[0]);
	int n = 0;

	cout
		<< "\n Task:"
		<< "\n\t1 - math operations"
		<< "\n\t2 - array min, max, simple average"
		<< "\n\t3 - array sorting"
		<< "\n Enter num: ";

restart0:
	n = checkV();
	if (n > 3)
	{
		cout << "\n !Uncorrect!\n Enter num: ";
		goto restart0;
	}
	n--;

	if (!n)
		Task1();
	else
	{
		n--;
		void(*operation[2])(int[], int&) = { Task2, Task3 };
		operation[n](arr, size);
	}


	return 0;
}
