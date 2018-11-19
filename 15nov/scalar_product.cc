#include <iostream>
using namespace std;
#include <vector>

double scalar_product(const vector<double>& u, const vector<double>& v) {
    int mida = u.size();
    double t=0;
    for (int i=0; i < mida; ++i) {
        t += v[i]*u[i];
    }
    return t;
}
