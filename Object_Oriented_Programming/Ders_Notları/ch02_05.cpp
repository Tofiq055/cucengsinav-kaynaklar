// ch02_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
class myclass  {
private: int a;
public:int b;
myclass (int x, int y);  //constructor 
int get();
};
myclass::myclass(int x,int y)
{a=x; b= y;
}
int myclass::get()
{
return a;
}

int main()
{setlocale(LC_ALL,"Turkish");
myclass ob_1(125,30),ob_2(50,100); //create object
//ob_1.b=10;
ob_2.b=20;
myclass *p; //create pointer to object
p=&ob_1;  //put address of ob_1 into p
cout<<"Value using object  :"<<ob_1.get()<<endl;
cout<<"Value using pointer :"<<p->get()<<endl;
cout<<"Value using object  :"<<ob_1.b<<endl;
cout<<"Value using pointer :"<<p->b<<endl;
p=&ob_2;  //put address of ob_2 into p
cout<<"Value using pointer :"<<p->get()<<endl;
cout<<"Value using pointer :"<<p->b<<endl;
return 0;
}




