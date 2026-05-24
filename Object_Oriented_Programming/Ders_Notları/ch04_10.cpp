// ch04_10.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"


#include <locale>

//setlocale(LC_ALL,"Turkish");

#include<iostream>
using namespace std;
int &f(); //Return a reference
int *f1(); 
int x = 1, y = 10;
int main()
{ cout<<x<<"    "<<y<<endl;
	f()=100;  //assign 100 to reference returned by f().
	//cout << x << endl;
	cout << "   " << x << endl;
	cout << "    " << f() << "   x=" << x << "  f()=" << f() << endl;// y << endl;
	cout << (x++) << endl;
	cout << x << endl;
*f1()=50;
cout << y << "    " << endl;// y << "  " << *f1() << endl;
return 0;}
int &f() //return an int reference.
{//int x;
	x=5;
return x;// returns a reference to x.
}//
int *f1() //return a pointer.
{//int z = 55;
	y = 55;
return &y;// returns a reference to y
}//