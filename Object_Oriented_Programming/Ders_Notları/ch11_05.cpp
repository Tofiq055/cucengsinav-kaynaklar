// ch11_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"




#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;

template <class X> void swapargs(X &a, X &b)
{ X temp;     temp=a;
a=b;
b=temp;
}
void swapargs(int &a, int &b) 
{cout<<"this is inside swapargs(int,int)"<<endl;a=a*b;}

int main() {setlocale(LC_ALL,"Turkish");
int i=10,j=20;
double x=10.1,y=23.3;
cout<<"original i,j: "<<i<<"  "<<j<<endl;
cout<<"original x,y: "<<x<<"  "<<y<<endl;
swapargs(i,j);
swapargs(x,y);
cout<<"swapped i,j: "<<i<<"  "<<j<<endl;
cout<<"swapped x,y: "<<x<<"  "<<y<<endl;

return 0;
}