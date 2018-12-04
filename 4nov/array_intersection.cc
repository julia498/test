#include <iostream>
using namespace std;
#include <vector>

vector<double> intersection(const vector<double>& v1, const vector<double>& v2) {
    vector<double> v;
    int i=0, j=0;
    while (i < (int)v1.size() and j < (int)v2.size()) {
        if (v1[i] < v2[j]) ++i;
        else if (v1[i] > v2[j]) ++j;
        else {
            if (i == 0) v.push_back(v1[i];
            else if (v1[i] != v[(int)v.size()-1]) v.push_back(v1[i]);
            ++i;
            ++j;
        }
    }
    return v;
}
