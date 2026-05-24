// ch07_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
class B1 {public:
B1 ()  {cout<<"Constructing B1"<<endl;}
~B1()  {cout<<"Destructing B1"<<endl;}
};
class B2 {public:
B2 ()  {cout<<" Constructing B2"<<endl;}
~B2()  {cout<<" Destructing B2"<<endl;}
};
class D :public B1,public B2 { 
public:
D ()  {cout<<"Constructing D"<<endl;}
~D()  {cout<<"Destructing D"<<endl;}
};
int main () {int i;
	B2 bo2;
	{D ob;}
	B1 bo1;
	cin>>i;
return 0;}

