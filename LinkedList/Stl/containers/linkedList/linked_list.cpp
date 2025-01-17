// CREATE LINKED LIST BY USING STL (STANDARD TEMPLATE LIBRARIES)
// PERFORM BASIC OPERATIONS LIKE PUSHING,POPPING,INSERTION MIDDLE AND CLEAR AND SIZE
#include <iostream>
#include <list>

// MAIN FUNCTION OF THE PROGRAM
int main (int argc, char * argv[]) {
      std::list <int> myList;
      myList.push_back (20);
      myList.push_back (12);
      myList.push_front (32);
      myList.push_front (33);
      myList.pop_back ();
      myList.pop_front ();
      myList.insert (myList.begin(),1,230);
      myList.clear ();
      std::cout << "Size of the list : " << myList.size () << std::endl;
      //myList.clear ();
      // USE FOR EACH LOOP TO PRINT DATA OF THE LIST
      for (int value : myList) {
        std::cout << "Value : " << value << std::endl;
      }
      return 0;
}