#include <iostream>
using namespace std;
#include <vector>
typedef vector<char> Fila;
typedef vector<Fila> Matriu;

bool coincideix(const Matriu& P, const Matriu& M, int c, int f) {
	for (int i=0; i < (int)P.size(); ++i) {
		for (int j=0; j < (int)P[0].size(); ++j) {
			if (P[i][j] != M[i+c][j+f]) return false;
		}
	}
	return true;
}

int patro(const Matriu& P, const Matriu& M) {
	int t = 0;
	int n = P.size();
	int m = P[0].size();
	for (int i=0; i+n-1 < (int)M.size(); ++i) {
		for (int j=0; j+m-1 < (int)M[0].size(); ++j) {
			if (coincideix(P, M, i, j)) ++t;
		}
	}
	return t;
}
