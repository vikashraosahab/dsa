// INSERTION SORT IS QUADRATIC COMPLEXITY ALGORITHM
// INSERTION SORT DIVIDE ARRAY INTO PART FIRST FOR SORTED AND SECOND ONE IS UNSORTED 
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

// SET UP NAMESPACE STANDARD
using namespace std;

void insertionSort (vector <int>&);
void display (vector <int>&);

// MAIN FUNCTION OF THE PROGRAM 
int main (int argc, char * argv[]) {
    vector <int> ary({7,8,5,2,1,2,35,2,3,2,1,32});
    display (ary);
    cout<<endl;
    insertionSort (ary);
    display(ary);
    cout<<endl;
	return 0;
}

void insertionSort (vector <int>& ary) {
   for (auto i = 1; i < ary.size (); i = i + 1) {
   	 auto j = i;
   	 while (j > 0 && ary[j] < ary [j - 1]) {
   	 	swap (ary[j],ary[j - 1]);
   	 	j--;
   	 }
   }
}
void display (vector <int>& ary) {
	for (auto val : ary) {
		cout << val << " ";
	}
}