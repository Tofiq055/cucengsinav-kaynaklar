// ch05_10.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"

#include <iostream>
using namespace std;
void space(int count) {for (;count;count--) cout<<' '; cout<<"end"<<endl;}
void space(int count,char ch) {for (;count;count--) cout<<ch;cout<<"end"<<endl;}
void space1(int count) {for (;count;count--) cout<<'?'; cout<<"end"<<endl;}
int main ()
{
void (*fp1) (int);/*create a pointer to void function with one int parameter.*/
void (*fp2) (int,char);/*create a pointer to void function with one int parameter and one character parameter.*/
void (*fp3) (int);
void (*k) (int);
fp3=space1;
k= space1;
fp1=space; //gets address of space(int).
fp2=space; //gets address of space(int,char).
fp1(22);//output 22 spaces.
fp1(30);
fp2(30,'x');//output 30 x’s.
space(30,'x');
fp3(40);
k(50);
return 0;
}
