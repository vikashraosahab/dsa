// UNORDERED MULTIMAP IS AN ASSOCIATIVE DATA STRUCTURE THAT STORE UNORDERED HASH MAP VALUES AND KEYS 
// IT'S STORE MULTIPLE KEYS IN HASH TABLE
#include <unordered_map>
#include <iostream>

using namespace std;
int main (void) {
    unordered_multimap <int,int> m;
    m.insert ({2,3});
    m.insert ({2,3});
    m.emplace (2,32);
    m.emplace (32,3);
    m.emplace (33,32);
    m.erase (m.begin());
    for (auto val : m)
      cout << val.first << " " << val.second << endl;
    m.emplace (3,23);
    std::cout << "Search value : " << std::endl;
    std::cout << "Hash table is empty : " << m.empty() << std::endl;
    cout<<endl;
    if (m.find (3) != m.end()) 
     cout << "Yes key 3 is found ";
    else 
     cout << "No key is not 3 is found";
    return 0;
}