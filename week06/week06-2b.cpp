//week06-2b.cpp voctor array Step03 Step04
# include <iostream>
# include <vector>
using namespace std;

int main()
{
    vector<int> a; //Step03 vector array

    int now;
    while(cin >> now){ //Step01 Input
        a.push_back(now);
        for(int b : a) cout << b << ' '; 
        cout << "\n"; //Step04 print array
        //cout << now << "\n"; //Step02 Output
    }

}