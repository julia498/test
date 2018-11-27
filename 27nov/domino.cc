#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<string> > Matriu;

int main () {
    int n;
    cin >> n;
    for (int i=0; i < n; ++i) { //per cada partida
        vector<string> A;
        vector<string> B;
        string s;
        for (int j=0; j < 5; ++j) {
            cin >> s;
            A.push_back(s);
            cin >> s;
            B.push_back(s);
        }
        
    }
}
