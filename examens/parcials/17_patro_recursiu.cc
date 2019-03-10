#include <iostream>
using namespace std;

void patro(char ch) {
	if (ch == 'a') cout << 'a';
	else {
		cout << ch;
		for (int i=0; i < ch - 'a'; ++i) {
			patro(ch-1);
			cout << ch;
		}
	}
}

int main () {
	char ch;
	cin >> ch;
	patro(ch);
	cout << endl;
}
