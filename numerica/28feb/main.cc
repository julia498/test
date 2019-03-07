#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argV[]) {
    cout << argV[1] << endl;
    
    ifstream fitxerDades;
    fitxerDades.open(argV[1], ifstream::in);
    if(fitxerDades.fail()) {  //si no s'ha obert el fitxer
        cout << "kahffsuh" << endl;
    }
    
    return 0;
    
