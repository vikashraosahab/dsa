// BUBBLE SORT IS A SORTING METHOD THAT SORT ELEMENT FROM THE END OF THE ARRAY 
// IT'S STARTS SORTING ELEMENT FROM THE END OF THE ARRAY MEANS N - 1 , THEN N - 2 AND THEN 0TH 
#include <iostream>
#include <algorithm>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::swap;

// METHOD THAT DISPLAY ELEMENTS 
void display (int *ary, int size) {
    if (size == 0) return;
    for (int i = 0; i < size; i++)
     cout << ary [i] << " ";
}

// BUBBLE SORTING METHOD 
void bubble_sort (int *ary, int size) {
  if (size == 0) return;
  for (size_t i = 0; i < size; i++) {
    bool isSwapped = false;
    for (size_t j = 0; j < size - i - 1; j++) {
        if (ary [j] > ary [j + 1]) {
            swap (ary[j],ary [j + 1]);
            isSwapped = true;
        }
    }
    if (isSwapped == false)
      break;
  }
}
// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    int n;
    cin >> n;
    // READING DATA IN ARRAY
    int ary [n];
    for (int i = 0; i < n; i++) 
      cin >> ary [i];
    display (ary,n);
    cout<<endl;
    bubble_sort (ary,n);
    display (ary,n);
    // DISPLAY ELEMENTS OF THE DATA 
    return 0;
}