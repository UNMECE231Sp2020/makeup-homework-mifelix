#include <vector> 
#include "sort.h"

void merge(std::vector<int> &array, int left, int middle, int right)
{
}

void mergeSort(std::vector<int> &array, int left, int right) 
{
	int middle;
	if(left<right)
	{
		middle = (left+right)/2;

		mergeSort(array, left, middle);
		mergeSort(array, middle+1, right);

		merge(array, left, middle, right);
	}
}

//changed mid to middle
//
