// ch04_08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>

//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
void f(int *n);
void f(int &n); //declare a reference parameter
void f2(int n);
int main() 
{ int i=10;
cout<<"Here is i's original value : "<<i<<endl;
f(&i);
cout<<"Here is i's new value : "<<i<<endl;
f(i);
cout<<"Here is i's new value (passing by reference. C++'s way): "<<i<<endl;
f2(i);
cout << "Here is i's new value (passing by value): " << i << endl;

return 0;
}
void f(int *n) { *n = 100; }//put 100 into the argument pointed to by n.
void f(int &n) { n = 50; }//put 100 into the argument used to call f1()
void f2(int n) { n = 250; }








