#include <iostream>
using namespace std;
#include <vector>

int position_maximum(const vector<double>& v, int m) {
    int pos=0;
    double max = v[0];
    for (int i=1; i <= m; ++i) {
        if (v[i] > max) {
            max = v[i];
            pos = i;
        }
    }
    return pos;
}
