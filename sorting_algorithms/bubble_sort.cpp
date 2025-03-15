// BUBBLE SORT IS A SORTING ALGORITHM THAT SORT AND ARRAY FROM THE END SIDE 
// IT'S BUBBLE UP HIGHEST VALUE AND PLACE IT AT THE END OF THE ARRAY RESPECTIVELY 
// IT'S A Quadratic TIME ALGORITHM 
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
// ALLOW NAMESPACES 
using std::cout;
using std::endl;
using std::vector;
using std::swap;

void bubble_sort (vector<int>&);
// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    vector <int> ary({7,9,11,16,3,2,1});
    for (auto val : ary)
    	cout << val << " ";
    cout << endl;
    bubble_sort (ary);
    for (auto val : ary) {
    	cout << val << " ";
    }
	return 0;
}

// FUNCTION DEFINITION 
void bubble_sort (vector<int>& ary) {
	int size = ary.size ();
	for (auto i = 0; i < size; i++) {
		for (auto j = 0; j < size - 1 - i; j++) {
			if (ary[j] > ary [j + 1]) {
               swap (ary[j],ary[j + 1]);
			}
		}
	}
}