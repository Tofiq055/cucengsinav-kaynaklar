// ch12_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <iostream>
#include <typeinfo>
using namespace std;
class Base {
public:
virtual void f () {};
};
class Derived :public Base {
public:
void derivedOnly () {cout<<"Is a Derived object\n";}};
int main() {Base *bp,b_ob;
Derived *dp,d_ob;
bp=&b_ob;//use typeid
if(typeid(*bp)==typeid(Derived))
{dp=(Derived *) bp;dp->derivedOnly();}
else cout<<"Cast from Base to Derived failed.\n";
bp=&d_ob;
if(typeid(*bp)==typeid(Derived))
{dp=(Derived *) bp;dp->derivedOnly();}
else cout<<"Error, cast should work.\n";

bp=&b_ob; //use dynamic_cast 
dp=dynamic_cast<Derived *> (bp);
if (dp) dp->derivedOnly();
else cout<<"Cast from Base to Derived failed.\n";

bp=&d_ob; 
dp=dynamic_cast<Derived *> (bp);
if (dp) dp->derivedOnly();
else cout<<"Error, cast should work.\n";
return 0;
}
