#include <iostream>
using namespace std;
#include <vector>

string compta_digits(int x) {
    string s(10, 0);
    while (x > 0) {
        ++s[x%10];
        x /= 10;
    }
    return s;
}


int main() {
    int n;
    while (cin >> n) {
        int a;
        vector<int> v;
        if (n != 0) {
            cin >> a;
            v.push_back(a);
        }
        for (int i=1; i < n; ++i) {
            cin >> a;
            bool esta = false;
            for (int j=0; j < (int)v.size(); ++j) {
                if (compta_digits(a) == compta_digits(v[j])) esta = true;
            }
            if (!esta) v.push_back(a);
        }
        cout << v.size() << endl;
    }
}
