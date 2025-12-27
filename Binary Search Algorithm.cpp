//Program to show the use of binary search algorithm.
//Although harder to write, binary search is far more efficient than linear, in fact, by a factor of O(logN) instead of O(N).
//This means if linear search takes N period to execute (where N = number of elements), binary would only take logN period to execute!
//Only Drawback: Do NOT use bin_search for unsorted array. It only increases to complexity by having to sort first

#include <iostream>
using namespace std;

int bin_search(int array[], int to_search, int start, int end){
	
	int center = (end + start) / 2;
	
	if(array[end] == to_search){
		cout << to_search << " found at position " << end;
		return 0;
	}
	
	else if (array[center] == to_search){
		cout << to_search << " found at position " << center;
		return 0;
	}
	
	else if (start == end-1){
		cout << to_search << " is not found in the given array";
		return 0;
	}

	if (array[center] < to_search){
		start = center;
	}

	else{
		end = center;
	}

	bin_search(array, to_search, start, end);

}



int main(){

	//Given task:
	//Search for the index of 6 in the already-sorted array below
	int arrs[] = {1, 2, 3, 4, 8, 9, 12}, to_search = 9;

	int len = sizeof(arrs) / sizeof(arrs[0]);

	//Using recursion
	bin_search(arrs, to_search, 0, len - 1);

	//	int arr[] = {2,5,4,1,6,7,9,3,0};

	return 0;
	
}