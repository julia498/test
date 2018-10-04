#include <iostream>
using namespace std;

int main(){
    int n, m, i = 1;
    cin >> n;
    m = n;    
    while(n >= 10){
        i = i+1;
        n = n/10;
    }
    cout << "The number of digits of " << m << " is " << i << "." << endl;
}
