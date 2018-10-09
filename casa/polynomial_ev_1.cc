#include <iostream>
using namespace std;

double exp (double a, int b) {
	double i=0, t = 1;
	if (b == 0) return 1;
	while (b > i) {
		t *= a;
		++i;
	}
	return t;
}


int main (){
	cout.setf(ios::fixed);
	cout.precision(4);
	
	double x, c, i = 0, t = 0;
	cin >> x;
	while (cin >> c) {
		t = t + c*exp(x, i);
		++i;
	}
	
	cout << t << endl;
	
}
