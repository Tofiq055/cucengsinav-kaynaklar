// ch06_07.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
class coord {private: // int x,y;
public:  int x,y;
coord ()  {x=0;y=0;}
coord (int i,int j)  {x=i;y=j;}
void get_xy(int &i,int &j) {i=(this->x);j=y;}
void show_xy(char *ch) {cout<<ch<<"  X:"<<x<<",  Y:"<<y<<endl;}
//friend coord operator+(coord &ob1,  int i); 
//friend coord operator+(int i,coord ob1); 
//friend coord operator+(coord ob2,coord ob1);
};
//coord operator+(int i,coord ob1); 

 coord operator+(coord &ob1,  int i); 
coord operator+(int i,coord ob1); 
 coord operator+(coord ob2,coord ob1);

coord operator+(coord ob2,coord ob1)
{coord temp;
temp.x=ob1.x+ob2.x;
temp.y=ob1.y+ob2.y;
return temp;}
coord operator+(coord &ob1,  int i) 
{coord temp;
temp.x=ob1.x+i;
temp.y=ob1.y+i;
return temp;}
coord operator+(int i, coord ob1) 
{coord temp;
temp.x=ob1.x+2*i;
temp.y=ob1.y+2*i;
return temp;}
int main()
{
coord o1(10,5),o2(25,35),o3;
int x,y;
//o1=o1+10; //Object + integer
o1=operator+(o1, 10);//o1=o1.operator+(10);
o1.show_xy("ob1=o1+10 ");
o1=100+o1; // integer + object
//o1=operator+(100,o1);
o1.show_xy("ob1=100+o1");
o3=o1+o2;//o3=operator+(o1, o2);
o3.show_xy("o3=ob1+o2 ");

return 0;
 }

