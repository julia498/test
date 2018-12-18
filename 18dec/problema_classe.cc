#include <iostream>
using namespace std;
#include <vector>

int main () {
    int n;
    cin >> n;
    string s;
    struct tot {
        vector<int> vegades;
        vector<string> paraula;
    };
    tot T;
    for (int i=0; i < n; ++i) {
        cin >> s;
        for (int j=0; j < (int)T.paraula.size(); ++j) {
            if (T.paraula[j] != s) {
                T.paraula.push_back(s);
                T.vegades.push_back(1);
            }
            else ++T.vegades[j];
        }
    }
    
    
}
