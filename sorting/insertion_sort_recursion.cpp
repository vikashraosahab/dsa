// METHOD OF INSERTION SORT THAT SORT THE ARRAY BY USING RECURSION
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::vector;
using std::rand;
using std::for_each;
using std::endl;

void insertion_sort (vector <int>& arr, int n, int i) {
    if (n == i) return; // BASE CASE 
    int j = i;
    // SWAPPING NUMBER
    while (j > 0 && arr [j - 1] > arr [j]) {
        std::swap (arr[j - 1],arr [j]);
        j--;
    }

    insertion_sort (arr,n,i+1); // RECURSION CALLING
}

int main (void) {
    vector <int> ary;
    for (int i = 0; i < 40; i++) {
        ary.push_back (rand () % 100 + 3);
    }
    // DISPLAY ELEMENT 
    // LAMBDA FUNCTIONI 
    for_each (ary.begin(), ary.end(), [](int x) {
        cout << x << " ";
    });
    cout << endl;
    insertion_sort (ary,40,0);
    cout<<endl;
    // DISPLAY ELEMENT BY FOR EACH LOOP
    for_each (ary.begin(), ary.end(), [] (int x) {
        cout << x << " ";
    });
    // DISPLAY ELEMENT

    return 0; 
}