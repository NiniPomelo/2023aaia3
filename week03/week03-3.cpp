///week03-2.cpp �r�� string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "�п�J�@�Ӧr��, ��������Ů�: ";
    cin >> s;
    cout << "�r��s:" << s << "�����׬O:" << s.length() << "\n";
    ///for(char c : s)
    for(int i=0; i<s.length(); i++){
        cout << s[i] << "\n";
    }
}

