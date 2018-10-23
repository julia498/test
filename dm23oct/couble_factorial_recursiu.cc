#include <iostream>
using namespace std;

int double_factorial(int n){
    int t;
    if (n == 1 or n == 0) return 1;
    else {t = n*double_factorial(n-1);
        return t*double_factorial(t-1);
    }
}


int main(){
    int n;
    cin >> n;
    cout << double_factorial(n);
}
