#include <iostream>
#include <vector>
#include "list.h"
#include <unordered_set>

using namespace standard;

// MAIN FUNCTION OF THE PROGRAM
int main (void) {
    LinkedList <int> myobj;
    myobj.push_back (20);
    myobj.push_back (20);
    myobj.push_back (25);
    myobj.push_front (50);
    myobj.push_front (55);
    myobj.push_front (52);
    //myobj.reverse ();
    myobj.push_back (206);
    myobj.push_back (500);
    myobj.insert (200,3);
    myobj.insert (230,4);
    myobj.pop_back ();
    myobj.pop_front ();
    // myobj.reverse ();
    myobj.sorted ();
    myobj.reverse ();
    myobj.remove (20);
    std::cout << "Display elements : " << std::endl;
    std::cout << "Frist : " << myobj.front () << std::endl;
    std::cout << "Last : " << myobj.back () << std::endl;
    myobj.display ();

    std::cout << "Unique elements : " << std::endl;
    //myobj.sorted ();
    std::unordered_set <int> unique = myobj.unique ();
    for (int value : unique) {
        std::cout << value << std::endl;
    }
    std::cout << "Length of the linked list : " << myobj.get_size () << std::endl;
    return 0;
}