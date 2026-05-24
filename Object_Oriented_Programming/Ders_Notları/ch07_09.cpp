// ch07_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
class B1 {private : int a;
public:
B1(int x)  {a=x;cout<<"Constructing base class  B1   a="<<a<<endl;}
int geta()  {return a;}
~B1() { cout << "Destructing base class  B1   a=" << a << endl; }
};
class D1 :public B1 { private : int b;
public:
D1(int x,int y) :B1(x)  {b=y;cout<<"Constructing derived class  D1   b="<<b<<endl;};
int getb(){return b;}
~D1() { cout << "Destructing base class  D1   b=" << b << endl; }
};
class D2 :public D1 { private : int c;
public:
D2(int x,int y, int z) :D1(x,y)  {c=z;cout<<"Constructing derived class  D2   c="<<c<<endl;};
void show(){cout<<geta()<<"  "<<getb()<<"  "<<c<<endl;}
~D2() { cout << "Destructing base class  D2   c=" << c << endl; }
};
int main ()
{
	int i;
D2 ob(1,2,3);
D1 ob1(10,20);
B1 ob2(50);
ob.show();
cin >> i;
cout<<ob.geta()<<"  "<<ob.getb()<<endl;
cout<<ob1.geta()<<"  "<<ob1.getb()<<endl;
cout<<ob2.geta()<<"  "<<ob.getb()<<endl;


return 0;
}


