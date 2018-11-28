#include <iostream>
using namespace std;
#include <vector>
typedef vector< vector<string> > Matriu;

char qui_guanya(const vector<string>& A, const vector<string>& B) {
	for (int i=0; i < 5; ++i) {
		if ( A[i][(int)A[i].size()-1] != B[i][0] ) return 'A';
		if (i != 4) {
			if ( B[i][(int)B[i].size()-1] != A[i+1][0] ) return 'B';
		}
	}
	return '=';
}

int main () {
    int n;
    cin >> n;
    for (int i=0; i < n; ++i) { //per cada partida
        vector<string> A;
        vector<string> B;
        string s;
        for (int j=0; j < 5; ++j) {
            cin >> s;
            A.push_back(s);
            cin >> s;
            B.push_back(s);
        }
        cout << qui_guanya(A, B) << endl;
    }
}
