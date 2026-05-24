// ch12_02.cpp : Defines the entry point for the console application.
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
void WhatType(BaseClass &ob){
cout<<"ob is referencing an object of type ";
cout<<typeid(ob).name()<<endl;
}
int main(){
int i;BaseClass baseob;
Derived1 ob1;
Derived2 ob2;
WhatType(baseob);
WhatType(ob1);
WhatType(ob2);
return 0;
}

