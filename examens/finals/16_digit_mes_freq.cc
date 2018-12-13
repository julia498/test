#include <iostream>
using namespace std;

void reverse_num(int& n) { //gira num
	int a=n;
	n=0;
	while (a > 0) {
		n = n*10 + a%10;
		a /= 10;
	}
}

int base(int b, int n) { //escriu num en base, del reves, return del dret
	int r, a;
	if (n == 0) return 0;
	while (n > 0) {
		a = n%b;s
		n /= b;
		r = 10*r + a;
	}
	return reverse_num(r);
}


int main () {
	int n, b;
	int dig, veg=0;
	while (cin >> n) {
		a = base(n);
		
	}
}




