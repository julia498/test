#include <iostream>
using namespace std;
#include <vector>

vector<double> intersection(const vector<double>& v1, const vector<double>& v2) {
    vector<double> v;
    int i=0, j=0;
    while (i < (int)v1.size() and j < (int)v2.size()) {
        if (v1[i] < v2[j]) ++i;
        else if (v1[i] > v2[j]) ++j;
        else {
            if (i == 0) v.push_back(v1[i]);
            else if (v1[i] != v[(int)v.size()-1]) v.push_back(v1[i]);
            ++i;
            ++j;
        }
    }
    return v;
}


void printVector(vector<double>& v)
{
for (int i=0; i < (int)v.size(); ++i) cout << v[i];
cout << endl;
}

int main ()
{
	int n;
	cin >> n;
	vector<double> v1(n), v2(n);
	for (int i = 0; i < n; i++) {
		cin >> v1[i];
		cin >> v2[i];
	}
	printVector(intersection(v1, v2))
}
