#include <iostream>
using namespace std;
#include <vector>

void reversed_word(string s) {
	int n = s.size();
	for (int i=n-1; i >= 0; --i) cout << s[i];
	cout << endl;
}

int main () {
	string s;
	int n;
	vector<string> v;
	cin >> n;
	for (int i=0; i < n; ++i) {
		cin >> s;
		v.push_back(s);
	}
	int sizev = v.size();
	for (int i = sizev-1; i >= 0; --i) {
		reversed_word(v[i]);
	}
}
