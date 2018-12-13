#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1/a2 == b1/b2) cout << "No hi ha interseccio." << endl;
    else {
        double x, y;
        x = (c1*b2 - b1*c2)/(a2*b1 - a1*b2);
        y = ((-a1)*x - c1)/b1;
        cout << x << y << endl;
    }
}
