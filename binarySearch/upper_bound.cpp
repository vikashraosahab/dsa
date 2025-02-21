// IMPLEMENT UPPER BOUND IN C++
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using std::swap;

// BRUTE FORCE
int upper_bound (std::vector<int> &,int target);
// OPTIMIZED APPORACH USING BINARY SEARCH 
int binary_search_up (std::vector <int>&,int);
void insertion_sort (std::vector <int>&); // SORT THE ARRAY BY USING INSERTION SORT

// MAIN FUNCTION OF THE PROGRAM
int main () {
    std::vector <int> arr = {1,2,52,23,4,5,6,7,9,12};
    int target = 9;
    int res = upper_bound (arr,target);
    std::cout << "Upper Bound : " << res << std::endl;
    // FOUND UPPER BOUND BY USING BINARY SEARCH
    // SORTED ARRAY
    insertion_sort (arr);
    for (auto i = 0; i < arr.size (); i++){
        std::cout << arr [i] << " ";
    };
    std::cout<<std::endl;
    int res2 = binary_search_up (arr,target);
    std::cout << "Upper Bound : " << res2 << std::endl;
    return 0;
}

// BRUTE FORCE APPROACH
int upper_bound (std::vector<int> &arr,int target) {
    int length = arr.size ();
    int upper_bound = INT_MAX;
    for (auto i = 0; i < length; i++) {
        if (arr[i] > target && arr[i] < upper_bound) {
            upper_bound = arr[i];
        }
    }
    return upper_bound == INT_MAX ? -1 : upper_bound;
}
// OPTIMAZIED APPROACH BY BINARY SEARCH 
int binary_search_up (std::vector <int>& arr, int target) {
    int length = arr.size () - 1;
    int low = 0;
    int high = length;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr [mid] < target) {
            ans = mid;
            low = mid + 1;
        }
        else 
          high = mid - 1;
    }
    return ans;
}
// INSERTION SORT 
// place in sort ALGORITHM
void insertion_sort (std::vector <int>& arr) {
    int length = arr.size ();
    for (auto i = 0; i < length; i++) {
        int j = i + 1;
        //int val = arr [i];
        while (j > 0 && arr[j-1] > arr [j]) {
            swap (arr [j],arr[j-1]);
            j--;
        }
    }
}