#include <iostream>
using namespace std;
#include <vector>

struct Casella {
	string e; //especie
	int v; //vida
};

typedef vector< vector<Casella> > taulell;

void torn(taulell& t, int n, int m) {
	int sum=0, t=1;
	taulell anterior = t;
	for (int i=0; i < n; ++i) {
		for (int j=0; j < m; ++j) {
			t[i][j].v = sum/t;
		}
	}
}

int main() {
	int n, m;
	while(cin >> n >> m) {
		taulell t(n, vector<Casella> (m));
		for (int i=0; i < n; ++i) {
			for (int j=0; j < m; ++j) {
				cin >> t[i][j].e >> t[i][j].v;
			}
		}
		
	}
}
