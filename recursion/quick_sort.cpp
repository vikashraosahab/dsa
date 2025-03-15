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
    vector<int> arr({23,12,53,26,91,12,6,23,2,3,2,1,2,3});
    display (arr);
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

void quickSort (vector <int>& arr,int start,int end) {

}
int partition (vector<int>& arr,int start,int end) {
  int count = 0;
  int pivot = arr[start]; // CHOSE FIRST ELEMENT AS PIVOT

  return start + count;
}