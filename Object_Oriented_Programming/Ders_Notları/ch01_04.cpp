// ch01_04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <cmath>
// function overloading example
//setlocale(LC_ALL,"Turkish");
using namespace std;
int abs1(int n);
long abs1(long n);
double abs1(double n);
int main()
{setlocale(LC_ALL,"Turkish");
	int x=-5; long y=10; double z=-20;
cout <<"Absolute value of integer number:"<<abs1(x)<<endl;
cout<<"Absolute value of long integer number:"<<abs1(y)<<endl;
cout<<"Absolute value of double (reel) number:"<<abs1(z)<<endl;
return 0;
}

//abs1() for integer
int abs1(int n)
{cout<<endl<<"int function is called"<<endl;
return n<0 ? -n:n;
}
//abs1 () for long integer numbers
long abs1(long  n)
{cout<<endl<<"long int function is called"<<endl;
return  labs(n);//n < 0 ? -n : n; // n*n;
}
//abs1 () for double
double abs1(double n)
{cout<<endl<<"double function is called"<<endl;
if (n < 0) n = -n;
return n*n;
//return n<0 ? -n:n;
}





