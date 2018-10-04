#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    double a = 0;
    int i = 1;
    while (i <= n ){
        a = a + 1.0/i;
        i = i + 1;
    }
    cout << a << endl;
}
