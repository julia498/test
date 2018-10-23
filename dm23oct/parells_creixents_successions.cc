#include <iostream>
using namespace std;

int main(){
    int n, a, p;
    cin >> n;
    for (int i=0; i<n; ++i){
        int t=0;
        cin >> p;
        if (p != 0){ 
            while (cin >> a and a != 0){
                if (a > p) ++t;
                p = a;
                }
        }
        cout << t << endl;
    }
}
