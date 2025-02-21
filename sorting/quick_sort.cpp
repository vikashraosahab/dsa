// QUICK SORT IS A SORTING ALGORITHM THAT SORT ELEMENTS BY USING RECURSION 
// IN QUICK SORT FIRST WE PICK A VALUE AS PIVOT (PIVOT CAN BE FIRST ELEMEMENT OR LAST ELEMENT OR ANY RANDOM ELEMENT OF THE ARRAY)
// THEN WE ASSIGN TWO VARIABLE FIRST FOR LEFT SIDE AND SECOND ONE IS AT HIGH END OF THE LOOP
// left side variable traverse 0 to n - 1 and try find to out largest value then pivot  and right variable traverse n - 1 to 1th index for find out value that smaller than pivot 
// IF LEFT VARIABLE FIND OUT A VALUE THAT ACTUALLY GREATER THAN PIVOT AND RIGHT POINTER FIND OUT A VALUE THAT IS SMALLER THE PIVOT AND THEY NOT CORSSED EACH OTHER 
// THEN WE SWAP LEFT POINTER VALUE TO RIGHT POINTER VALUE 
// IF THEY CORSSED THEN WE SWAP PIVOT WITH THE RIGHT SMALLER VALUE 
// TIME COMPLEXITY OF THE QUICK SORT IS O (N * LOGN)
// SPACE COMPEXITY OF THE QUICK SORT IS O (1) OR USING STACK O (N)
#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <vector>

// ALLOW REQUIRED NAMESPACE STANDARD METHODS 
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::swap;
using std::rand;
//using std::static_cast;
using std::vector;
using std::for_each;

// USER DEFINE FUNCTION PROTOTYPES
void quick_sort (vector <int>&, int,int);
int partitioned (vector <int>&, int,int);
// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    vector <int> arr = {234,3,4,3,4,2,1,4,2,4,1};
    // DISPLAY ELEMENTS BY USING FOR EACH LOOP STL 
    for (int val : arr)
     cout << val << " ";
    cout<<endl;
    int size = arr.size ();
    quick_sort (arr,0,size - 1);
    cout<<endl;
    for (int val : arr)
     cout << val << " ";
    cout<<endl;
    return 0;
}

void quick_sort (vector <int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partitioned (arr,low,high);
        quick_sort (arr,low,pivot - 1);
        quick_sort (arr,pivot + 1, high);
    }
}

// METHOD THAT PARTITIONED LEFT HALF AND RIGHT HALF FROM PIVOT 
int partitioned (vector <int>& arr, int low, int high) {
   int pivot = arr [low];
   int left = low;
   int right = high;
   while (left < right) {
    while (arr [left] <= pivot && left <= high - 1)  // FIND OUT GREATEST VALUE 
      left++; 
    while (arr [right] >= pivot && right >= low + 1)
      right--;
    if (left < right)
      swap (arr [left],arr [right]);
   }
   swap (arr [low],arr [right]);
   return right;
}