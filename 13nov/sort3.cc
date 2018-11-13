#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
    int k=a;
    a=b;
    b=k;
}

void sort3(int& a, int& b, int& c) {
    if (b<a) swap2(a, b);
    else if (c<a) swap2(a, c);
    if (c<b) swap2(c, b);
    if (b<a) swap2(a, b);
}


int main () {
    int a, b, c;
    cin >> a >> b >> c;
    sort3(a, b, c);
    cout << a << b << c << endl;
}
