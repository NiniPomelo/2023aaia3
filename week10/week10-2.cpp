///week10-2.cpp �i���� class �̭�����ơB����k
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
{///�j�g �p�g
    Cat cat1, cat2; /// cat1 cat2 ���O Cat
    cat1.name = "�p��";
    cat2.name = "�p��";
    cat1.print();
    cat2.print();
}

