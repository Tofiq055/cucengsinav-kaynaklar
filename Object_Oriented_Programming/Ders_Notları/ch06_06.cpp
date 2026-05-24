// ch06_06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class coord {private: int x,y;
public:
coord (int i=0,int j=0)  {x=i;y=j;}
void get_xy(int &i,int &j) {i=x;j=y;}
void  show_xy(char *ch) {cout<<ch<<"  X="<<x<<",  Y="<<y<<endl;}
coord operator-(); //Unary operator
//void operator-();
coord operator-(coord ob2);  //Binary operator
};
coord coord::operator-(coord ob2)
{ coord temp;
temp.x=x-ob2.x;
temp.y=y-ob2.y;
return temp;
}
coord  coord::operator-() //Unary operator
//void coord::operator-()
{
	coord temp;
	temp.x = -x;
	temp.y = -y;
		return temp;
	
	//x=-x;y=-y;
	//return *this;
}
int main()
{
coord o1(10,10),o2(5,7);
int x,y;
o1=o1-o2; //Substraction  o1.get_xy(x,y);
o1.show_xy("(o1=o1-o2:)  o1= ");

//o1=-o1; //Negation
-o1;
o1.show_xy(" (-o1:)  o1= ");
//o2=-o1;
//-o1;
o2 = -o1;
o1.show_xy("  (o2=-o1:)  o1= ");
o2.show_xy("     (o2=-o1:)  o2=  ");
return 0; }
