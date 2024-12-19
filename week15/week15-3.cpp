// week15-3.cpp SOIT106_ADVANCE_007
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if(s[0]==s[3] && s[1]==s[2]){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}