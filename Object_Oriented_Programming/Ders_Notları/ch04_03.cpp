// ch04_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>

//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
class samp {
private:  int a,b;
public:
	samp(int n, int m)  {a=n; b=m;cout<<"Constructing object. Values of a="<<a<<" and b="<<b<<endl;}
~samp()  {cout<<"Destructing object.  Value of a="<<a<<" and b ="<<b<<endl;}

int get_a() {return a;}
int get_b() {return b;}
};

int main() 
{setlocale(LC_ALL,"Turkish");
samp object_1[4][2]={
	samp(1,2),samp(3,40),samp(5,6),samp(7,8),samp(9,10),
samp(11,12),samp(13,14),samp(15,16)};
int i;
for (i=0; i<4; i++)
{
cout<<object_1[i][0].get_a()<<"  ";
cout<<object_1[i][0].get_b()<<"        ";
cout<<object_1[i][1].get_a()<<"  ";
cout<<object_1[i][1].get_b()<<"  "<<endl;
}
cout<<endl;
return 0;
}

