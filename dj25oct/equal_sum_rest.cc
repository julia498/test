#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n) {
        int s=0, a, m=0;
        for (int i=0; i<n; ++i) {
            cin >> a;
            s += a;
            if (a > m) m = a;
        }
        if ((s-m) == m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
