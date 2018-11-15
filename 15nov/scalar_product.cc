#include <iostream>
using namespace std;
#include <vector>

double scalar_product(const vector<double>& u, const vector<double>& v) {
    double mida = u.size(), t=0;
    for (int i=0; i < mida-1; ++i) {
        t += v[i]*u[i];
    }
    return t;
}

int main() {
    vector<double> u;
    vector<double> v;
}
