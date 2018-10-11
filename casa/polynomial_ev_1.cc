#include <iostream>
using namespace std;

double exp (double a, int b) {
	int i=0, t = 1;
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
    double a = 1;
	while (cin >> c) {
		t += c*a;
		++i;
        a *= x;
	}
	
	cout << t << endl;
	
}
