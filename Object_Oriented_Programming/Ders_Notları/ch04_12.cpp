// ch04_12.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"

#include <iostream>
using namespace std;
int main ()
{
	int y;
	int &ref2 = y;
int x;
int *ref;
ref=&x;
int &ref1=x;
ref1=5;
x=10;
cout<<x<<"   "<<*ref<<"   "<<ref1<<endl;
*ref=100; //x=ref=100;
cout<<x<<"   "<<*ref<<"   "<<ref1<<endl;
ref1=15;
cout<<x<<"   "<<*ref<<"   "<<ref1<<endl; //this prints the number 100 three times

cout << endl;
y = 50;

cout << y << "   " << ref2 << endl;

ref2 = 500;

cout << y << "   " << ref2 << endl;
cout << &y << "   " << &ref2 << endl;
return 0;
}
