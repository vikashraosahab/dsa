// FIND OUT LARGEST ELEMENT BY USING RECURSION
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::max;
using std::min;
using std::vector;
using std::for_each;
using std::rand;

// FUNCTION PROTOTYPE
int largestElement (vector <int>&); 
// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    vector <int> arr;
    // INSERTING VALUE IN VECTOR ARRAY
    for (int i = 0; i < (int) (1e1); i++) {
        arr.push_back (rand () % 100 + 3);
    }

    for (auto val : arr)
     cout << val << " ";
    // CALLING RECURSIVE FUNCTION 
    int val = largestElement (arr);
    cout << "Largest element is : " << val << endl;
    return 0;
}

// FUNCTION DEFINITION 
int largestElement (vector <int>& arr) {
     sort (arr.begin(), arr.end());
     return arr [arr.size () - 1];
}