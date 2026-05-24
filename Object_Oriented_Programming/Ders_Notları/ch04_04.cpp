// ch04_04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class samp {
private:  int a,b;
public:
samp(int n, int m)  {a=n; b=m;}
int get_a() {return a;}
int get_b() {return b;}
};
int main() 
{
samp object_1[4]={
samp(1,2),samp(3,4),samp(5,6),samp(7,8)};
int i;
samp *p,*q;
p=object_1; // get starting address of array.
q=object_1;
for (i=0; i<4 ;i++)
{
cout<<q->get_a()<<"  ";
cout<<q->get_b()<<"  "<<endl;
cout<<p[i].get_a()<<"  ";
cout<<p[i].get_b()<<"  "<<endl;
cout<<object_1[i].get_a()<<"  ";
cout<<object_1[i].get_b()<<"  "<<endl;
//p++; //advance to next object.
q++;
}
cout << endl;
for (i = 0; i<4; i++)
{
	cout << object_1->get_a() << "  ";
	cout << object_1->get_b() << "  " << endl;
	
}
cout<<endl;
return 0;
}
