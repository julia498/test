#include <iostream>
using namespace std;



int main () {
    int n;
    while (cin >> n) {
        int a, s=0;
        for (int i=1; i<n; ++i){
            cin >> a;
            s += a;
        }
        cout << n*(n+1)/2 - s << endl;
    }
}
