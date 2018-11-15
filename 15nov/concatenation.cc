#include <iostream>
using namespace std;
#include <vector>

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    int mida1 = v1.size(), mida2 = v2.size();
    vector<int> v;
    for (int i=0; i < mida1; ++i) {
        v.push_back(v1[i]);
    }
    for (int i=0; i < mida2; ++i) {
        v.push_back(v2[i]);
    }
    return v;
}
