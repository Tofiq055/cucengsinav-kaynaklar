// ch10_04.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"


#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
class area {double dim1,dim2;//
public:
void setdim (double d1,double d2)  {dim1=d1;dim2=d2;}
void getdim (double &d1,double &d2) {d1=dim1;d2=dim2;}
virtual double getarea()=0; //Pure virtual function
//virtual double getarea() {cout<<"You must override this function"<<endl; return 0.0;}
};
class rectangale :public area {
public:   double getarea(){ double d1,d2;
getdim(d1,d2);
return d1*d2;} 
};
class triangale :public area {
public:  
	
	 double getarea(){ double d1,d2;
getdim(d1,d2);
return 0.5*d1*d2;}   };
int main() {
	area *p;// , ob1;// (4, 8);
rectangale r;
triangale t;
//area x;
//ob1.setdim(10.0, 15.0);
//p = &ob1;
//cout << "Base has area: " << p->getarea() << endl;
r.setdim(10.0,5.0);
t.setdim(4.0,5.0);
p=&r;
cout<<"Rectangle has area: "<<p->getarea()<<endl;

p=&t;
cout<<"Triangle has area: "<<p->getarea()<<endl;
cout<<"Triangle has area: "<<t.getarea()<<endl;
//p=&x;cout<<"Base has area: "<<p->getarea()<<endl;
return 0;
} 
