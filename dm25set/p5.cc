#include <iostream>
using namespace std;

int main(){
    int x = 0, y = 0;
    char i;
    
    while(cin >> i){
        if (i == 'n') y = y - 1;
        else if (i == 's') y = y +1;
        else if (i == 'e') x = x +1;
        else if (i == 'w') x = x - 1;
    }
    
    cout << "(" << x << ", " << y << ")" << endl;
}











//no acabat


//mouv. on the ground
