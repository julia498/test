#include <iostream>
using namespace std;
#include <vector>
typedef vector<string> Row;
typedef vector<Row> Matrix;

int number_of_words(const Matrix& m, char c, int k){
    int n = m.size();
    int t=0;
    for (int i=0; i < n; ++i) {
        for (int j=0; j < (int)m[i].size(); ++j){
            string s = m[i][j];
            int mida_str = s.size();
            if (mida_str-1 >= k){
                if (s[k] == c) ++t;
            }
        }
    }
    return t;
}

int main() {
    Matrix m(2, Row(2));
    string s;
    cin >> s;
    m[0].push_back(s);
    cin >> s;
    m[0].push_back(s);
    cin >> s;
    m[1].push_back(s);
    cout << number_of_words(m, '2', 2) << endl;
}
