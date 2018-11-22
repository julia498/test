#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<int> > Matrix;

Matrix sum(const Matrix& a, const Matrix& b)
{
	Matrix c = a;
	for (int i=0; i < (int)a.size(); ++i)
	{
		for (int j=0; j < (int)a[i].size(); ++j)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	return c;
}

int main()
{
	
}
