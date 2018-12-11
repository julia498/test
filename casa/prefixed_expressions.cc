#include <iostream>
using namespace std;
#include <cmath>

int expressio() {
	char c;
	cin >> c;
	if (c == '+') return expressio() + expressio();
	if (c == '-') return expressio() - expressio();
	if (c == '*') return expressio() * expressio();
	return c - '0';
}

int main() {
	cout << expressio() << endl;
}
