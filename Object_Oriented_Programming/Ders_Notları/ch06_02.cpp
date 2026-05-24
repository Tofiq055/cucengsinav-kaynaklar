// ch06_02.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
class coord {private:
int x,y;
public:
coord ()  {x=0;y=0;}
coord (int i,int j)  {x=i;y=j;}
void show_xy(char *ch) {cout<<ch<<"  X:"<<x<<",  Y:"<<y<<endl;}
coord operator+(coord ob2);
coord operator+(int i);
};
coord  coord::operator+(coord ob2)
{coord temp;
temp.x=x+ob2.x;
temp.y=y+ob2.y;
return temp;}
coord  coord::operator+(int i)
{coord temp;
temp.x=x+i;
temp.y=y+i;
return temp;}

int main() {
coord o1(10,20),o2(5,3),o3;
int x,y;
o3 = o1 + o2; //o3=o1.operator+(o2);
o3.show_xy("o3=o1+o2 ");
o3=o3+100; //o3=o1.operator+(100);
o3.show_xy("o3=o3+100 ");

//o3=200+o2; //o3=200.operator+(o2); this is not correct.
return 0;
}