#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
    int k=a;
    a=b;
    b=k;
}


int main () {
    int n, m;
    cin >> n >> m;
    cout << n << m << endl;
    swap2(n,m);
    cout << n << m << endl;
}
