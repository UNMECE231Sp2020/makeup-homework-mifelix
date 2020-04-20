#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int  value)
{
	magnitude_m start = 0;
	magnitude_m end = set.magnitude() -1;

	while(true) {

		magnitude_m middle = (start + end) / 2;

		if(start == end) {
			return false;
		}

		if(middle == value) {
			return true;
		}

		if (middle > value) {
			end = middle;
		}
		
		else {
			start = middle + 1;
		}

		return false;
	}
	//attempted this and not entirely sure if this is correct. changed 'begin' to the word 'start' because
	//it made more sense for myself. 

}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
	const int *mid;
	
	mid = begin + (end - begin)/2;
	if (mid == end)
	{
		return false;
	}
	if (*mid == value)
	{
		return true;
	}
	else if (*mid > value)
	{
		end = mid;
	}
	else if (*mid < value)
	{
		begin = mid + 1;
	}
	return binarySearchRecursive(begin, end, value);
	
}

