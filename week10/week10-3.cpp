///week10-3.cpp 進階的 class 裡面有建構函式、有資料、有方法
#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    Cat(string _name){
        name = _name;
    }
    string name; ///變數、資料
    void print() { ///函式、方法
        cout << "I am a cat. my name is " << name << ".\n";
    }
};


int main()
{///大寫 小寫
    Cat cat1("小黑"), cat2("小白"); /// cat1 cat2 都是 Cat
    cat1.print();
    cat2.print();
}


