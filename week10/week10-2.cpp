///week10-2.cpp 進階的 class 裡面有資料、有方法
#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    void print() {
        cout << "I am a cat. my name is " << name << ".\n";
    }
};


int main()
{///大寫 小寫
    Cat cat1, cat2; /// cat1 cat2 都是 Cat
    cat1.name = "小黑";
    cat2.name = "小白";
    cat1.print();
    cat2.print();
}

