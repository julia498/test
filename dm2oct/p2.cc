#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n, i=0;
    cin >> n;
    string a;
    double b, h, r;
    
    while(i < n){
        cin >> a;
        if (a == "rectangle"){
            cin >> b >> h;
            cout << b*h << endl;

        }
        if (a == "circle"){
            cin >> r;
            cout << r*r*M_PI << endl;
        }
        ++i;
        
    }
    //cout << b*h << endl;
    //cout << r*r*M_PI << endl;
    
    
}
