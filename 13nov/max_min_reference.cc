#include <iostream>
using namespace std;

void min_max(int a, int b, int& mn, int& mx) {
    if (a < b) {
        mn=a;
        mx=b;
    }
    else {
        mn = b;
        mx = a;
    }
}


int main () {
    int n, m, mn, mx;
    cin >> n >> m;
    cout << n << m << endl;
    min_max(n,m, mn, mx);
    cout << n << m << endl;
}
