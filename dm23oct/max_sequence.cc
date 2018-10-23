#include <iostream>
using namespace std;

int main(){
    int p, a, m;
    while(cin >> p){
        m = p;
        while (cin >> a){
            if (a > m) m = a;
            p = a;
        }
        cout << m << endl;
    }
}
