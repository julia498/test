#include <iostream>
#include <cstdlib>
#include <cfloat>

using namespace std;

int main() {
    float eps = 1.0;
    while (1.0f + eps > 1.0f) {
        eps /= 2.0;
    }
    cout << "eps = " << 2*eps << endl;
    cout << "FLT_EPSILON = " << FLT_EPSILON << endl;
    
    double epsi = 1.0;
    while (1.0d + eps > 1.0d) {
        epsi /= 2.0;
    }
    cout << "epsi double = " << 2*epsi << endl;
    cout << "DBL_EPSILON = " << DBL_EPSILON << endl;
}
