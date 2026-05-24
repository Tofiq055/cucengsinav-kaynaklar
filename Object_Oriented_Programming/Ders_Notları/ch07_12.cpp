// ch07_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
class A 
{
public:int i;
//int get_i () {return i;}
//void set_i (int x) {i=x;}
};
class B: virtual  public A {public: int j;};
class C: virtual public A {public: int k;};
//class B :   public A { public: int j; };
//class C:  public A {public: int k;};
class D: public B,public C {
public:
int product() {return i*j*k;}
};
int main(){
D ob;
ob.i=10;
ob.j=3;
ob.k=5;
cout<<"Product is : "<<ob.product()<<endl;
return 0;
}

