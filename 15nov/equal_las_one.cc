#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n, a;
    cin >> n;
    vector<int> v;
    for (int i=0; i<n; ++i) {
        cin >> a;
        v.push_back(a);
    }
    int mida = v.size();
    int t=0;
    for (int i=0; i < mida-1; ++i) {
        if (v[i] == v[mida-1]) ++t;
    }
    
    cout << t << endl;
}
