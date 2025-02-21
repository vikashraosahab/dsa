#include <bits/stdc++.h> // INCLUDE ALL LIBRARY FILES 
#include <unordered_set>
#include <vector>
// MAIN FUNCTION OF THE PROGRAM
int main (int argc, char * argv[]) {
    std::vector <int> ary = {1,3,3,2,1,23,2,1,3,21,1};
    std::set <int> sets;
    for (int value : ary) {
        sets.insert (value);
    }
    // UNIQUE ELEMENTS 
    for (auto val : sets)
      std::cout << val << std::endl;

    return 0;
}