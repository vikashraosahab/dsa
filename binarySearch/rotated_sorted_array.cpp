// ARRAY IS ROTATED SORTED AND YOU HAVE TO FIND OUT TARGET IS PERESENT IN THE ARRAY OR NOT 
// IF ARRAY IS NOT PRESENT THEN RETURN -1
// IF ARRAY IS PRESENT THEN RETURN THE INDEX WHERE IT'S PRESENT 
#include <bits/stdc++.h>

// USING STANDARD NAMESPACES 
using std::cout;
using std::endl;
using std::cin;
using std::vector;

// APPLYING BINARY SEARCH ALGORITHM 
int binary_search (vector <int>&, int&);
// MAIN FUNCTION 
int main (int argc, char * argv[]) {
    vector<int> arr ({5,6,7,1,2,3,4}); // ROTATED BUT SORTED ARRAY
    int target = 6;
    int res = binary_search (arr,target);
    cout << "Rre : " << res << endl;
    // FIND TARGET VALUE 
	return 0;
}

// FUNCTION DEFINITIONS
int binary_search (vector <int>& arr, int& target) {
   int low = 0;
   int high = arr.size () - 1;
   while (low <= high) {
   	int mid = low + (high - low) / 2;
   	if (arr[mid] == target) {
   		return mid;
   	}
   	else if (arr[low] <= arr[mid]) {
   		// MEANS LEFT ARRAY ARE IN SORTED 
   		if (arr [low] <= target && arr [mid] >= target) {
   			// GOTO THE LEFT SUB - ARRAY
   			high = mid - 1;
   		}
   		else 
   		  low = mid + 1; // GOTO RIGHT SUB ARRAY
   	}
   	else {
   		if (arr [high] >= target && arr [mid] <= target) {
   			low = mid + 1;
   		}
   		else 
   		   high = mid - 1;
   	}
   }
   return -1;
}

