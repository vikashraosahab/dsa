/*
 {
    
   {{2,3}, {3,3},{3,3}}
   {{2,3}, {3,4}, {5,2}},
   {{6,2},{4,3},{6,2}}
 }
 */

#include <bits/stdc++.h>
bool comparePari (const std::pair <int,int>& a, const std::pair <int,int>& b) {
    if (a.first != b.first)
      return a.first > b.first;
    return a.second > b.second;
}
int main () {
    std::vector <std::vector <std::pair <int,int>>> p;
    p.resize (3);
    for (int i = 0; i < p.size (); i++) {
        p[i].resize (3);
        for (int j = 0; j < p[i].size (); j++) {
            int x,y;
            std::cout << "Enter value of x : ";
            std::cin >> x;
            std::cout << "Enter vlaue of y : ";
            std::cin >> y;
            p.at (i).at (j) = std::make_pair (x,y);
        }
    }
    //for (auto& i : p)
     //sort (i.begin(), i.end());
     for (int i = 0; i < p.size (); i++) {
        std::cout << "{";
        for (int j = 0; j < p[i].size (); j++) {
            std::cout <<"{" << p[i][j].first <<","<< p[i][j].second << "}";
        }
        std::cout << "}";
        std::cout<<std::endl;
    }

    // sorting vector 
    for (int i = 0; i < p.size (); i++) {
        sort (p[i].begin(), p[i].end(),[] (const std::pair <int,int> &a, const std::pair <int,int> &b ){
              if (a.first != b.first)
                return a.first > b.first;
              return a.second > b.second;
        });
    }
    
    for (int i = 0; i < p.size (); i++) {
        std::cout << "{";
        for (int j = 0; j < p[i].size (); j++) {
            std::cout <<"{" << p[i][j].first <<","<< p[i][j].second << "}";
        }
        std::cout << "}";
        std::cout<<std::endl;
    }
    for (int i = 0; i < p.size (); i++) {
        sort (p[i].begin(),p[i].end(),comparePari);
    }
    return 0;
}