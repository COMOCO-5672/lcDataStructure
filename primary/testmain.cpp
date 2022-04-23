#include<iostream>
using namespace std;
/**
 * @brief 
 * 虚基表，类大小判断
 */

class A {

    int a;

};

class B:virtual public A{

    virtual void myfunB(){}

};

class C:virtual public A{

    virtual void myfunC(){}

};

class D: virtual public B{

    virtual void myfunD(){}
    virtual void myfunD1(){}

};

int main()
{
    cout<<"A="<<sizeof(A)<<endl;    //result=1  
    cout<<"B="<<sizeof(B)<<endl;    //result=16      
    cout<<"C="<<sizeof(C)<<endl;    //result=16  
    cout<<"D="<<sizeof(D)<<endl;    //result=16  
    return 0;
}