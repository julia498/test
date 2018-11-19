#include <iostream>
using namespace std;
#include <vector>

int main () {
	string s;
	while(cin >> s) {
		int n = s.size();
		for (int i=n-1; i >= 0; --i) {
			cout << s[i];
		}
		cout << endl;
	}
	
}
