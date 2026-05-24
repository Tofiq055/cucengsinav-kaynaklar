// ch06_01.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <locale>
//setlocale(LC_ALL,"Turkish");
using namespace std;
class coord {private:
int x,y;
public:
	coord(int i = 1, int j = 2) { x = i; y = j;// cout << "Constructing the object (with initializer)  x,y:" << x << "  " << y << endl;
}
//~coord() {cout<<"Destroying the object x,y:"<<x<<"  "<<y<<endl;}
void show_xy(char *ch) {cout<<ch<<":   X="<<x<<"  Y=" <<y<<endl;}
coord operator+(coord ob2);
coord operator-(coord ob2);
//coord operator=(coord ob2);
void operator=(coord ob2);
coord  operator*(coord ob2);

};
coord  coord::operator+(coord ob2)
{coord temp;
temp.x=this->x+ob2.x;
temp.y=y+ob2.y;
return temp;}
coord  coord::operator-(coord ob2)
{
coord temp;
temp.x=this->x-ob2.x;
temp.y=this->y-ob2.y;
return temp;
}
coord  coord::operator*(coord ob2)
{
coord temp;
temp.x=x*ob2.x;
temp.y=y*ob2.y;
return temp;
}

//coord coord::operator=(coord ob2)
void coord::operator=(coord ob2)
{x=ob2.x;
y=ob2.y;
//return ob2;// *this; //return the object that is assigned. //return *this;//
}
int main() {setlocale(LC_ALL,"Turkish");
coord o1(10,10),o2(5,3),o3(11,21), o4;
int x,y,k;
o3=o1+o2; //o3=o1.operator+(o2); // o3.operator=(o1.operator+(o2));
o3.show_xy("o3");
//cin >> x;

o4 = o1*o2;
o4.show_xy("o4 ");
o3 = o1 + o2+o4;
o3.show_xy("o3 ");
o2 = o3;
o1=o2;
//o3.operator=(o2.operator=(o1));
//o2 = o3;
//o1 = o2;
//cin >> x;
 
o3.show_xy("o3=o1=o2 ");
o2.show_xy("o3=o1=o2 ");
o1.show_xy("o3=o1=o2 ");


return 0;
}
