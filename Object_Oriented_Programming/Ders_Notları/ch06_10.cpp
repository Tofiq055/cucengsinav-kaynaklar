// ch06_10.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;
const int SIZE=10;
class arraytype
{
int a[SIZE];
public://int a[SIZE];

arraytype () { int i; for (i=0;i<SIZE;i++) a[i]=i;}
int &operator[](int i) {return a[i];}
};
int main ()  {
arraytype ob,ob1[10]; int i,j;
for (i=0;i<SIZE;i++)  cout<<ob[i]<<"   "; cout<<endl;
for (i=0;i<SIZE;i++)
ob[i]=ob[i]+20;//  
for (i=0;i<SIZE;i++)  cout<<ob[i]<<"   "; cout<<endl;
//for (i=0;i<SIZE;i++)  cout<<ob.a[i]<<"   "; cout<<endl;
//for (i=0;i<SIZE;i++) ob.a[i]=ob.a[i]+10;//   
//for (i=0;i<SIZE;i++)  cout<<ob.a[i]<<"   "; cout<<endl;
for (j = 0; j < 10; j++) {
	for (i = 0; i < SIZE; i++)  ob1[j][i]= 10*j+ob1[j][i];
}
for (j=0;j<10;j++) {
	for (i=0;i<SIZE;i++)  cout<<ob1[j][i]<<"   "; cout<<endl;}
return 0;
}




