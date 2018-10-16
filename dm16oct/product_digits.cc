#include <iostream>
using namespace std;


int main () {
    int n, l = 1;
    while (cin >> n){
        if (l != 1) cout << "----------" << endl;
        if (l == 1) ++l;
        int i = n, t = 1;
        while (n > 0){
            cout << "The product of the digits of " << i << " is ";
            while (i > 0){
                t *= i%10;
                i /= 10;
            }
            cout << t << "." << endl;
            n /= 10;
            i = t;
            t = 1;
        }
    }
    
    
}
