// INSERTION SORT IS A SORTING METHOD WHERE IS ELEMENT IS SEARCH IN REVERSE ORDER TO FIND RIGHT PLACE ACCORDING TO VALUE
// IT SELECT A PARTICULAR INDEX VALUE AND REVERSE FROM THERE UNTIL IT BECOME THE FIRST ELEMENT 
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::string;
// FUNCTION METHODS 
void insertion_sort (int ary[], int size) {
  if (size == 0) return;
  for (size_t i = 0; i < size - 1; i++) {
    size_t j = i + 1;
    while (j > 0 && ary [j - 1] > ary [j]) {
        std::swap (ary [j - 1], ary [j]);
        j--;
    }
  }
}
void display (int ary [], int size) {
  if (size == 0) return;
  for (size_t i = 0; i < size; i++) {
     cout << ary [i] << " ";
  }
}

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    int n;
    cin >> n;
    int size = n;
    int ary [n];
    while (n--) {
      cin >> ary [n];
    }

    // READING DISPLAY ELEMENTS 
    display (ary,size);

    // SORTING ARARY
    insertion_sort (ary,size);
    std::cout<<std::endl;
    // DISPLAY ELEMENTS 
    display (ary,size);
    return 0;
}