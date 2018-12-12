#include <iostream>
using namespace std;
#include <vector>

string compta_digits(int x) {
    string s(10, '0');
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
        vector<string> vs;
        for (int i=0; i < n; ++i) {
            cin >> a;
            bool esta = false;
            for (int j=0; j < (int)v.size(); ++j) {
                if (compta_digits(a) == vs[j]) esta = true;
            }
            if (!esta) {
				v.push_back(a);
				vs.push_back(compta_digits(a));
			}
        }
        cout << v.size() << endl;
        
    }
}
