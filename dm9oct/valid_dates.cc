#include <iostream>
using namespace std;


bool is_leap_year(int year){
    if (year == 1900 or year == 1800) return false;
    if (year%4 == 0 and year%100 != 0) return true;
    else if (year%400 == 0) return true;
    else return false;
}

bool is_valid_date(int d, int m, int y){
    if (m > 12 or m < 1) return false;
    if (y < 1800 or y > 9999) return false;
    if (d > 31 or d < 1) return false;
    if (m == 2 and is_leap_year(y) and d <= 29) return true;
    if (m == 2 and d > 28) return false;
    if ((m == 4 or m == 6 or m == 9 or m == 11) and d > 30) return false;
    return true;
    
}


int main(){
    int x, y, z;
    cin >> x >> y >> z;
    cout << is_valid_date(x, y, z) << endl;
    
}
