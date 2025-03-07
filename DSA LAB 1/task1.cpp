#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *p =&a;
    cout<<"value of veriable "<<a<<endl;
    cout<<"value of the pointer "<<*p<<endl;

    *p=15;
    cout<<"after "<<endl;
    cout<<"value of veriable "<<a<<endl;
    cout<<"valure of pointer "<<*p<<endl;
}

