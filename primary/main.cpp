#include <iostream>
using namespace std;

class A {};

class B {
    char ch;
    virtual void func0() {}
};

class C {
    virtual void func() {}
    virtual void func1() {}
    int ch1;
    char ch2;
};

struct CC {
    char ch2;
    int ch1;
    char ch3;
    int ch4;
};

class D : public C {
    int d;
    virtual void func() {}
    virtual void func1() {}
};
class E : public B, public C {
    int e;
    virtual void func0() {}
    virtual void func1() {}
};

int main(void)
{
    cout << "A=" << sizeof(A) << endl;   // result=1
    cout << "B=" << sizeof(B) << endl;   // result=16
    cout << "C=" << sizeof(C) << endl;   // result=16
    cout << "D=" << sizeof(D) << endl;   // result=16
    cout << "E=" << sizeof(E) << endl;   // result=32
    cout << "CC=" << sizeof(CC) << endl; // result=8
    return 0;
}
