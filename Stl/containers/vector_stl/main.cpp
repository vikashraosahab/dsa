// CREATE STL OF VECTORS
#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
#include <utility>
#include <algorithm>

// HEADING OF THE LINKED LIST
int main (void) {
    /*std::vector <int> v1 ({1,2,3,4,5,6});
    std::vector <int>::iterator it = v1.begin();
    for (it; it != v1.end(); it++)
      std::cout << *it << " " << std::endl;
    std::cout << std::endl;
    std::vector <int> v2;
    v2 = {1,2,3,4,5};
    for (auto val : v2)
      std::cout << val << " " << std::endl;
    v1.swap (v2);
    std::cout << std::endl;
    for (auto i = v1.begin(); i != v1.end(); i++)
      std::cout << *i << std::endl;
    std::cout << "Size of vector v1 : " << v1.size () << std::endl;
    if (v1.empty()) 
      std::cout << "Yes";
    else 
      std::cout << "No";
      std::cout << "Capacity of v1 : " << v1.capacity ();
    v1.resize (20);
    std::cout << "Capacity : " << v1.size () << " " << v1.capacity () << std::endl;
    std::cout << std::endl;

    // INSERT ELEMENT IN THE VECTOR
    v1.push_back (23);
    v1.push_back (55);
    v1.emplace_back (56);
    v1.emplace (v1.begin() + 2,2000);
    v1.insert (v1.begin() + 1,10,200);
    v1.shrink_to_fit ();
    for (auto val : v1) {
        std::cout << val << std:: endl;
    }
    std::cout << std::endl;
    // ACCESS ELEMENTS OF THE VECTOR 
    std::cout << "Front : " << v1.front () << std::endl;
    std::cout << "Back : " << v1.back () << std::endl;
    std::cout << "Value at 15 : " << v1.at (15) << std::endl;
    std::cout << "Value at 10 : " << v1 [10] << std::endl;

    // DELETION OF THE ELEMENTS IN VECTOR
    // REMOVE LAST ELEMENT OF THE VECTOR 
    v1.pop_back ();
    v1.pop_back ();
    for (auto val : v1) {
        std::cout << val << std::endl;
    }
    */
   std::vector <int> v  ({1,2,3,4,4,52,3,3,123});
  /* auto it = v.begin();
   for (it; it != v.end(); it++) {
    std::cout << *it << " ";
   }
   v.pop_back ();
   std::cout << std::endl;
   for (int val : v)
     std::cout << val << " ";
    std::cout << std::endl;
    // DELETE IN A RANGE 
    v.erase (v.begin() + 1, v.begin() + 6); // DELETE VALUE IN A RANGE
    for (int val : v)
      std::cout << val << " ";
    */
  /* int size = v.size ();
    for (int i = 0; i < size; i++) {
        int val = v.front();
        v.erase (v.begin());
        //v.erase (v.at(0));
        std::cout << val << std::endl;
       // v.erase (v.begin());
    }

    std::cout << v.size () << std::endl;
    for (int val : v) 
      std::cout << val << std::endl;
    */
  /** v.clear (); // DELETS ALL ELEMENTS OF THE VECTOR 
   std::cout << v.empty () << std::endl;
   for (int i = 0; i < (int)(1e5); i++) 
      v.push_back (rand ());
   for (std::vector <int>::iterator it = v.begin(); it != v.end(); it++)
     std::cout << *it << " ";
   std::cout << std::endl;
   */
   /*
    for (int i = 0; i < (int) (1e1); i++)
      v.push_back (rand());
    std::cout << std::endl;
    for (auto val : v)
      std::cout << val << std::endl;
      */
    sort (v.begin(),v.end()); // ASCENDING ORDER
    for (auto val : v)
      std::cout << val << " ";
    std::cout<< std::endl;
    reverse (v.begin(),v.end()); // DESCENDING ORDER
    for (auto val : v)
      std::cout << val << " ";
    std::cout<<std::endl;

    v.at (0) = 1200;
    std::cout << v.at (0) <<  " " << v.at (1) << std::endl;

    std::cout << "Vector in pair" << std::endl;
    std::vector <std::pair<int,std::string>> v2;
    for (int i = 0; i < 2; i++) {
        int age;
        std::string name;
        std::cin >> age;
        std::cin >> name;
        v2.push_back ({age,name});
    };
    std::cout << v2.at (0).second << std::endl;
    for (auto val : v2) {
        std::cout << val.first << " " << val.second << std::endl;
    }
   return 0;
}