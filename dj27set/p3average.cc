#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int i = 0;
    double n, t=0;
    while(cin >> n){
        t = t + n;
        i = i + 1;
    }
    
    cout << t/i << endl;
    
    
    
}
