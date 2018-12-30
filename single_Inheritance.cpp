#include<iostream>
using namespace std;
class A
{
int a;
public:
int setvalue1(int );
int getvalue1();
};
class B:public A
{
int b,c;
public:
int setvalue2(int );
int Add();
int display();
};
int A::setvalue1(int x)
{
a=x;
}
int A::getvalue1()
{
return a;
}
int B:: setvalue2(int y)
{
b=y;
}
int B::Add()
{
c=getvalue1()+b;
}
int B:: display()
{
    cout<<"Value of a: "<<getvalue1()<<endl;
    cout<<"value of b: "<<b<<endl;
    cout<<"value of c: "<<c<<endl;;
}
int main()
{
    B b1;
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    b1.setvalue1(a);
    b1.setvalue2(b);
    b1.Add();
    b1.display();

}
