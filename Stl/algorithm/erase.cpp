// ERASE METHOD IS USED FOR DELETING VALUES IN RANGES 
// ERSAE METHOD IS EASILY FIND IN STL ALGORITHM
#include <iostream>
#include <algorithm>
#include <vector>

//using std::erase;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    vector <int> v = {12,3,32,3,32,3,2,3,52,3,21,23,21,1,3,2,12}; // DECLARATIONS AND INITIALIZATION OF THE ELEMENTS OF THE VECTOR
    // SORTING THE VECTOR ELEMENTS
    sort (v.begin(),v.end());
    reverse (v.begin(),v.end());
    // READING DATA OF THE VECTOR 
    for (auto val : v)
      cout << val << " ";
    cout<<endl;
    // DELETE 0 TO 5 INDEX VALUES 
    auto start = v.begin();
    vector <int>::iterator end = next (v.begin(),5);
    v.erase (start,end);
    v.erase (v.begin());
    for (auto val : v) 
      cout << val << " ";
    cout<<endl;
    return 0;
}