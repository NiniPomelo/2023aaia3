///week03-2.cpp 字串 string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "請輸入一個字串, 中間不能空格: ";
    cin >> s;
    cout << "字串s:" << s << "的長度是:" << s.length() << "\n";
    ///for(char c : s)
    for(int i=0; i<s.length(); i++){
        cout << s[i] << "\n";
    }
}

