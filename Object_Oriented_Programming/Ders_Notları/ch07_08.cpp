// ch07_08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class base {private : int i;
public:
base (int n)  {i=n;cout<<"Constructing base class  i="<<i<<endl; }
~base ()  {cout<<"Destructing base class   i="<<i<<endl;}
void showi() {cout<<i<<endl;}
};
class derived :public base { private : int j;
public:
derived(int n,int m) :base(n)  {j=m;
cout<<"Constructing derived class    j="<<j<<endl;}
~derived(){cout<<"Destructing derived class  j="<<j<<endl;}
void showj() {cout<<j<<endl;} };
int main() {
	int i; derived ob(10, 20);

{base b_1(150); derived d1(1, 5); }
cin >> i;
base ob2(50);
ob.showi();   ob.showj();ob2.showi();
return 0;}


