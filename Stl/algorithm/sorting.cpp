// SORTING METHOD IS A STL (STANDARD TEMPLATE LIBRARY) THAT USED TO SORT DATA IN ASCENDING OR DESCENDING ORDER
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

bool comparison (vector <int> a, vector <int> b) {
    if (a < b) return false;
    return true;
}

// MAIN FUNCTION 
int main (void) {
   // SORTING 1 DIMENSIONAL ARRAY OR VECTOR 
   /* vector <int> v({1,3,4,12,23,21,2,21,2,32,5,33,4,3,5,3,23,34,3,434});
    for (auto val : v)
      std::cout << val << " ";
    cout<<endl;
    // SORTING VECTORS IN RANGE
    auto start = v.begin();
    auto end = next (v.begin(),8);
    sort (start,end);
    for (auto val : v)
      cout << val << " ";
    cout<<endl;
    // SORT WHOLE VECTOR 
    sort (v.begin(), v.end());
    for (auto val : v) {
        cout << val << " ";
    }
    cout<<endl;
    */
    // SORTING 2D VECTOR 
    vector <vector <int>> v;
    v = {
        {2,3,2,3,3,4,3,342},
        {23,23,32,23,1,23,2,5},
        {23,2,3,21,2,3,5,2,1,2},
    };
    for (auto i = 0; i < v.size (); i++) {
        for (auto j = 0; j < v[i].size (); j++) {
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }
    // SORTING 2D VECTOR 
    // USE LAMBDA FUNCTION METHOD 
    sort (v.begin(),v.end(),comparison);
    cout << endl;
    for (auto i = 0; i < v.size (); i++) {
        for (auto j = 0; j < v[i].size (); j++) {
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (auto it = 0; it < v.size (); it++) {
        sort (v[it].begin(),v[it].end());
    }
    
    for (int i = 0; i < v.size (); i++) {
        for (int j = 0; j < v[i].size (); j++) {
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}