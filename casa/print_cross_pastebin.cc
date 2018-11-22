#include <iostream>
using namespace std;
 
void cross(int n, char c) {
    for (int i = 0; i < n; ++i) {
        if (i == (n/2)) {
            for (int j = 1; j <= n; ++j) {
                cout << c;
                if (j == n+(n-1)) {
                    cout << endl;
                }
            }  
        }
        for (int k = 0; k < n/2; ++k) {
            cout << " ";
        }
        cout << c << endl;
    }
}
 
 
int main() {
    int n;
    char c;
    cin >> n >> c;
    cross(n,c);
}
