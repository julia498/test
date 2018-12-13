#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b, c, x, y;
    cin >> a >> b >> c;
    x = (-b)/(2*a);
    cout << x << endl;
    y = a*x*x + b*x + c;
    cout << y << endl;
    if (a < 0) cout << "maxim" << endl;
    else cout << "minim" << endl;
}
