// STL STANDARD TEMPLATE LIBRARIES UNORDERED MULTISET 
#include <unordered_set>
#include <iostream>
#include <algorithm>

// MAIN FUNCTION 
int main (int argc, char * argv[]) {
    std::unordered_multiset <int> ums;
    std::unordered_multiset <int> ums2 ({1,2,3,53,2,3,4,2,23,5,23});
   
    // UPDATION 
    ums2.insert (20);
    ums2.emplace (23);
    ums2.insert (44);
    ums2.clear (); // CLEAR WHOLE UNORDERED MULTI SET
   // ums2.erase (ums2.begin(),)
   ums = ums2;
   ums = {1,3,5,5,3,3,2,4,1,23,24,32};
  // ums.insert (20);
   ums2 = ums;
   ums.swap (ums2);
   auto first = ums.begin ();
   std::advance (first,2);
   auto second = ums.begin();
   std::advance (second,4);
   ums.erase (first,second); // CLEAR ELEMENTS IN THE RANGES 
   // FIND A PARTICULAR VALUE IN MULTI_SET 
   if (ums.find (23) != ums.end()) 
     std::cout << "Found value";
    // READING DATA BY USING ITERATOR 
    std::unordered_multiset <int>::iterator it = ums.begin();
    for (it; it != ums.end(); it++) {
        std::cout << *it << " ";
    }
  //  std::sort (ums2.begin(),ums2.end());
    std::cout<<std::endl;
    return 0;
}