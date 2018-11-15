#include <iostream>
using namespace std;
#include <vector>

bool exists(int x, const vector<int>& v) {
    int mida = v.size();
    for (int i=0; i < mida; ++i) {
        if (v[i] == x) return true;
    }
    return false;
}
