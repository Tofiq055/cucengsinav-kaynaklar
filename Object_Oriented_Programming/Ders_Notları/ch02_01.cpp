// ch02_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
class myclass {
private:
int a;
public:
myclass(int);//constructor
~myclass();//destructor
void set_a(int num);
int get_a();
};
void myclass::set_a(int num)
{
a=num;
}
int myclass::get_a()
{
return a;
}
myclass::myclass(int num) //constructor
{a=num;cout<<"The object is created.  a of object is :"<<a<<endl;}
myclass::~myclass() //destructor
{cout<<"The object is deleted.  a of object is :"<<a<<endl;}
int main()
{int x;
//{myclass object_3(55);object_3.set_a(33);}
{myclass object_3(60), object_5(610);}
myclass object_1(5), object_2(10);

cin>>x;//for stopping execution
object_1.set_a(11);object_2.set_a(22);
cout<<"'a' of object_1 is :"<<object_1.get_a()<<endl<<"'a' of object_2 is :"<<object_2.get_a()<<endl;
{myclass object_3(100);object_3.set_a(33);}
{myclass object_4(200);object_4.set_a(43);}
//cout<<"'a' of object_3 is :"<<object_3.get_a()<<endl;
return 0;
}
