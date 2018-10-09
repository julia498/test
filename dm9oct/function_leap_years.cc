#include <iostream>
using namespace std;

bool is_leap_year(int year){
    if (year == 1900 or year == 1800) return false;
    if (year%4 == 0 and year%100 != 0) return true;
    else if (year%400 == 0) return true;
    else return false;
}



int main(){
    int a;
    cin >> a;
    cout << is_leap_year(a) << endl;
    
}
