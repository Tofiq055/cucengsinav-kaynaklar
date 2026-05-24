// ch02_03.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"

#include <iostream>
using namespace std;


class myclass {
private:
int a;
public:
myclass(int x); //Constructor
~myclass() {  cout << "In Distructor.  a=" << a << endl; };
void show();
};


myclass::myclass(int x)
{ a=x;cout<<"In constructor.  a="<<a<<endl;}


void myclass::show() 
{cout<<"a of the object is: "<<a<<endl;}


int main()
{
	myclass object_1(5), object_2(50); object_2.show(); object_1.show(); return 0;
}



