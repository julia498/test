#include <iostream>
using namespace std;

char encoded(char c, int k){
    if (c == '_') return ' ';
    if (c < 'a' or c > 'z') return c;
    return (c-'a' + k)%26 + 'A';
}

int main(){
    int k;
    while (cin >> k){
        char a;
        while (cin >> a and a != '.') cout << encoded(a, k);
        cout << endl;
    }
}
