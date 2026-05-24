// ch11_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
/*
template <class X> void swapargs(X &a, X &b)
{ X temp;     temp=a;
a=b;
b=temp;
}
*/

void swapargs(int &a, int &b)
{
	int temp;     temp = a;
	a = b;
	b = temp;
}
void swapargs(double &a, double &b)
{
	double temp;     temp = a;
	a = b;
	b = temp;
}
void swapargs(float &a, float &b)
{
	float temp;     temp = a;
	a = b;
	b = temp;
}


int main() {setlocale(LC_ALL,"Turkish");
int i=10,j=20;
double x=15,y=25;
float x1=155,y1=255;
cout<<"original i,j: "<<i<<"  "<<j<<endl;
cout<<"original x,y: "<<x<<"  "<<y<<endl;
cout<<"original x1,y1: "<<x1<<"  "<<y1<<endl;
swapargs(i,j);
swapargs(x,y);
swapargs(x1,y1);
cout<<"swapped i,j: "<<i<<"  "<<j<<endl;
cout<<"swapped x,y: "<<x<<"  "<<y<<endl;
cout<<"swapped x1,y1: "<<x1<<"  "<<y1<<endl;

return 0;
}
