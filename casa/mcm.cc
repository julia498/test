#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	if (a > b) return (a/gcd(a, b)) * b;
	else return (b/gcd(a, b)) * a;
}

int main() {
	int n;
	while (cin >> n and n!= 0) {
		if (n == 1) {
			int a;
			cin >> a;
			cout << a << endl;
		}
		else {
			int l = 1;
			for (int i=0; i < n; ++i) {
				int a;
				cin >> a;
				l = lcm (l, a);
			}
			cout << l << endl;
		}
	}
}
