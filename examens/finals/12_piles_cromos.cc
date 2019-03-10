#include <iostream>
using namespace std;
#include <vector>


void partida (int x, int y, int c, vector< vector<string> >& v,
vector<int>& caramels) {
	for (int i=0; i < c; ++i) {
		if ((int)v[y-1].size() > 0) {
			string carta = v[y-1][(int)v[y-1].size()-1];
			v[y-1].pop_back();
			v[x-1].push_back(carta);
		}
		else {
			++caramels[y-1];
		}
	}
}

int main (){
	int n;
	while (cin >> n) {
		vector< vector<string> > v (n);
		vector<int> caramels (n, 0);
		string s;
		for (int i=0; i < n; ++i){
			while (cin >> s and s != "FI") {
				v[i].push_back(s);
			}
		}
		int x, y, c;
		while (cin >> x >> y >> c and x != 0) {
			partida(x, y, c, v, caramels);
		}
		for (int i=0; i < n; ++i) {
			cout << caramels[i];
			for (int j = (int)v[i].size()-1; j >= 0; --j) {
				cout << ' ' << v[i][j];
			}
			cout << endl;
		}
		cout << "----------" << endl;
	}
}
