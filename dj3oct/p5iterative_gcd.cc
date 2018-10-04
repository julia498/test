#include <iostream>
using namespace std;


//NO FUNCIONA!!!


int gcd(int a, int b){
    if (a == 0) return b;
    else if (b == 0) return a;
    else if (a != b){
        while (a < b){
            b = b%a;
        }
        while (b < a){
            a = a%b;
        }
        return a;
    }
    else return a;
    
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    
}
