#include <iostream>
using namespace std;

int factorial(int n){
    int i=1, t=1;
    if (n == 0) return 1;
    while (i <= n){
        t = i*t;
        ++i;
        
    }
    return t;
}

int main(){
    int x;
    cin >> x;
    cout << factorial(x) << endl;
    
    
}
