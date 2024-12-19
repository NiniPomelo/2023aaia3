//week15-1.cpp UVA12250 not OK
#include <iostream>
#include <string> // <====
using namespace std;

int main()
{
	string hello; // <====
	int t=1; // Step03: Test Case t
	while(cin >> hello){ // Step01: Input
		if(hello == "#") break;
		
		cout << "Case " << t << ": ENGLISH\n";
		t++;
	} // Step02: Output
}