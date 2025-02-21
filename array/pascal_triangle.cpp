// GENERATE PASCAL TRIANGLE BY USING 
/*
 ************* PASCAL TRIANGLE *************
 ..........................................
           1
          1  1
         1 2  1
        1 3  3  1
       1 4  6  4  1
.................................................
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <random>
#include <vector>

// ALLOW NAMESPACES 
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::rand;

// FUNCTION PROTOTYPES 
vector<vector<int>> ans (int);
int NCR (int,int);
void bottom (int val) {
   int res = 1;
   cout << res << " ";
   for (auto i = 1; i < val; i++) {
       int res = res * (val - i);
       res = res / i;
       cout << res << " ";
   }
   cout << endl;
}
// FUNCTION PROTOTYPE
int main (void) {
       vector<vector<int>> pascal;
       pascal = ans (5);
       for (int i = 0; i < pascal.size (); i++) {
              for (int j = 0; j < pascal[i].size (); j++) {
                     cout << pascal[i][j] << " ";
              }
              cout<<endl;
       }
       cout<<endl;
       cout << "Bottom of the pascal triangle : " << endl;
       bottom (3);
       bottom (10);
       return 0;
}

vector<vector<int>> ans (int numRows) {
       vector<vector<int>> res;
       int nums = 1;
       res.push_back ({nums});
       for (auto i = 1; i < numRows; i++) {
         vector <int> temp;
         temp.push_back (1);
         for (auto j = 0; j < i; j++) {
              nums = nums * (i - j);
              nums = nums / (j + 1);
              temp.push_back (nums);
         }
         res.push_back (temp);
       }
       return res;
}