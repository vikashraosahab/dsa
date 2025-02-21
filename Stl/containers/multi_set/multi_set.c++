// MULTISET IS LIKE SET BUT HAVE MULTIPLE SAME VALUES 
// IT'S STORED VALUE IN ORDERED WAY
#include <bits/stdc++.h> // IMPORT ALL STL METHODS,CLASSES,OR FUNCTIONS OR ITERATIONS

using namespace std; // METHOD THAT ALLOW NAMESPACE METHODS TO USE

// HEADING OF THE MAIN FUNCTION
int main (int argc, char * argv[]) {
    multiset <int> ms;
    ms.insert (1);
    ms.insert (1);
    ms.insert (2);
    ms.insert (2);
    ms.insert (3);
    ms.insert (4);
    ms.emplace (20);
    multiset <int> m2 {1,2,3,3,2,3,5,2,321,2,212};
    //unordered_multiset <pair <int,int>> m3 = {{1,2},{3,3},{3,5}};
    // SWAP BOTH MULTISETS
    ms.swap (m2); // BOTH ARE SWAPPED
   // ms.erase (ms.find (20));
    // READING MULTISET 
    for (auto val : ms) {
        cout << val << " ";
    }
    cout<<endl;
    for (auto it = m2.begin(); it != m2.end(); it++) {
        cout << *it << " ";
    }
    
    cout<<endl;
    set <int>::iterator it = m2.lower_bound (34);
    cout << "Lower bound : ";
    if (m2.find (4) == it) {
       cout << "yes" << endl;
    }
    else cout << "no" << endl;
    cout<<endl;
    // DELETE IN RANGES 
    auto del = m2.begin();
    auto delEnd = m2.begin();
    advance (del,2);
    advance (delEnd,5);
    m2.erase (del,delEnd);
    for (auto it = m2.begin (); it != m2.end(); it++) {
        cout << *it << " ";
    }

    // CHECK GIVEN VALUE IS FOUND IN MULTI_SET OR NOT
    cout<<endl;
    if (ms.find (3) != ms.end()) {
        cout << "Multi set have  value" << endl;
    }
    else 
       cerr << "Value isn't found in the multi_set";

    // READING UNORDERED_MULTISET VALUES

    return 0;
}