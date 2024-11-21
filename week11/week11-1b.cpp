//week11-1b.cpp UVA11332 Step01 Bo Pi Fa 
#include <iostream>
using namespace std;

int f(int n){
	int ans = 0;
	while( n>0 ){ //Step02: Bo Pi Fa
		ans += n%10;
		n = n / 10;
	}
	return ans;
}

int main()
{
	int n;
	while(cin >> n){ //Step01: Input
		if(n==0) break;
		
		n = f(n);
		cout << n << endl;
	}

}