#include <iostream>
#include <set>

int main (void) {
    std::set <int> s{1,2,2,4,5,6,23,2,31,23,12}; // ordered of the pair elements no duplicates elements in the set and all elements are stored in sorted ordering ascending
    std::set<int>::iterator start = s.begin();
    while (start != s.end()) {
        std::cout << *start << " ";
        start++;
    }
    std::cout<<std::endl;
    start = s.cbegin();
    // INSERTION OF THE SET 
    s.insert (20);
    s.insert (42);
    s.insert (10);
    s.emplace (210);
    s.emplace (11);
    s.emplace (52);
    
    // READING OF THE DATA 
    while (start != s.cend ()) {
        std::cout << *start << " ";
        start++;
    }
   // std::cout << "upper_bound" << s.upper_bound (s.begin(),s.end()) << std::endl;
    std::cout<<std::endl;
    // REMOVE ELEMENTS FROM THE SET
    start = s.begin();
    advance (start,7);
    auto close = s.begin ();
    advance (close, 12);
    s.erase (start,close);
    start = s.begin ();
    while (start != s.end()) {
        std::cout << *(start) << " ";
        start++;
    }
    std::set <int> s2;
    std::cout<<std::endl;
    s2.swap (s);
    s2.erase (s2.begin());
    for (auto val : s2)
      std::cout << val << " ";
    std::cout << std::endl;
    return 0;
}