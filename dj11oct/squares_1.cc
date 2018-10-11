#include <iostream>
using namespace std;


int main () {
    int n, i = 1;
    while (cin >> n){
        if (i != 1) cout << endl;
        if (i == 1) ++i;
        for (int i = 1; i <= n; ++i){
            for (int j = 1; j <= n; ++j){
                cout << n;
            }
            cout << endl;
        }
    }
}
