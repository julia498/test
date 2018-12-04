#include <iostream>
using namespace std;
#include <vector>

int position(double x, const vector<double>& v, int left, int right) {
    int mid = (left + right)/2;
    if (v[mid] == x) return mid;
    if (left > right) return -1;
    if (v[mid] < x) {
        left = mid;
        return position(x, v, left, right);
    }
    if (v[mid] > x) {
        right = mid;
        return position(x, v, left, right);
    }
    return -1;
}
