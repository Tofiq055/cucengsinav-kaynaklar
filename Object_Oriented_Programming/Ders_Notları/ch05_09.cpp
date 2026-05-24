// ch05_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
int f(int a, int b) {return a+b;}
int f(int a, int &b) {return a*b;}
int f(int a, int *b) {return a-*b;}
int main ()
{
int x=7, y=2;
cout<<f(x,&y)<<endl;    //unambiguous. which f() will be called?
cout<<f(x,y)<<endl;    //ambiguous. which f() will be called?
cout<<f(x,2)<<endl; //unambiguous.
return 0;
}
