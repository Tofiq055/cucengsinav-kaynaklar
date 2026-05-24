// ch04_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <locale>

//setlocale(LC_ALL,"Turkish");
#include<iostream>
using namespace std;
class myclass {
private: int who;
public:
myclass (int n) {
who=n;
cout<<"Constructing the object "<<who<<endl; }
~myclass () {cout<<"Destructing the object "<<who<<endl;}
int id() {return who;}
void set(int x) { who=x; }};
void f(myclass o)
{o.set(10); cout << "Received . The value of who=" << o.id() << endl;}
void f1(myclass *o) //passing an object by a pointer
{o->set(100); cout<<"Received (pointer) . The value of who="<<o->id()<<endl;}
void f2(myclass &o) //passing an object by reference
{o.set(3000); cout<<"Received (reference). The value of who="<<o.id()<<endl;}
int main() {setlocale(LC_ALL,"Turkish");
myclass x(1);//,y(2);
f(x);
cout << "after calling f(). The value of who=" << x.id() << endl;
f1(&x);
cout << "after calling f1(). The value of who=" << x.id() << endl;
f2(x);
cout << "after calling f2(). The value of who=" << x.id() << endl;
return 0;}
