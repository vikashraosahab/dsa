// FIND ELEMENT MORE THAN N / 3 IN AN ARRAY
#include <bits/stdc++.h> // INCLUDE ALL C++ FILES AND FOLDERS

// ENABLE NAMESPACE STD
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::rand;

// MAIN FUNCTION 
int main (void) {
    vector <int> arr = {1,2,3,5,1,1,3,3,3,3,33,3,3,3,3,3,2,2,1,3,21,3,2,2,3,21,3,5,2,3,1};
    // USE MOORE'S ALGORITHM TO FIND OUT MAJOR ELEMENT FROM THE ARRAY
    int length = arr.size ();
    int ele, count;
    count = 0;
    for (auto i = 0; i < length; i++) {
       if (count == 0) {
        ele = arr [i];
        count = 1;
       }
       else if (ele == arr [i]) {
         count++;
       }
       else {
        count--;
       }
    }
    cout << ele << endl;
    return 0;
}