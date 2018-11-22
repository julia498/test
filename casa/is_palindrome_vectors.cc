#include <iostream>
using namespace std;
#include <vector>

bool is_palindrome(const string& s)
{
	for (int i=(int)s.size()-1; i >= (int)s.size()/2; --i)
	{
		if (s[i] != s[((int)s.size()-1)-i]) return false;
	}
	return true;
}

int main ()
{
	string s;
	cin >> s;
	cout << is_palindrome(s) << endl;
}
