#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool is_prime(int n) {
	if (n < 2) return false;
	for (int i=2; i*i <= n; ++i) {
		if (n%i == 0) return false;
	}
	return true;
}

struct tot {
	int num;
	int veg;
	bool primer;
};

bool comp(const tot& a, const tot& b) {
	if (a.veg != b.veg) 
		return a.veg > b.veg;
	if (a.primer != b.primer)
		return a.primer;
	return a.num > b.num;
}

int main() {
	int n;
	while (cin >> n) {
		vector<tot> v;
		int a;
		for (int i=0; i < n; ++i) {
			cin >> a;
			bool trobat = false;
			int j=0;
			while (!trobat and j < (int)v.size()) {
				if (a == v[j].num) {
					++v[j].veg;
					trobat = true;
				}
				++j;
			}
			if (!trobat) {
				tot nou;
				nou.num = a;
				nou.veg = 1;
				nou.primer = is_prime(a);
				v.push_back(nou);	
			}
		}
		sort(v.begin(), v.end(), comp);
		for (int i=0; i < (int)v.size(); ++i) {
			cout << v[i].num << endl;
		}
		cout  << "----------" << endl;
	}
}
