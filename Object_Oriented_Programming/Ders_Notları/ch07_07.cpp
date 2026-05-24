// ch07_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
class base {private : int i;
public:
base (int n)  { i = n; cout<<" Constructing base class i="<<i<<endl;}
~base() { cout << " Destructing base class  i=" <<i<< endl; }
void showi() {cout<<i<<endl;}
};
class derived :public base { private : int j;
public:
derived(int n) :base(n)  {j=n;
cout<<" Constructing derived class  j="<<j<<endl;}
~derived(){cout<<" Destructing derived class   j="<<j<<endl;}
void showj() {cout<<j<<endl;} };
int main() {
	derived ob(10); base b1(50);
ob.showi();  b1.showi(); ob.showj();
return 0;}

