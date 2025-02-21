// IMPLEMENT A LOWWER BOUND FUNCTION
// LOWER BOUND IS VALUE THAT IS PRESENT IN THE ARRAY OR GREATEST SMALLER THAN GIVEN VALUE 
/*
 [1,5,6,7,7,8]
 target = 3
 answer = 1
 target 5
 answer = 5
*/
#include <bits/stdc++.h>

// ALLOW NAMESPACE 
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::swap;

// FUNCTION PROTOTYPES
int lower_bound (vector <int>&,int);
// BUBBLE SORT
void bubble_sort (vector <int>&);
void display (vector <int>&); // DISPLAY ELEMENTS


// MAIN FUNCTION OF THE PROGRAM
int main (int argc, char * argv[]) {
    vector <int> arr ({1,3,5,3,2,3,5,23,32});
    // SORTING ARR BY USING OF BUBBLE SORT
    bubble_sort (arr);
    display (arr);
    cout<<endl;
    int res = lower_bound (arr,8);
    cout << "Lower bound of traget 8 is : " << res << endl;
	return 0;
}

// BUBBLE_SORT SORTING TECHINE 
void bubble_sort (vector <int>& arr) {
   size_t i = 0;
   const int LENGTH = arr.size ();
   for (i; i < LENGTH; i++) {
   	for (size_t j = 0; j < LENGTH - i - 1; j++) {
   		if (arr [j] > arr [j + 1]) {
   			swap (arr [j],arr[j + 1]);
   		}
   	}
   }
}
// DISPLAY ELEMENTS 
void display (vector <int>& arr) {
	for (size_t i = 0; i < arr.size(); i++) {
       cout << arr [i] << " ";
	}
}

// IMPLEMENT LOWER BOUND 
// BECAUSE ARRAY WILL BE SORTED BY BUBBLE SORT SO WE CAN USE BINARY SEARCH ALGORITHM
int lower_bound (vector <int>&arr, int target) {
    const int LENGTH = arr.size () - 1;
    int low = 0;
    int high = LENGTH;
    int ans = -1;
    while (low <= high) {
    	int mid = low + (high - low) / 2;
    	if (arr [mid] <= target) {
    		ans = arr[mid];
    		low = mid + 1;
    	}
    	else 
    	  high = mid - 1;
    }
    return ans;
}
