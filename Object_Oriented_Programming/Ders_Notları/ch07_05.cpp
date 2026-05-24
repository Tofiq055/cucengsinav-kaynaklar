// ch07_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
class base {
public:
base ()  {cout<<"Constructing base class"<<endl;}
~base ()  {cout<<"Destructing base class"<<endl;}
};
class derived :public base { 
public:
derived(){cout<<"Constructing derived class"<<endl;}
~derived(){cout<<"Destructing derived class"<<endl;}
};
int main () {base b1;cout<<endl;
derived ob;

return 0;}

