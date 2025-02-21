/*
UNORDERED MAP IS A ASSOCIATIVE DATA STRUCTURE THAT STORE VALUE IN PAIR OF KEYS AND KEYS ARE UNQIUE VALUES THAT A MAP STORE IT ONLY ONCE 
EVERY THING OF MAP IS FOLLOW IN UNORDERED MAP UNTIL ONE CONDITION THAT UNORDERED MAP NOT STORE VALUE IN SORTED MANNER IT'S STORE VALUE WITH KEY AS IT COMES
TIME COMPLEXITY - 
O (1) Best case
O (n) worst case
*/
#include <iostream>
#include <unordered_map>

using std::unordered_map;
using std::cout;
using std::endl;
using std::cin;

int main (void) {
    unordered_map <int,int> m;
    m.insert ({2,3});
    m.insert ({20,40});
    m.insert ({1,2});
    m.insert ({3,2});
    m.insert ({10,30});
    m.insert ({33,3});
    m.insert ({22,2});
    m.insert ({11,423});
    m.emplace (232,43);
    //m.insert (23,42);
    
    auto first = m.begin();
    auto second = next (m.begin(), 4);

    // DELETE KEY AND VALUES  IN RANGES 
    m.erase (first,second);
    m.insert ({23,32});
    // READING HASH VALUES 
    m.clear ();
    m.emplace (23,22);
    m.emplace (1,32);
    m.emplace (2,4);
    for (auto it = m.begin(); it != m.end(); it++)
      std::cout << it->first << " " << it->second << std::endl;
    std::cout<<std::endl;
    return 0;
}