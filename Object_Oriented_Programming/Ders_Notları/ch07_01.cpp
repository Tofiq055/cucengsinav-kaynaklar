// ch07_01.cpp : Defines the entry point for the console application.
//




#include "stdafx.h"

#include <iostream>
using namespace std;
class base { private : int x;
public:
void setx (int n) {x=n;}
void showx () {cout<<"x="<<x<<endl;}
int getx () {return x;}
};
class derived :public base { int y;
public:
void sety (int n){y=n;}//setx(m);
void showy () {cout<<"y="<<y<<endl;}//showx();
void setxy(int n, int m) {  setx(n); y = m; }//setx(m);
void setxx(int n) { setx(n); }//setx(m);
void showxy () {showx ();cout<<"y="<<y<<endl;}
void showxx() { showx(); }
};
int main() 
{derived do1; base bo1;
do1.setx(10);// access member of base class
do1.showx();
do1.sety(20);// access member of derived class
do1.showx();// access member of base class
do1.showy();// access member of derived class

do1.setxy(100,220);
do1.setxx(101);

do1.showxy();
do1.showx();

bo1.setx(500);
bo1.showx();
return 0;}
