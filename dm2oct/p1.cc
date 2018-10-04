#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    while(x >= 2){
        cout << x%2;
        x = x/2;
    }
    if(x < 2) cout << x%2;
    cout << endl;
    
    
    
    
}
