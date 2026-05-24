// ch12_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <typeinfo>
using namespace std;
class X {
public:
virtual void f () {};
};
class Y {
public:
virtual void f () {};
};

int main(){
X x1,x2;
Y y1;
if(typeid(x1)==typeid(x2))
cout<<"x1 and x2 are same types"<<endl;
else cout<<"x1 and x2 are different types"<<endl;
if(typeid(x1)==typeid(y1))
cout<<"x1 and y1 are same types"<<endl;
else cout<<"x1 and y1 are different types"<<endl;
return 0;
}