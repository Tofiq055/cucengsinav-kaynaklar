// ch06_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"
#include <iostream>
using namespace std;
class coord {private:
int x,y;
public:
//coord ()  {x=0;y=0;}
coord (int i=0,int j=0)  {x=i;y=j;}
coord  &operator++();
//void operator++();
void show_xy(char *ch) {cout<<ch<<"  X:"<<x<<",  Y:"<<y<<endl;}
coord operator++(int );

};
coord  &coord::operator++() //prefix increment
//void coord::operator++()
{++x;y++;
return *this;
}
coord  coord::operator++(int notused) //postfix increment
{coord temp;
temp.x = x;// ++;
temp.y = y;// ++;
++x; y++;
return temp;}
int main(){coord o1(10,20),o2,o3;int x,y;
++o1;//o1++; o1.operator++();
//o1.operator++();
o1.show_xy("o1 ");
o2=++o1; //prefix increment.
//++o1; o2 = o1;
o1.show_xy("o1 ");
o2.show_xy("o2 ");
o2=o1++; //postfix increment o2=o1.operator++(3); 
//o2 = o1; o1++;
o1.show_xy("o1 ");
o2.show_xy("o2 ");

o2 = o1.operator++();
o1.show_xy("o1 ");
o2.show_xy("o2 ");

return 0;
}
