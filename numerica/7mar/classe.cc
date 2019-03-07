#include <iostream>

using namespace std;

int main() {
    double x = 3.7;
    double *p;
    
    p = &x;  // el contingut de p es la posicio de x
    
    cout << "&x = " << &x << endl;
    cout << "p = " << p << endl;
    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;
    
    //VECTORS:
    int n = 4, i;
    double *vec;
    vec = new double [n];
    
    for (i=0; i<n; ++i) {
        *(vec+i) = i;    //assignem a aquella adreça de memoria els valors de 0 fins a n
    }
    for (i=0; i<n; ++i) {
        cout << vec + i << ", ";
    }
    for (int i=0; i<n; ++i) {
        cout << vec[i] << ", ";
    }
    
    //MATRIUS:
    int m =3, j;
    double **a;
    a = new double *[n]();  //vector d'apuntadors a double
    for (int i=0; i<n; ++i) {
        a[i] = new double [m];
    }
    
    a[0][0] = 1.1;
    a[0][1] = 1.2;
    a[0][2] = 1.3;
    
    a[1][0] = 2.1;
    a[1][1] = 2.2;
    a[1][2] = 2.3;
    
    a[2][0] = 3.1;
    a[2][1] = 3.2;
    a[2][2] = 3.3;
    
    a[3][0] = 4.1;
    a[3][1] = 4.2;
    a[3][2] = 4.3;
    
    for (int i=0; i<n; ++i){
        for (j=0; j<m; ++j) {
            cout<< a[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << a[1][2] << endl;
    cout << *(*(a+1)+2) << endl;
    
    for (i=n-1; i>=0; --i) {
        delete [](a[i]);
    }
    delete [](a);
    a = 0;
    
    
    return 0;
}
