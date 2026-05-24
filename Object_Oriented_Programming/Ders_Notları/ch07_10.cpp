// ch07_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <iostream>
using namespace std;
class B1 {private : int a;
public:
B1(int x)  {a=x;cout<<"Constructing base class  B1   a:"<<a<<endl;}
B1()  {a=100;cout<<"Constructing base class  B1 without parameter  a="<<a<<endl;}

~B1()  {cout<<"Destructing B1  a="<<a<<endl;}
int geta()  {return a;}      };
class B2 { private : int b;
public:
B2(int x)  {b=x;cout<<"Constructing base class  B2   b="<<b<<endl;};
~B2()  {cout<<"Destructing B2  b="<<b<<endl;}
int getb(){return b;}         };
class D :public B1,public B2 { private : int c;
public:
	D(int x,int y) :B1(), B2(x)
{c=y;cout<<"Constructing derived class  D without parameter  c="<<c<<endl;};

	D(int x,int y, int z) :B1(x), B2(y)
{c=z;cout<<"Constructing derived class  D   c="<<c<<endl;};

~D()  {cout<<"Destructing D  c="<<c<<endl;}
void show(){cout<<geta()<<"  "<<getb()<<"  "<<c<<endl;}
};
int main ()
{
	int i;
D ob(1,2,3);
D ob1(11,22);
ob.show(); 
//B1 bo1(50);
B1 bo1;
cin >> i;
cout<<bo1.geta()<<endl;
cout<<ob.geta()<<"  "<<ob.getb()<<endl;
return 0;
}

