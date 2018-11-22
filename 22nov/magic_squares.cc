#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<int> > Matrix;

bool is_magic_square(const Matrix& m)
{
    
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
