#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<int> > Matrix;

bool is_magic_square(const Matrix& m)
{
    int t=0;    // suma de cada fila/col/diag   (hauria de ser igual)
    
    //miro suma de les files:
    for (int i=0; i < (int)m.size(); ++i)
    {
        int s=0;    //suma de la fila "actual"
        for (int j=0; j < (int)m.size(); ++j)
        {
           s += m[i][j];
           if (i == 0 and j == (int)m.size()-1) t = s; 
        }
        if (s != t) return false;
    }
    
    // miro suma de les columnes:
    for (int i=0; i < (int)m.size(); ++i)
    {
        for (int j=0; j < (int)m.size(); ++j)
        {
            
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        Matrix m(n, vector<int> (n));
        for (int i=0; i < n, ++i)
        {
            for (int j=0; j < n; ++j)
            {
                int a;
                cin >> a;
                m[i][j] = a;
            }
        }
        cout << is_magic_square(m) << endl;
    }
}
