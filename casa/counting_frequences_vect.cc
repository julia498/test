#include <iostream>
using namespace std;
#include <vector>

int main () {
	int n, a;
	vector<int> v;
	vector<int> t;
	cin >> n;
	for (int i=0; i < n; ++i)
	{
		cin >> a;
		bool trobat = false;
		for (int i=0; i < (int) v.size() and !trobat; ++i)
		{
			if (a == v[i])
			{
				trobat = true;
				++t[i];
			}
		}
		if (trobat == false)
		{
			v.push_back(a);
			t.push_back(1);
		}
	}
	for (int i=0; i < (int) v.size(); ++i)
	{
		cout << v[i] << " : " << t[i] << endl;
	}
}
