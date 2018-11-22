#include <iostream>
using namespace std;
#include <vector>
using fila = vector<int>;
using matriu = vector<fila>;

int main ()
{
	int n, m, a;
	cin >> n >> m;
	matriu A(n, fila(m));
	for (int i=0; i < n; ++i)
	{
		for (int j=0; j < m; ++j)
		{
			cin >> a;
			A[i][j] = a;
		}
	}
	string s;
	while (cin >> s)
	{
		if(s == "fila")
		{
			int r;
			cin >> r;
			cout << "fila " << r << ':';
			for (int i=0; i < m; ++i)
			{
				cout << ' ' << A[r-1][i];
			}
			cout << endl;
		}
		else if(s == "columna")
		{
			int r;
			cin >> r;
			cout << "columna " << r << ':';
			for (int i=0; i < n; ++i)
			{
				cout << ' ' << A[i][r-1];
			}
			cout << endl;
		}
		else if(s == "element")
		{
			int r, c;
			cin >> r >> c;
			cout << "element " << r << ' ' << c << ": ";
			cout << A[r-1][c-1] << endl;
		}
	}
}
