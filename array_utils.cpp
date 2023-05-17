#include "array_utils.h"

int findMax(int arr[], int &size)
{
	int imax = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > arr[imax])
		{
			imax = i;
		}
	}

	return arr[imax];
}

int findMin(int arr[], int& size)
{
	int imin = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < arr[imin])
		{
			imin = i;
		}
	}

	return arr[imin];
}

double calculateAverage(int arr[], int& size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];

	return sum / size;
}