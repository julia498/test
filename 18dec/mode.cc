#include <iostream>
using namespace std;
#include <vector>

int main (){
    int n;
    while (cin >> n and n != 0) {
        vector<string> v;
        vector<int> veg;
        string s;
        for (int i=0; i < n; ++i) {
            cin >> s;
            if (i == 0) {
                v.push_back(s);
                veg.push_back(1);
            }
            else {
                for (int j=0; j < (int)v.size(); ++j) {
                    if (v[j] != s) {
                        v.push_back(s);
                        veg.push_back(1);
                    }
                    else ++veg[j];
                }
            }
        }
        int index, t = 0;
        for (int i=0; i < (int)v.size(); ++i) {
            if(veg[i] > t) {
                t = veg[i];
                index = i;
            }
            else if (veg[i] == t) {
                if (v[i] > v[index]) index = i;
            }
        }
        cout << v[index] << endl;
    }
}
