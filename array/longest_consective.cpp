// PROGRAM THAT COUNT LARGEST LENGTH OF THE CONSECTIVE SUB ARRAY
#include <iostream>
#include <map>
#include <vector>
#include <random>
#include <algorithm>
// NAMESAPACE STANDARD
using std::rand;
using std::vector;
using std::map;
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::max;

// USER DEFINE FUNCTIONS
// FIND OUT LARGEST CONSECTIVE SUBSEQUENCES BY USING NAVIE ALGORITHM 
// NAVIE OR BRUTE FORCE TECHNIQUE 
int longest_consective_subsequences (vector <int> & num) {
    int count = 1;
    int res = 0;
    for (int i = 1; i < num.size (); i++) {
       if (num [i - 1] == num [i] - 1 || num [i - 1] == num [i]) {
          count++;
       }
       else 
         count = 1;
       res = max (res, count);
    }

    return res;
}

// OPTIMAL TECHNIQUE 
// BY USING HASH TABLE METHOD
int hash_longest_consective_subsequences (vector <int>& num) {
     map <int,int> hash;
     for (auto val : num) {
        hash[val]++;
     }
     int count = 1;
     int res = 0;
     for (auto val : num) {
        // FIND OUT CONSECTIVE VALUE FROM THE 
        if (hash.find (val) != hash.end() && hash.find (val + 1) != hash.end()) {
              count++;
        }
        else 
          count = 1;
        res = max (res,count);
     }
     return res;
}
// MAIN FUNCTION 
int main (void) {
   vector <int> ary;
   for (int i = 0; i < (int) 1e1; i++) {
      ary.push_back (rand() % 100 + 2);
   }

   // SORTING THE ELEMENTS
   sort (ary.begin(), ary.end());

   // DISPLAY THESE ELEMENT 
   for (int val : ary) {
      cout << val << " ";
   }
   cout << endl;
   // FIND OUT LARGEST
   int result = longest_consective_subsequences (ary);
   cout << "Result : " << result << endl;
   result = hash_longest_consective_subsequences (ary);
   cout << "Result : \n" << result << endl;
  
   return 0;
}