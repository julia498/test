#include <iostream>
using namespace std;
#include <vector>

vector<int> ex_union(const vector<int>& v1, const vector<int>& v2) {
	vector<int> v;
	int i=0, j=0;
	int size1 = v1.size();
	int size2 = v2.size();
	while(i < size1 and j < size2) {
		if (i != 0 and v1[i] == v1[i-1]) ++i;
		else if (j != 0 and v2[j] == v2[j-1]) ++j;
		else if (v1[i] == v2[j]) {
			++i;
			++j;
		}
		else if (v1[i] > v2[j]) {
			v.push_back(v2[j]);
			++j;
		}
		else {
			v.push_back(v1[i]);
			++i;
		}
	}
	while(i < size1) {
		if (v1[i] != v1[i-1]) v.push_back(v1[i]);
		++i;
	}
	while (j < size2) {
		if (v2[j] != v2[j-1]) v.push_back(v2[j]);
		++j;
	}
	return v;
}

void print_v(const vector<int>& v) {
	for (int i=0; i < (int)v.size(); ++i) cout << v[i];
	cout << endl;
}

int main() {
	vector<int> v1 (4);
	vector<int> v2 (6);
	for (int i=0; i < 4; ++i) cin >> v1[i];
	for (int i=0; i < 6; ++i) cin >> v2[i];
	print_v(ex_union(v1, v2));
	
}

