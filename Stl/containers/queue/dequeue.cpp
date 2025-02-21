#include <iostream>
#include <deque>
#include <algorithm>


void display (std::deque <int> dequeue) {
   auto it = dequeue.begin();
   while (it != dequeue.end()) {
    std::cout << *it << std::endl;
    it++;
   }
}

int main (void) {
    std::deque<int> d;
    d.push_front (20);
    d.push_back (52);
    d.push_front (520);
    d.push_back (520);
    d.push_back (231);
    d.push_back (521);
    auto it = d.begin();
    d.insert (it + 3,2);
    std::cout << "At index 2 : " << d.at (2) << std::endl;
    std::cout << "At index 3 : " << d[3] << std::endl;
    //std::deque<int>::iterator i = d.begin ();
    std::cout << "Size : " << d.size () << std::endl;
    display (d);
    std::cout << d.size () << std::endl;
    std::deque <int> d2;
    d2.swap (d);
    // d2.remove (d2.at (2));
    d2.erase (it, it + 2);
    sort (d2.begin(), d2.end());
    display (d2);
    return 0;
} 