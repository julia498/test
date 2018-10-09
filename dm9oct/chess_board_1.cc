#include <iostream>
using namespace std;


int main(){
    int c, r, t = 0;
    cin >> c >> r;
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            char n;
            cin >> n;
            t += n - '0';
        }
        
    }
    
    cout << t << endl;
    
}
