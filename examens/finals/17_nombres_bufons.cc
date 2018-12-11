#include <iostream>
using namespace std;

int prod_digits(int n) { //calcula el producle des digits del num
    int r=1;
    while(n > 0) {
        r *= n%10;
        n /= 10;
    }
    return r;
}

bool digits_seguits(int n) {
    int anterior=n%10;
    n /= 10;
    while (n > 0) {
        if (n%10 == anterior) return true;
        anterior = n%10;
        n /= 10;
    }
    return false;
}

bool es_bufo(int n) { //ha de ser recursiva
    if (digits_seguits(prod_digits(n))) return false;
    if (n >= 0 and n < 10) return true;
    return es_bufo(prod_digits(n));
}

int main() {
    int n;
    cin >> n;
    cout << es_bufo(n) << endl;
}
