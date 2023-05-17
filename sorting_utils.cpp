#include <iostream>
#include "sorting_utils.h"
using namespace std;

void bubbleSort(int arr[], int& size)
{
	for (int i = 0; i < size; i++)
		for (int j = 1; j < size-i; j++)
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j-1]);

	cout << endl << " Buble sort\n Ascending: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

void selectionSort(int arr[], int& size)
{
	for (int i = 0; i < size; i++)
	{
		int imin = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[imin])
				imin = j;
		}
		swap(arr[i], arr[imin]);
	}

	cout << endl << " Selection sort\n Ascending: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

void insertionSort(int arr[], int& size)
{
	for (int i = 1; i < size; i++)
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
			swap(arr[j - 1], arr[j]);

	cout << endl << " insertion sort\n Ascending: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
