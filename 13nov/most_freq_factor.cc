#include <iostream>
using namespace std;


bool is_prime(int a) {
    if (a < 2) return false;
    for (int i=2; i*i <= a; ++i) {
        if (a%i == 0) return false;
    }
    return true;
}

void factor(int n, int& f, int& q) {
    q = 1;
    
    if (is_prime(n)) f = n;
    
    else { 
        for (int i=2; i*i <= n; ++i) {
            int b=0;
            while (n%i == 0) {
                n /= i;
                ++b;
            }
            if (b > q) { 
                q = b;
                f = i;
            }
        }
    }
}


int main () {
    int n, f, q;
    cin >> n;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
}
