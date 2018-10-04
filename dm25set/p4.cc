#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int i, n, d = 0;
    while(cin >> n){
        i = i + n;
        d = d + 1;
    }
    cout << i/d << endl;
}
//no acabat
