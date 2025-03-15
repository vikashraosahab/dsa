// QUICK SORT ALGORITHM TO SORT ELEMENTS OF THE ARRAY 
// QUICK SORT IS A (QUADRATIC * LOGARTHIMIC ALGORITHM) THAT SORT ELEMENTS WITHOUT USING ANY EXTRA SPACE (IN-SPACE -SORTING)
#include <iostream>
#include <vector>
#include <math.h>
#include <random>
// SETUP NAMESPACE 
using std::cout;
using std::cin;
using std::vector;
using std::endl;

// DISPLAY ELEMENTS OF THE VECTOR 
void display (vector <int>& arr) {
    // USE SIZE_T TEMPLAVE DATA TYPE TO STORE VALUES OF ITERATOR OR LENGTH
    size_t len = arr.size ();
    for (auto i = 0; i < len; i = i + 1) {
        cout << arr [i]  << " ";
    }
}

// QUICK SORT FOR SORT ELEMET
void quickSort (vector <int>&arr,int start,int end) {

}
// FIND OUT PARTITION INDEX 
int partition (vector<int>&arr, int start,int end) {

}
// MAIN FUNCTION OF THE PROGRAM 
int main (int argc, char * argv[]) {
    vector <int> res ({44,36,24,13,21,06});
    display (res); // CALLING DISPLAY METHOD TO DISPL ELEMENTS 
    cout<<endl; // POINTER SHOULD PLACE NEXT LINE
    return 0;
}