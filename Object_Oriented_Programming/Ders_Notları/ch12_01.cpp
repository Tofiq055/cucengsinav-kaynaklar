// ch12_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <iostream>
#include <typeinfo>
using namespace std;
class BaseClass {
public:
virtual void f () {};//make BaseClass polimorphic
};
class Derived1 :public BaseClass {
//
};
class Derived2 :public BaseClass {
//
};
int main(){
int i;BaseClass *p,baseob; Derived1 ob1;Derived2 ob2;
cout<<"Typeid of i is:"<<typeid(i).name()<<endl;

p=&baseob;
cout<<"P is pointing to an object of type ";
cout<<typeid(*p).name()<<endl;
cout<<typeid(baseob).name()<<endl;
p=&ob1;
cout<<"P is pointing to an object of type ";
cout<<typeid(*p).name()<<endl;
p=&ob2;
cout<<"P is pointing to an object of type ";
cout<<typeid(*p).name()<<endl;
return 0;}
