// ch04_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
#include <cstring>
using namespace std;
class inventory {
private: char item[24];
double cost; int on_hand;
public:
inventory(char *i,double c,int o) {
strcpy(item,i);
this->cost=c; on_hand=o;
cout << "constructer item=" << item << "  this=" << (char *) this << endl;//  (int ) this  << endl;
cout <<"size="<< sizeof(*this) << endl;}
~inventory() {
	double *a; a = (double *) this; cout <<"ccc="<<*a<<"item="<<item<<"  this="<< this <<  "Destructor  item=" << *(a + 3) << endl;
int *b; b = (int *) this; cout << "b=" << *(b + 8) << endl;
}
void show();
void f1() { this->show(); };
};
void inventory::show()  {
cout<< this->item<<": $"<<cost<<":  $"<<" On hand: "<<this->on_hand<<"This  adress:"<<this<<endl;}
int main()
{inventory object_1("wrench", 4.95, 4);// , object_2("ggggg", 3, 5);
object_1.show();
//object_2.show();
//object_1.show();
//object_2.show();
//object_2.f1();

return 0;
}