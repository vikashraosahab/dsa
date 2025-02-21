#include <map>
#include <iostream>
#include <vector>
#include <algorithm>

// MAIN FUNCTION OF THE PROGRAM
int main (void) {
    std::multimap <int,int> m = {{1,2},{1,2},{2,2},{2,4},{3,2}};
    std::multimap <int,int>::iterator it = m.begin();
    for (it; it != m.end(); it++) 
      std::cout << it->first << " " << it->second << std::endl;
    m.insert ({2,2});
    m.insert ({20,42});
    m.insert ({120,300});
    m.emplace (200,230);

    for (auto val : m) {
        std::cout << val.first << std::endl;
        std::cout << val.second << std::endl;
    }
    std::cout << "Search value : " << std::endl;
    if (m.find (20) != m.end())
      std::cout << "Yes 20 is found in the hash table : " << std::endl;
    else 
     std::cout << "No 20 isn't found in the hash table : " << std::endl;

    // UPPER BOUND 
     it = m.lower_bound (20);
    std::cout <<  it->first << std::endl;
    return 0;
}