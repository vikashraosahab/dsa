// MAX_ELEMENT IS STL METHOD THAT FIND OUT MAXIMUM ELEMENT FROM THE VECTOR OR ANY ARRAY
// IT RETURNS POINTER (ADDRESS) WHERE MAXIMUM VALUE OR MAX ELEMENT IS STORED 
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::max_element; // STL METHOD FOR THE MAXIMUM ELEMENT 
using std::vector;
using std::string;

 struct student {
    string name;
    int age;
 };
int main (void) {
    /*
    vector <int> v ({12,3,12,3,12,3,23,5,12,3,12}); // DECLARATIONS 
    auto max = *max_element (v.begin(),v.end()); // FIND OUT MAXIMUM ELEMENT FROM THE VECTOR 
    cout << max << endl; // MAXIMUM ELEMENT 
    auto res_val = *max_element (v.begin(), v.end(),[] (int a, int b){
       if (a % 5 == 0 || b % 5 == 0) return true;
       return false;
    });
    cout << res_val << endl;
    */
   vector <student> s=  {{"Vikash",20},{"Akash",24},{"Aman",33},{"Smith",55}};
   auto max_age = *max_element (s.begin(),s.end(),[] (student &s, student &b) {
    if (s.age < b.age) return true;
    return false;
   });
   cout << "Max age : " << max_age.age << endl;
    return 0;
}