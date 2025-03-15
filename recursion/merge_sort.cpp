// MERGE SORT 
#include <iostream>
#include <vector>
#include <random>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::rand;

void mergeSort (vector<int>&,int,int);
void merge (vector<int>&,int,int,int);

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
	srand (static_cast<unsigned int>(time(0)));
    vector <int> res;
	for (auto i = 0; i < 30; i++) {
        res.push_back (rand () % 100);
	}
	// DISPLAY OUTPUT 
	for (auto val : res) {
		cout << val << " ";
	}
	cout << endl;
    mergeSort (res,0,res.size () -1);
	for (auto val : res) {
		cout << val << " ";
	}
	return 0;
}

// MERGESORT 
void mergeSort (vector<int>& arr,int low,int high) {
	if (low >= high) return;
	// FIND OUT MID OF THE ARRAY
	int mid = low + (high - low) / 2;
	mergeSort (arr,low,mid); // FIRST HALF SUB ARRAY
	mergeSort (arr,mid + 1, high); // SECOND HALF SUB ARRAY
	merge (arr,low,mid,high); // MERGED SORTED SUB ARRAY TOGETHER
}
// MERGING BOTH SORTED ARRAY
void merge(vector<int>&arr,int low,int mid, int high) {
    vector<int> res;
	int left = low;
	int right = mid + 1;
	while (left <= mid && right <= high) {
		if (arr[left] >= arr [right]) {
			res.push_back (arr[right++]);
		}
		else {
			res.push_back (arr[left++]);
		}
	}
	// IF LEFT SUB ARRAY HAVE SOME LEFT ELEMENTS 
	while (left <= mid) {
		res.push_back (arr[left++]);
	}
	// IF RIGHT SUB ARRAY HAVE SOME LEFT ELEMENTS 
	while (right <= high) {
		res.push_back (arr[right++]);
	}
	for (auto i = 0; i < res.size (); i++) {
		arr[low + i] = res[i];
	}
}
