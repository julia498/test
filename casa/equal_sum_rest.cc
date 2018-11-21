//private EE (time limit ecceeded)


#include <iostream>
using namespace std;
#include <vector>

bool equal_sum(int n, const int s)
{
	return s-n == n;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int a, s=0;
		vector<int> v;
		for (int i=0; i < n; ++i)
		{
			cin >> a;
			s += a;
			v.push_back(a);
		}
		bool trobat = false;
		for (int i=0; i < (int) v.size() and !trobat; ++i)
		{
			if (equal_sum(v[i], s))
			{
				cout << "YES" << endl;
				trobat = true;
			}
		}
		if (trobat == false) cout << "NO" << endl;
	}
}
