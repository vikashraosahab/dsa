// UNORDRED PAIR OF UNIQUE ELEMENTS 
// EVERY FUNCTION OF THE SET ARE SUPPORT 
#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::unordered_set;
using std::pair;
using std::make_pair;

// MAIN FUNCTION OF THE PROGRAM
int main (int argc, char * argv[]) {
    //std::cout << "The Main program " << std::endl;
    unordered_set <int> us = {10,202,21,2,33,5,2,3,5,2,1235,123,13,21};
    unordered_set <int> us1{1,2,3,5,2,32,321,12,3};
    //unordered_set <pair <int,int>> usp {{1,3},{2,12},{5,22}};
    for (auto i = us.begin(); i != us.end(); i++) {
        cout << *i << " ";
        i++;
    }
    // REMOVE ELEMENTS FROM THE SET
    us1.erase (us1.begin());
    us1.clear ();
    us.clear ();
    //reverse (us1.begin (), us1.end());
    // GET SIZE OF THE UNORDERED SET 
    cout << us.size () << endl;
    us.empty () == 1 ? "Empty" : "Not Empty";
    // PAIR UNORDERED SET 
   
    cout<<endl;
    // READ DATA OF THE UNORDERED SET
    us1.swap (us);
    
    unordered_set<int>::iterator it = us1.begin();
    do {
        cout << *it << " ";
        it++;
    }
    while (it != us1.end());

    cout<<endl;
    return 0;
}