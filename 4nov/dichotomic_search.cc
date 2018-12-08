#include <iostream>
using namespace std;
#include <vector>

int position(double x, const vector<double>& v, int left, int right) {
    if (left > right) return -1;
    //if (v[left] == x) return left;
    if (v[right] == x) return right;
    int mid = (left + right)/2;
    if (v[mid] == x) return mid;
    if (v[mid] < x) {
        left = mid;
        return position(x, v, left, right);
    }
    else {
        right = mid;
        return position(x, v, left, right);
    }
    return -1;
}

int main ()
{
	int n;
	cin >> n;
	vector<double> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	double x;
	cin >> x;
	cout << position(x, v, 0, n-1);
}
