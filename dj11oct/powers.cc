#include <iostream>
using namespace std;


int main () {
    int a, b, t = 1;
    while (cin >> a >> b){
        if (b == 0) t = 1;
        else for (int i = 0; i < b; ++i) t *= a;
        cout << t << endl;
        t = 1;
    }
}
