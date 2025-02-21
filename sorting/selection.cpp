// SELECTION SORT IS A SORTING TECHINQUE WHERE WE SELECT A SMALLEST ELEMENT AND REPLACE IT WITH CURRENT POSITION OF THE VALUE ACCORDING PRIORITY OF THE ELEMENTS 
// IT'S SORT ELEMENTS FROM THE START OF THE ARRAY 
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;

// USER FUNCTION DEFINITIONS
// SELECTION SORTING METHOD DEFINITION
void selection_sort (int arr [], int size) {
      if (size == 0) return;
      for (int i = 0; i < size - 1; i++) {
        int minInd = i;
        for (int j = i + 1; j < size; j++) {
          if (arr [minInd] > arr [j]) {
             minInd = j;
          }
        }
        if (minInd != i) {
          int temp = arr [minInd];
          arr [minInd] = arr [i];
          arr [i] = temp;
        }
      }
}
// METHOD THAT DISPLAY ELEMENTS OF THE ARRY
void display (int arr [],int size) {
   if (size == 0) return; // WHEN ARY IS EMEPTY;
   for (int i = 0; i < size; i++)
     cout << arr [i] << " ";
}
// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
  int n;
  cin >> n;
  int ary [n];
  for (int i = 0; i < n; i++) {
     cin >> ary [i];
  }
  // DISPLAY ELEMENTS 
  display (ary,n);
  cout<<endl;
  cout << " Selection Sorted elements : " << endl;
  selection_sort (ary,n);
  display (ary,n);
  return 0; 
}