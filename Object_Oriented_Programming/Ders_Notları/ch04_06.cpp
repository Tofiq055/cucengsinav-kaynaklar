// ch04_06.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
#include <cstring>
using namespace std;
class inventory {
private: char item[20];
double cost;
int on_hand;
public:
inventory(char *i,double c,int o)
{
strcpy(this->item,i);
this->cost=c; this->on_hand=o;
cout<<"in constructor on_hand="<<on_hand<<endl; 
}
~inventory() {cout<<"in destructor on_hand="<<on_hand<<endl;  }
//void show();
//inventory *  show();
inventory   show();
};
//void inventory::show()  {
//	inventory *  inventory::show()  {
inventory  inventory::show()  {
cout<<this->item<<": $"<<this->cost<<" On hand: "<<on_hand<<endl;
return  *this ;}

int main()
{int i;
inventory object_1("wrench",4.95,4), object_2("uuuuuu", 3.95, 64), *p;
//inventory object_2("wwww",1,2);
object_1.show();

//p=object_1.show();

//p=&object_1.show();
object_2=object_1.show();
//p->show();
cin >>i;
object_1.show();
//delete p;
object_2.show();
return 0;
}