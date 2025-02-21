#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

// MAIN FUNCTION OF THE
using namespace std;

int main (int argc, char * argv[]) {
  /*
    std::vector <std::vector <int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    for (auto i = 0; i < matrix.size (); i++) {
        for (int j = 0; j < matrix [i].size (); j++) {
           std::cout << matrix.at (i).at (j) << " ";
        }
        std::cout << std::endl;
    }
    vector <vector <pair <int,int>>> mat  = {{{1,2},{2,3},{3,4}},{{4,5},{5,6},{7,8}}};
    for (int i = 0; i < mat.size (); i++) {
        for (int j = 0; j < mat[i].size (); j++) {
            cout << "{ " <<mat[i][j].first << " "<< mat.at(0).at (1).second << " }" << " ";
        }
        std::cout << std::endl;
    }

    vector <vector <pair <int,int>>> m (3,3);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int x,y;
            cout << "Enter value : ";
            cin >> x;
            cin >> y;
            m[i].push_back ({1,3});
        }
    }
    std::cout << m.at (1).at (1).first << std::endl;

    for (int i = 0; i < m.size (); i++) {
        for (int j = 0; j < m[i].size (); j++) {
            std::cout << m[i].at (j).first << m[i].at (j).second << std::endl;
        }
    }
  */
   
   vector <vector <pair <int,int>>> pp (3);
    for (int i = 0; i < pp.size (); i++) {
        pp[i].resize (2);
      for (int j = 0; j < 2; j++) {
          auto x = 20, y = 230;
          pp[i][j] = make_pair (x,y);
      }
      cout  << endl;
    }
    pp.erase (pp.begin());
    //pp[0].erase (pp.begin());
    for (int i = 0; i < pp.size (); i++) {
        for (int j = 0; j < pp[i].size (); j++) {
            cout << pp [i][j].first << " " << pp.at (i).at (j).second << " ";
            pp[i].erase (pp[i].begin(),pp[i].end());
        }
        cout << endl;
    } 
    std::cout << pp.size () << std::endl;
    // FIRST ROW DELETE
   // pp.erase (pp.begin());

    return 0;
}   