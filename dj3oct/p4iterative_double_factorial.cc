#include <iostream>
using namespace std;

int double_factorial(int n){
    int i=1, t=1;
    if (n == 0) return 1;
    if (n%2 == 0) ++i;
    while (i <= n){
        t = i*t;
        i = i + 2;
    }
    return t;
}

int main(){
    int x;
    cin >> x;
    cout << double_factorial(x) << endl;
    
    
}
