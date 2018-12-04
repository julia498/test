#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<string> > Matriu;

char domino(const Matriu& m) {
    for(int i=0; 
}


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
        Matriu m;
        m.push_back(A);
        m.push_back(B);
        
        cout << domino(m) << endl;
    }
}
