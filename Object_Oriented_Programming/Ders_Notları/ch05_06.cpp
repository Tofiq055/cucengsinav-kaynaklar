// ch05_06.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"

#include <iostream>
using namespace std;




void f(int x, int y,int z)
{
	int a = x; int b = y; int c = z;
	cout << "a: " << a << ",  b: " << b << ",  c: " << c << endl;
}
void f(int x, int y)
{
	int a = x; int b = y;
	 int c = 150;
	cout << "a: " << a << ",  b: " << b << ",  c: " << c << endl;
}
void f(int x)
{
	int a = x;
	 int  b = 50; int c = 150;
	cout << "a: " << a << ",  b: " << b << ",  c: " << c << endl;
}
void f()
{
	 int a = 5; int  b = 50; int c = 150;
	cout << "a: " << a << ",  b: " << b << ",  c: " << c << endl;
}

/*
void f(int a = 5, int b = 50, int c = 150)
{
	cout << "a= " << a << ",  b= " << b << ",  c= " << c << endl;
}*/
int main (){
f();
f(100);
f(10,20);
f(10,20,30);
f(0,20);
return 0;
}
