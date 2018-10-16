#include <iostream>
using namespace std;


int main () {
    int n, i = 1, s = 0;
    cin >> n;
    
    for (int r = 0; r < n; ++r){
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cout << s;
                if (s < 9) ++s;
                else s = 0;
            }
        cout << endl;
        }
        s = 0;
        if (i < n) cout << endl;
        if (i < n) ++i;
    }
}
