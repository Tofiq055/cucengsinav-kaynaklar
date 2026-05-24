// ch07_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
class samp {
private: int a;
protected: int b;
public:  int c;
samp (int  n, int m)  {a=n; b=m;}
int get_a() {return a;}
int get_b() {return b;}
void set_b(int x) {b=x;}


};
int main()   {samp ob(10,20);
//ob.b=99; //Error. b is protected.
ob.set_b(99);
ob.c=30; //c is public.
cout<<ob.get_a()<<"   "<<ob.get_b()<<"  "<<ob.c<<endl;
return 0;}

