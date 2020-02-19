#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(int val, const int* arr, int size) {

	int left=0, right=size-1, mid;

	while(left <= right)
	{
		mid = left + (right-left)/2;

		if(arr[mid] == val)
			return mid;

		else if(arr[mid] > val) // go left
			right = mid-1;
		
		else					// go right
			left = mid+1; 
	}

	return -1; // didnt found
}

int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9};

	int size = sizeof(arr) / sizeof(arr[0]);

	cout << binary_search(4, arr, size) << endl;

	return 0;
}