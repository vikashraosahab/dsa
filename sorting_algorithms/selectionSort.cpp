// SELECTION SORT IS A QUADRATIC SORTING ALGORITHM 
// SELECTION  SORT USE A MINIMUM ELEMENT AND THEN SORT
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

// FUNCTION PROTOTYPE 
void selectionSort (vector <int>&);
void display (vector <int>&);

// MAIN FUNCTION 
int main (int argc, char * argv[]) {
    vector <int> ary ({7,9,11,16,3,2,1});
    display (ary);
    cout << endl;
    selectionSort (ary);
    display (ary);
    cout<<endl;
	return 0;
}

// FUNCTION DEFIITION 
void selectionSort (vector <int>& ary) {
	for (auto i = 0; i < ary.size () - 1; i++) {
		int minValue = i;
		for (auto j = i + 1; j < ary.size (); j++) {
			if (ary[minValue] > ary[j]) {
				minValue = j;
			}
		}
		// SWAP SMALLEST WITH CURRENT VALUE 
		swap (ary[i],ary[minValue]);
	}
}

// METHOD THAT DISPLAY ELEMENTS OF THE VECTOR 
void display (vector <int>& ary) {
	if (ary.empty()) return;
	for (auto val : ary) 
		 cout << val << " ";
}