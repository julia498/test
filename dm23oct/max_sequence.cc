#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int a, m;
        cin >> a;
        m = a;
        for (int i=1; i<n; ++i){
            cin >> a;
            if (a > m) m = a;
        }
        cout << m << endl;
    }
}
