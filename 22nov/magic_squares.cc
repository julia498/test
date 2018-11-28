//PRIVATE WA no se pq!!!


#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<int> > Matrix;

bool is_magic_square(const Matrix& m)
{
    int t=0;    // suma de cada fila/col/diag   (hauria de ser igual)
    
    
    //miro suma de les files:
    
    int s = 0; //suma de la fila "actual"
    
    for (int i=0; i < (int)m.size(); ++i)
    {
        s = 0;
        for (int j=0; j < (int)m.size(); ++j)
        {
           s += m[i][j];
           if (i == 0 and j == (int)m.size()-1) t = s; 
        }
        if (s != t) return false;
    }
    
    // miro suma de les columnes:
    
    s = 0;
    for (int i=0; i < (int)m.size(); ++i)
    {
		s = 0;
        for (int j=0; j < (int)m.size(); ++j)
        {
            s += m[j][i];
        }
        if (s != t) return false;
    }
    
    //miro la suma de la diagonal 1:
    s = 0;
    for (int i=0; i < (int)m.size(); ++i)
    {
		s += m[i][i];
	}
	if (t != s) return false;
	
	s = 0;
	//miro la suma de la diagonal 2:
	for (int i=(int)m.size()-1; i >= 0; --i)
	{
		int j = 0;
		s += m[i][j];
		++j;
		
	}
    if (t != s) return false;
    
    
    //hem de veure que apareixen tots el nums entre 1 i (m.size)^2
    
    vector<int> v ((int)m.size()*(int)m.size(), 0);
    for (int i=0; i < (int)m.size(); ++i)
    {
		for (int j=0; j < (int) m.size(); ++j)
		{
			v[m[i][j]-1] += 1;
		}
	}
	for (int i=0; i < (int)v.size(); ++i)
	{
		if (v[i] != 1) return false;
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
