#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<int> > Matrix;

bool is_symmetric(const Matrix& m)
{
    for (int i=0; i < (int)m.size(); ++i)
    {
        for (int j=0; j < i; ++j)
        {
            if (m[i][j] != m[j][i]) return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
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
    cout << is_symmetric(m) << endl;
}
