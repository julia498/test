#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i=2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

int suma_digits(int n) {
    int s=0;
    while (n > 0) {
        s += n%10;
        n /= 10;
    }
    return s;
}

bool is_perf_prime(int n) {
    if (not is_prime(n)) return false;
    while (n > 9) {
        n = suma_digits(n);
        if (!is_prime(n)) return false;
    }
    return is_prime(n);
}

int main () {
    int n;
    while (cin >> n and n != 0) {
       if (is_perf_prime(n)) cout << "yes" << endl;
       else cout << "no" << endl; 
    }
}
