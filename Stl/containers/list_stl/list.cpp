// CREATE A LIST IS A NON-CONTIGOUS COLLECTION OF ELEMENTS THAT CONNECT TO-GETHER THROUGH LINKED INSTEAD POSTSCRIPTS
#include <iostream>
#include <list>
#include <algorithm>


bool compare (int a , int b){
    return (a == b);
}
// MAIN FUNCTION OF THE 
int main (void) {
    /*
    // CREATION OF THE LIST STL TEMPLATE LIBRARIES 
    std::list <int> list1 = {1,2,3,4,5,23,2,1};
    std::list <int> list2{12,3,5,23,5};
    // INSERTION METHODS 
    list2.push_front (20); // PUSH NEW ELEMENT AT THE FRONT OF THE LIST
    list2.push_back (20); // PUSH ELEMENT AT THE END OF THE LIST
    list2.push_front (200); // PUSH ELEMENT AT THE END OF THE LIST
    list2.emplace_front (20);
    list2.emplace_front (120);
    list2.emplace_back (100);
    list2.emplace_back (23);
    list2.emplace (list2.begin(),230);
    auto index = list2.begin();
    advance (index,3);
    list2.insert (index, 201);
    //advanced(it,2);
    for (auto val : list2) 
      std::cout << val << " " << std::endl;
    
    // DELETIONS OF THE LINKED LIST NODE
    list2.pop_front(); // FROM FRONT OF THE LINKED LSIT
    list2.pop_back (); // FROM LAST OF THE LINEKD LIST
    list2.remove (20); // REMOVE ALL THE ELEMENTS THAT HAVE VALUE OF 20
    std::cout << std::endl;
    std::cout << std::endl;
    for (auto val : list2)
       std::cout << val << std::endl;
    
     list1.clear (); // DELETE WHOLE LINKED LIST
     std::cout << list1.empty() << std::endl;
    list1.swap (list2); // LIST2 ALL ELEMENTS ARE SWAP TO LIST1 BETWEEN lIST2
    std::cout << list2.empty() << std::endl;
    list2 = list1; // COPY ALL ELEMENTS OF THE LIST1 TO LIST2
    index = list1.begin();
    advance (index,2);
    // MERGE TWO LIST
    list1.merge (list2); 
    // JOINT TWO LINST 
    list2.push_back (231);
    list2.push_back (321);
    list2.push_back (52);
    list1.push_back (120);
    list1.splice (index,list2);
   // sort (list1.begin(), list1.end(),compare);
    list1.unique (compare);
    // READ OF THE LIST ELEMENTS
    std::list<int>::iterator it = list2.begin();
    for (it; it != list2.end(); ++it)
      std::cout << *it << " ";

    */
    std::list <int> l1{1,2,35,120,521,523,1,3,523};
    for (auto val : l1)
      std::cout << val << " ";
    std::cout << std::endl;

    // LAMBDA FUNCTION IN C++ 
    l1.unique ([] (int a, int b){
        return (a == b);
    });
    l1.sort (); // SORTING LINKED LIST
    for (auto it = l1.begin(); it != l1.end(); it++)
       std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}