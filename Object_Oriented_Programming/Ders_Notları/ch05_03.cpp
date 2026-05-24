// ch05_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");
#include<iostream>
using namespace std;
class myclass
{
private: int x;
public:
myclass () {x=5;cout<<"No initializer. Value of x= "<<x<<endl;} //No initializer 
myclass (int n) {x=n;cout<<"Initializer. Value of x= "<<x<<endl;} //initializer
~myclass () {cout<<"Destroying the object. Value of x= "<<x<<endl;} //No initializer

int getx() {return x;}
void setx(int n) {x=n;} 
};

int main()
{setlocale(LC_ALL,"Turkish");
	myclass *p,*q,object_1(10);
	p=new myclass[10];//No initializer
if(!p) 
{
cout<<"allocation error"<<endl;return 1;
}
	q=new myclass(75);//initializer
if(!q) 
{
cout<<"allocation error"<<endl;return 1;
}
//myclass object_2(100);
int i;
cin>>i;
for (i=0;i<10;i++) {p[i].setx(i*i);} //p[i]=object_1;}
//p=p-10;
for (i=0;i<10;i++)
{
cout<<"object["<<i<<"].x:"<<p[i].getx()<<"  "<<endl;
}
 delete [] p;delete q;
return 0;
}

