#include <iostream>
using namespace std;
#include <vector>

vector<double> merge(const vector<double>& v1, const vector<double>& v2) {
    vector<double> v;
    int i=0, j=0;
    while (i < (int)v1.size() and j < (int)v2.size()) {
        if (v1[i] <= v2[j]) {
            v.push_back(v1[i]);
            ++i;
        }
        else {
            v.push_back(v2[j]);
            ++j;
        }
    }
    while (i < (int)v1.size()) {
        v.push_back(v1[i]);
        ++i;
    }
    while (j < (int)v2.size()) {
        v.push_back(v2[j]);
        ++j;
    }
    return v;
}
