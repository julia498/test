#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
	int n;
	while (cin >> n) {
		vector<string> v(n);
		for (int i=0; i < n; ++i) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int t=1;
		for (int i=1; i < n; ++i) {
			if (v[i] == v[i-1]) ++t;
			else {
				cout << t << ' ' << v[i-1] << endl;
				t = 1;
			}
		}
		if (v[n-1] == v[n-2]) cout << t << ' ' << v[n-1] << endl;
		else cout << 1 << ' ' << v[n-1] << endl;
		cout << "----------" << endl;
	}
}
