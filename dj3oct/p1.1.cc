#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b;
	c = a;
	d = b;
	while (a != b) {
		if (a < b) {
			b = b-a;
		}
		else a = a-b;
		
	}
	cout << "The gcd of " << c << " and " << d << " is " << a << "." << endl;
    
}
