// ch07_06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class base {
public:
base () {cout<<"Constructing base class "<<endl;}
~base ()  {cout<<"Destructing base class"<<endl;}
};
class derived :public base { private: int j;
public:
derived(int n){j=n;
cout<<" Constructing derived class "<<endl;}
~derived(){cout<<" Destructing derived class"<<endl;}
void showj() {cout<<j<<endl;}
};
int main() {
	derived ob(10); base ob1;
ob.showj();
return 0;}
