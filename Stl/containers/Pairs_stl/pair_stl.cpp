#include <iostream>
#include <utility>

// MAIN FUNCTION OF THE PROGRAM 
int main (int argc, char * argv[]) {
     std::pair <int,bool> p1 = std::make_pair (3,1.2);
     std::cout << "p1 : " << p1.first << " " << p1.second << std::endl;

     // SECOND WAY TO CREATE A PAIR CONTAINER
     std::pair <int,bool> p2 ({2,3.2});
     std::cout << "p2 : " << p2.first <<  " " << p2.second << std::endl;

     // SWAP TWO PAIRT 
     std::cout << "Swap p1's elemnets and p2's elements together : " << std::endl;
     p1.swap (p2);
     std::cout << "p1 : " << p1.first << " " << p1.second << std::endl;
     std::cout << "p2 : " << p2.first << " " << p2.second << std::endl;

     // UPACKING PAIR OR TUPLE 
     int x;
     std::tie (x,std::ignore) = p1;
     std::cout << "x has p1 first : " << x  << std::endl;
     
     // THIRD way
     std::pair <int,std::string> p;
     // std::make_pair <3,"vikash">
     p = {11,"Vikash"};
     std::cout << p.first << " " << p.second << std::endl;


     if (p1.first != p2.first) {
        std::cout << "both are not same : " << p1.first << "and" << p1.second << std::endl;
     }
     else 
       std::cout << "Nothing happend !" << std::endl;
    return 0;
}