#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (a==0) return b;
    else if (b==0)return a;
    while (a != b){
        if (a > b) a = a%b;
        else b = b%a;
        
    }
    return a;
    
}



int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    
}
