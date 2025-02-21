// MAP IS KEY PAIR DATA STRUCTURE THAT STORE VALUES WITH PAIR OF KEY
// KEY IS UNIQUE AND IT MAY BE ANY TYPES LIKE INTEGER, FLOATING, STRINGS, CHARACTERS, AND EVEN DOUBLE 
// MAP GENERALLY USED FOR STORING FREQUENCIES OF GIVEN KEY
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    std::map <int,int> m;
    m[1] = 20;
    m[20] = 3;
    m[3] = 204;
    m[2] = 210;
    m.insert ({30,2032});
    m.insert ({10,29});
    m.emplace (20,20);

    std::map <int,int> m2;
    std::vector <int> ary = {1,2,3,5,2,3,3,23,5,2,3,5,2,3,5,2};
   /* std::vector <std::pair <int,int>>  v = {{1,2},{3,2},{42,2},{42,2},{23,2},{2,23},{2,42}};
    std::map <std::pair <int,int>,int> m3;
    for (auto val : v)
        m3 [val]++;

    for (auto val : m3)
       std::cout << val.first.first << " " << val.first.second << " : " << val.second << std::endl;
    std::cout<<std::endl;       
    for (int i = 0; i < ary.size (); i++) 
      m2[ary[i]]++;
    m2.erase (m2.begin (), m2.begin () + 2);
    // GETING SIZE OF THE MAP 
    std::cout << "Size : " << m.size () << std::endl;
    std::cout << "Empty : " << m.empty () << std::endl;
    m2.swap (m);
    // READING OF THE MAP
    for (auto val = m.begin(); val != m.end(); val++)
      std::cout << val->first << " " << val->second << std::endl;
    // READING OF THE ELEMENTS OF THE HASH TABLE
    for (auto val : m2) 
      std::cout << "key : value " << val.first << " : " << val.second << std::endl;
    */
    for (auto value : ary) 
      m2[value]++;

    std::cout << "Key" << " : " << "Value" << " " << std::endl;
    for (auto value : m2) {
        std::cout << value.first << " " << value.second << std::endl;
    }
    auto lowerBound = m2.lower_bound (3);
    std::cout << lowerBound->first << std::endl;
    std::cout << lowerBound->second << std::endl;
    auto upperBound = m2.upper_bound (20);
    std::cout << upperBound->first << std::endl;
    m2.emplace (20,32);
    // SEARCH FOR A PARTICULAR KEY VALUE IN HASH TABLE 
    if (m2.find (20) != m2.end()) {
        std::cout << "Yes 20 is found";
    }
    else 
     std::cout << "No, 20 isn't found in the map";
    return 0;
}