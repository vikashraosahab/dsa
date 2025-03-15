#include <iostream>
#include <unordered_map>
#include <math.h>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;
using std::unordered_map;

// UNORDERED MAP DATA STRUCTURE DECLARATIONS
unordered_map <int,int> mapping;
// USER DEFINITION FUNCITON 
int fabonnacci (int val) {
    if (val == 0) return 0;
    if (val == 1) return 1;
    // WHEN VALUE NOT PRESENT IN MAP MEANS FOR THAT VALUE CALCULATION NOT OCCURS
    if (mapping.find(val) != mapping.end()) {
        return mapping[val];
    }

    int res = fabonnacci (val - 1) + fabonnacci (val- 2);
    mapping[val] = res;

    return res;
}

// MAIN FUNCITON OF THE PROGRAM 
int main (int argc, char * argv[]) {
    int val = 8;
    fabonnacci (val);
    for (auto val : mapping) {
        cout << val.first << " " << val.second << endl;
    }
    cout << 1 << " " << 1 << endl;
    cout << 0 << " " << 0 << endl;
//    cout << fabonnacci (val - 1) << endl;
    return 0;
}