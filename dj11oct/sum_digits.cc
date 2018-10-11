#include <iostream>
using namespace std;


int main () {
    int n;
    while (cin >> n) {
        int m = n;
        int t = 0;
        while (n > 0) {
            t += n%10;
            n = n/10;
        }
        cout << "The sum of the digits of " << m << " is " << t << "." << endl;
    }
}
