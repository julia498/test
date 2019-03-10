#include <iostream>
#include <vector>
using namespace std;

void posicions(const vector<int>& V, int& e, int& d){
	bool trobat = false;
	if (V[0] > V[1]) {
		e = 0;
		trobat = true;
	}
    for (int i=1; i < (int)V.size(); ++i) {
		if (V[i] < V[i-1] or V[i] > V[i+1]) {
			if (!trobat){
				e = i;
				trobat = true;
			}
			else d = i;
		} 
	}
}
