// ch10_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
class base {
public: int i; base (int  x)  {i=x;}
virtual void func () {
cout<<"using base version of func():  "<<i<<endl;}
};
class derived1 :public base {
public:  derived1 (int  x) :base(x)  {}
//void func(){cout<<"using derived1's version of func():"; cout<<i*i<<endl;} 
};
class derived2 :public base {
public:  derived2 (int  x) :base(x)  {}
void func(){cout<<"using derived2's version of func():"; cout<<i+i<<endl;}
 };
int main() {setlocale(LC_ALL,"Turkish");
	base *p,ob(10); 
derived1 d_ob1(20); derived2 d_ob2(30);

p=&ob;
p->func();//use base's func()

p=&d_ob1;
p->func();//use derived1's func()
d_ob1.func();
p=&d_ob2;
p->func();//use derived2's func()
return 0;
}    

