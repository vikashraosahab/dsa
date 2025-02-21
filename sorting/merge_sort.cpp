// MERGE SORT IS DIVIDE AND CONQUERS ALGORITHMS 
// MERGE SORT IS A SORTING TECHNIQUE THAT FOLLOW DIVIDE AND MERGE METHOD TO SORTING A LARGE NUMBER ELEMENTS IN ASCENDING OR DESCENDING ORDER
// TIME COMPLEXITY OF MERGE SORT IS BIG - O (N * LOG N)
// SPACE COMPEXITY OF MERGE SORT IS BIG - O (N)
#include <iostream>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
void mergeSort (vector<int>&, int,int);
void merge (vector<int>&,int,int,int);
// MERGE SORT 
void mergeSort (vector <int>&arr, int low, int high) {
    // BASE CASE 
    if (low >= high) 
      return;
    int mid = (low + high) / 2;
    mergeSort (arr,low,mid); // DIVIDE LEFTMOST HALF OF THE ARRAY
    mergeSort (arr,mid + 1, high); // DIVIDE RIGHTMOST HALF OF THE ARRAY
    merge (arr,low,mid,high); // MERGE TWO SORTED ARRAY ELEMENTS TO-GETHER
}

// MERGE SORTED ELEMENTS
void merge (vector <int>& arr, int low, int mid, int high) {
   vector <int> temp;
   int left = low; // LEFT IS AT ZERO
   int right = mid + 1; // RIGHT IS MID + 1 AT STARTING OF THE ANOTHER ARRAY
   while (left <= mid && right <= high) { // FIND SMALLEST ELEMENT FROM THE BOTH SORTED ARRAY 
     if (arr [left] > arr [right]) {
        temp.push_back (arr [right]); // Insert smallest element in the container 
        right++;
     }
     else {
        temp.push_back (arr [left]); // insert right most smallest element in the container
        left++;
     }
   }
   // INSERT REST OF ELEMENTS FROM CONTAINER 
   while (left <= mid) {
    temp.push_back (arr [left]);
    left++;
   }
   // INSERT ALL REMAINING ELEMENTS OF TEH RIGHT HALF OF THE ARRAY
   while (right <= high) {
    temp.push_back (arr [right]);
    right++;
   }
  
  // INSERT ALL SORTED ELEMNETS AGAIN IN THE MAIN CONTAINER
  for (int i = low; i <= high; i++) {
    arr [i] = temp [i - low];
  }
}

void display (vector <int> & arr) {
  if (arr.empty()) 
    return; 
  for (auto val : arr) {
    cout << val << " ";
  }
}
// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    srand (static_cast <unsigned>(time (0)));
    vector <int> ary;
    for (int i = 0; i < (int) (1e1); i++) {
        ary.push_back (rand () % 100 + 1);
    }
    cout<<endl;
    display (ary); 
    cout<<endl;
    int low = 0;
    int high = ary.size () - 1;
    mergeSort (ary,low,high);
    display (ary);
    cout<<endl;
    return 0;
}