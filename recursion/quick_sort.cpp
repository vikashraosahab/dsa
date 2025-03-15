// QUICK SORT ALGORITHM USE FOR SORTING ELEMENTS IN QADRACTIC * LOGRATHMIC TIME COMPLEXITY
// QUICK SORT IS PLACE IN SORTING ALGORITHM THAT SORT ELEMENTS WITHOUT USING ANY EXTRA SPACE
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
// SETUP NAMESPACE METHODS 
using namespace std;

// FUNCTION PROTOTYPES
void display (vector<int>&);
void quickSort (vector<int>&,int,int);
int partition (vector<int>&,int,int);

// MAIN FUNCTION OF THE PROGRAM 
int main (int argc, char * argv[]) {
    vector<int> ary = {20,3,23,5,1,2,52,1,212,12,11};
    display (ary);
    cout << endl;
    quickSort (ary,0,ary.size () - 1);
    display (ary);
    cout << endl;
    return 0;
}

// FUNCTION DEFINITION 
void display (vector<int>& arr) {
   try {
     if (arr.empty()) throw "Empty";
     for (auto val : arr) {
        cout << val << " ";
     }
   }
   catch (string e)  {
      cerr << e << endl;
   }
}
// SORT THE ELEMENTS RECURSIVELY BY USING QUICK SORT 
void quickSort (vector <int>& arr,int start,int end) {
   if (start < end) {
      int pivot = partition (arr,start,end);
      quickSort (arr,start,pivot -1); // BEFORE THE PIVOT SUB -ARRAY
      quickSort (arr,pivot + 1,end); // AFTER PIVOT SUB - ARRAY
   }
}
// FIND THE MIDDLE ELEMENT OF THE ARRAY
int partition (vector<int>& arr,int start,int end) {
  int count = 0;
  int pivot = arr[start]; // CHOSE FIRST ELEMENT AS PIVOT
  for (auto i = start + 1; i <= end; i++) {
    if (pivot > arr[i]) {
        count = count + 1; // COUNT INCREMENT WHEN PIVOT IS GREATER THAN CURRENT ARRAY ELEMENT
    }
  }
  // SWAP THE PIVOT WITH RIGHT PLACE 
  swap (arr[start],arr[start + count]);
  // SET ALL THE ELEMENTS BEFORE THE PIVOT IS SMALLER THAN PIVOT
  // SET ALL THE ELEMENTS AFTER THE PIVOT IS GREATER THAN PIVOT
  int i = start; // AT THE ZERO INDEX 
  int j = start + count + 1; // ONE STEP AHED TO THE PIVOT
  while (i < j && j <= end) {
     while (i < start + count && arr[i] <= pivot) {
        i = i + 1;
     }
     while (j <= end && arr[j] > pivot) {
        j = j + 1;
     }
     
     // WHEN I OR J FIND SOME SMALLER AND GREATER VALUE RESPECTIVELY
  } 
  return start + count;
}