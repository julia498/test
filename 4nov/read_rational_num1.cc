#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (a != b) {
		if (a == 0) return b;
		else if (b == 0) return a;
		if (a > b) a = a%b;
		else b = b%a;
	}
	return a;
}

void read_rational(int& num, int& den) {
	int mcd = gcd(num, den);
	num /= mcd;
	den /= mcd;
}

int main () {
	int num, den;
	cin >> num >> den;
	read_rational(num, den);
	cout << num << ' ' << den << endl;
}
