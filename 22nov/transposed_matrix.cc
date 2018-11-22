#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<int> > Matrix;

void transpose(Matrix& m)
{
    for (int i=0; i < (int)m.size(); ++i)
    {
        for (int j=0; j < i; ++j)
        {
            int a = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = a;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    Matrix a(n, vector<int> (n));
    int b;
    for (int i=0; i < n; ++i)
    {
        for (int j=0; j < n; ++j)
        {
            cin >> b;
            a[i][j] = b;
        }
    }
    transpose(a);
    for (int i=0; i < n; ++i)
    {
        for (int j=0; j < n; ++j)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
