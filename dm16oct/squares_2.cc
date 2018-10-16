#include <iostream>
using namespace std;


int main () {
    int n, i = 1, s = 0;
    while (cin >> n){
        if (i != 1) cout << endl;
        if (i == 1) ++i;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cout << s;
                if (s < 9) ++s;
                else s = 0;
            }
            cout << endl;
        }
        //s = 0;
    }
}
