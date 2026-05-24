// ch10_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
class base {private: int x;
public:
void setx(int i) {x=i;}
int getx() {return x;}};
class derived :public base {private: int y;
public:
void sety(int i) {y=i;}
int gety() {return y;}};
int main() {setlocale(LC_ALL,"Turkish");
base *p,b_ob; 
derived d_ob,*p1;
p=&b_ob;
p1=&d_ob;
p1->sety(199);
cout << "Derived object  y:" << p1->gety() << endl;
p1->setx(299);
cout << "Derived object  x:" << p1->getx() << endl;

p->setx(10);//access base object
cout<<"Base object  x:"<<p->getx()<<endl;
cout<<"Base object  x:"<<b_ob.getx()<<endl;
p=&d_ob;
p->setx(99);//access derived object
//p->sety(99);
cout<<"Derived object  x:"<<d_ob.getx()<<endl;
cout<<"Derived object  x:"<<p->getx()<<endl;
cout<<"Base object  x:"<<b_ob.getx()<<endl;



//d_ob.sety(50);
//cout<<"Derived object y:"<<d_ob.gety()<<endl;
//p->sety(50);
//cout<<"Derived object  y:"<<d_ob.gety()<<endl;
/*
p1->setx(9999);//access derived object
cout<<"Derived object  x:"<<p1->getx()<<endl;
d_ob.sety(5000);
cout<<"Derived object y:"<<d_ob.gety()<<endl;
p1->sety(5555);

//cout<<"Drived object  y:"<<p1->gety()<<endl;
*/
return 0;
}