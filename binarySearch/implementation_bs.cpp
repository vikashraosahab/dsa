// IMPLEMENTATION OF THE BINARY SEARCH IN MONOTONIC ARRAY
// BINARY SEARCH IS SEARCHING ALGORITHM THAT PERFORMS OPERATIONS ON THE BIG O (LOG N ) TIME COMPEXITY MEAS DIVING HALF ARRAY EACH TIME
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

// ALLOW NAMESPACE FOR STD 
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::swap;
using std::rand;

// FUNCTION PROTOTYPES 
int binary_search (int [],int,int); // SERACH A PARTICULAR KEY VALUE
void selection_sort (int *,int); // FOR MAKEING ARRAY MONOTONIC 
void display (int *,int); // DISPLAY ELEMENTS OF THE ARRAY
void mergeSort (int*,int,int); // DIVIDE THE ARRAY
void merged (int*,int,int,int); // MERGED ARRAY
// MAIN FUNCTION OF THE PROGRAM
int main (int argc, char * argv[]) {
    int arr [300];
    for (auto i = 0; i < 300; i++) {
    	arr [i] = rand () % 100;
    }
    // SIZE OF THE ARRAY
    int len = sizeof (arr) / sizeof (arr[0]);
    cout << len << endl;
   // cout << "Size : " << len << endl;
    // CALLING DISPLAY METHODS
   // display (arr,len);
    display (arr,len);
   // SORTING THE ARRAY
   if (len > 15) {
   	mergeSort (arr,0,len - 1);
   }
   else 
     selection_sort (arr,len);
   //selection_sort (arr,len);
   // DISPLAY SORTED ELEMENT
    display (arr,len);

    // FIND TARGET 93
    int res = binary_search (arr,93,len);
    if (res >= 0)
    	cout << "Value at index no : " << res;
    else 
      cout << "Value not found in the arrary ! ";
    cout<<endl;


	return 0;
}
// FUNCTION DEFINITIONS 
int binary_search (int arr [],int target, int size) {
   int start = 0;
   int end = size - 1;
   int count = 0;
   while (start <= end) {
     cout << "Times : " << count << endl;
     count++;
   	 int mid = start + ((end - start) / 2);
   	 if (arr [mid] == target) 
   	 	 return mid;
   	 else if (arr [mid] > target) 
   	 	 end = mid - 1;
   	 else 
   	    start = mid + 1;
   }
   return -1;
}
// SORTING ARRAY
void selection_sort (int *arr, int size) {
	if (size == 0 || size == 1) // WHEN ARRAY IS EMPTY OR ONLY ONE ELEMENT IN THE ARRAY
		return;
   // OTHERWISE PERFORM SORT OPERATION
   size_t i = 0; 
   int min_val;
   for (i; i < size - 1; i++) {
   	 size_t j = i + 1;
      min_val = i;
     for (j; j < size; j++) {
     	if (arr [min_val] > arr [j]) {
     		min_val = j;
     	}
     }
     // SWAP SMALLEST WITH LARGEST 
     swap (arr[i],arr[min_val]);
   }
}

// DISPLAY ELEMENTS 
void display (int *arr, int size) {
	if (size == 0) return;
	for (auto i = 0; i < size; i++) {
		cout << arr [i] << " ";
	}
	cout<<endl;
}
// MERGE SORT 
void mergeSort (int *arr, int low, int high) {
   if (low == high) return;
   int mid = low + (high - low) / 2;
   mergeSort (arr,low,mid); // DIVIDE FIRST LEFT HALF
   mergeSort (arr,mid + 1, high); // DIVIDE SECOND RIGHT HALF
   merged (arr,low,mid,high); // MERGE SORTED ARRAY TO-GETHER
}
void merged (int *arr,int low, int mid, int high) {
	int left = low;
	int right = mid + 1;
	int size = high - low + 1;
	int *arr2 = new int[size];
	int i = 0;
	while (left <= mid && right <= high) {
		if (arr [left] > arr [right]) {
			arr2 [i] = arr [right];
			right++;
		}
		else {
			arr2 [i] = arr [left];
			left++;
		}
		i++;
	}
	while (left <= mid) {
		arr2[i] = arr [left];
		i++;
		left++;
	}
	while (right <= high) {
		arr2 [i] = arr [right];
		right++;
		i++;
	}

	// REPLACE SORTED ELEMENTS IN UN-SORTED 
	for (int j = 0; j < size; j++) {
		arr [low + j] = arr2 [j];
	}
	delete[] arr2; // DELETE THAT DYNAMIC ALLOCATED ARRAY
}