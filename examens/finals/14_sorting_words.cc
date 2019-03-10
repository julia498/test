#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

struct tot {
	string paraula;
	int veg;
};

bool comp(const tot& a, const tot& b) {
	if (a.veg != b.veg) return a.veg > b.veg;
	return a.paraula < b.paraula;
}

int main() {
	int n;
	while (cin >> n) {
		vector<tot> v;
		string a;
		for (int i=0; i < n; ++i) {
			cin >> a;
			bool trobat = false;
			int j=0;
			while (!trobat and j < (int)v.size()) {
				if (a == v[j].paraula) {
					++v[j].veg;
					trobat = true;
				}
				++j;
			}
			if (!trobat) {
				tot nou;
				nou.paraula = a;
				nou.veg = 1;
				v.push_back(nou);
			}
		}
		sort(v.begin(), v.end(), comp);
		for (int i=0; i < (int)v.size(); ++i) {
			cout << v[i].veg << ' ' << v[i].paraula << endl;
		}
		cout << "----------" << endl;
	}
}
