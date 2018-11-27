#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<int> > Matrix;

bool is_magic_square(const Matrix& m)
{
    int n = m.size();
    int t=0;    // suma de cada fila/col/diag   (hauria de ser igual)
    
    
    //miro suma de les files:
    
    for (int i=0; i < n; ++i)
    {
        int s = 0;
        for (int j=0; j < n; ++j)
        {
           s += m[i][j];
           if (i == 0 and j == n-1) t = s; 
        }
        if (s != t) return false;
    }
    
    // miro suma de les columnes:
    
    for (int i=0; i < n; ++i)
    {
		int s = 0;
        for (int j=0; j < n; ++j)
        {
            s += m[j][i];
        }
        if (s != t) return false;
    }
    
    //miro la suma de la diagonal 1:
    int s = 0;
    for (int i=0; i < n; ++i) s += m[i][i];
	if (s != t) return false;
	
	//miro la suma de la diagonal 2:
	s = 0;
    for (int i=0; i < n; ++i) s += m[i][n-i-1];
	if (s != t) return false;

   
    if (t != s) return false;
    
    
    //hem de veure que apareixen tots el nums entre 1 i (m.size)^2
    
    vector<int> v (n*n, 0);
    for (int i=0; i < n; ++i) {
		for (int j=0; j < n; ++j) {
			if (++v[m[i][j]-1] > 1) return false;
		}
	}
	return true;
}

int main()
{
    int n;
    while (cin >> n)
    {
        Matrix m(n, vector<int> (n));
        for (int i=0; i < n; ++i)
        {
            for (int j=0; j < n; ++j)
            {
                int a;
                cin >> a;
                m[i][j] = a;
            }
        }
        if (is_magic_square(m)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
