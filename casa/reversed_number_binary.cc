#include <iostream>
using namespace std;

int main (){
	int n, b;
	cin >> n;
	if (n == 0) cout << 0;
	while (n > 0){
		b = n%2;
		n = n/2;
		cout << b;
	}
	cout << endl;
	
}
