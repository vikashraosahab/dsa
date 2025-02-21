// BUBBLE SORT RECUSION IS SORTING METHOD THAT USE RECURSION METHOD TO SORT DATA 
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <vector>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;
using std::rand;
using std::srand;
using std::swap;
using std::vector;

 void bubble_sort (vector <int>& arr, int size) {
   if (size == 1) return;
   bool isSwapped = false;
   for (int i = 0; i <= size - 2; i++) {
    if (arr [i] > arr [i + 1]) {
        swap (arr [i],arr [i+ 1]);
        isSwapped = true;
    }
   }
   if (isSwapped == false)
     return;
   bubble_sort (arr,size - 1);
}
void display (vector <int>& arr) {
    for (auto val : arr) {
        cout << val << " ";
    }
}
// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    //srand (static_case <unsigned> (time (0)));
    vector <int> arr; // DECLARATION OF STORAGE CONTAINER
    for (int i = 0; i < 20; i++) {
       arr.push_back (rand () % 100 + 3);
    }
    int len = arr.size (); // GET LENGTH OF THE ARRAY
    cout<<endl;
    display (arr);
    cout<<endl;
    bubble_sort (arr,len);
    display (arr);
    cout<<endl;
    return 0;
}