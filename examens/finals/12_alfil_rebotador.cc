#include <iostream>
using namespace std;
#include <vector>
using matrix = vector< vector<char> >;

void dretabaix(int f, int c, int& i, int& j, matrix& m) {
    while (i < f and j < c) {
        m[i][j] = 'X';
        ++i;
        ++j;
    }
}

void dretadalt(int f, int c, int& i, int& j; matrix& m) {
    while (j < c and i >= 0) {
        m[i][j] = 'X';
        ++j;
        --i;
    }
}

void esquerrabaix(int f, int c, int& i, int& j, matrix& m) {
    while (i < f and j >= 0) {
        m[i][j] = 'X';
        ++i;
        --j;
    }
}

void esquerradalt(int f, int c, int& i, int& j, matrix& m) {
    while (i >= 0; j >= 0) {
        m[i][j] = 'X';
        --i;
        --j;
    }
}

void dibux(int f, int c, int& i, int& j, matrix& m) {
    dretabaix(f, c, i, j, m);
    if (j < c) dretadalt(f, c, i, j, m);
    
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        matrix m(f, vector<char> (c, '.'));
        int i=0, j=0;
        
        //imprimir matriu resultant
        for (int a=0; a < f; ++a) {
            for (int b=0; b < c; ++b ){
                cout << m[a][b];
            }
            cout << endl;
        }
    }
}
