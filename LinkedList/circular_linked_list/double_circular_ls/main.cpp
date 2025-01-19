#include <iostream>
#include <vector>
#include "list.h"
#include <unordered_set>

using namespace standard;
int main (void) {
    LinkedList <int> myobj;
    myobj.push_front (20);
    myobj.push_front (33);
    myobj.push_front (32);
    myobj.push_back (320);
    myobj.push_back (320);
    myobj.push_back (302);
    myobj.insert (2301,3);
    myobj.pop_back ();
    myobj.pop_back ();
    myobj.push_front (10);
    myobj.push_front (10);
   // myobj.remove (10);
    std::unordered_set <int> sett;
    sett = myobj.unique ();
    //std::cout << sett.size () << std::endl;
    std::cout << "\nDisplay : " << std::endl;
    for (auto it = sett.begin(); it != sett.end();it++) {
        std::cout << *it << std::endl;
    }
    
    // FOR CHARACKTERS 
    LinkedList <char> myobj2;
    myobj2.push_back ('a');
    myobj2.push_back ('b');
    myobj2.push_front ('A');
    myobj2.push_front ('B');
    //myobj2.pop_front ();
    //myobj2.pop_front ();
   // myobj2.pop_front ();
    //myobj2.pop_front ();
    std::cout << "Front : " << myobj2.front () << std::endl;
    std::cout << "Back : " << myobj2.back () << std::endl;
    std::cout << "Size : " << myobj2.get_size () << std::endl;
    myobj2.display ();
    return 0;
}