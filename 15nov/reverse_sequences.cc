#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    while (cin >> n) {
        int a;
        vector<int> v;
        for (int i=0; i < n; ++i) {
            cin >> a;
            v.push_back(a);
        }
        int mida = v.size();
        for (int i = mida-1; i > 0; --i) {
            cout << v[i] << ' ';
        }
        if (n!=0) cout << v[0];
        cout << endl;
    }
}
