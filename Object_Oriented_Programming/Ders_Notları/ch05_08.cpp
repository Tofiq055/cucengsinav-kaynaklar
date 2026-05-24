// ch05_08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float f(float i) {cout<<"float  ";return i/2;}
double f(double i) {cout<<"double   ";return i/5;}
//int f(int i) { cout << "int   "; return i /10; }
void f1(unsigned char c) {cout<<c<<endl;}
void f1( char c) {cout<<c<<endl;}
int main ()
{float x = 10.0; double y = 10.0; float z = 50; unsigned char cc = 86; char xx = 90;
cout<<f(x)<<endl; //unambiguous
cout<<f(y)<<endl; //unambiguous
cout<<f(100)<<endl; //ambiguous. convert 10 to double or float?.
f1('c');
f1((char)86);
//f1(86);//ambiguous. '86' is a char or unsigned char?
f1(cc);
f1((unsigned char)0xA0);
f1(xx);
return 0;
}
