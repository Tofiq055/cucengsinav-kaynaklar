// ch06_08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class coord {
private: int x,y;
public:  //int x, y;
coord ()  {x=0;y=0;}
coord (int i,int j)  {x=i;y=j;}
void get_xy(int &i,int &j) {i=x;j=y;}
void show_xy(char *ch) {cout<<ch<<"  X:"<<x<<",  Y:"<<y<<endl;}
friend coord &operator++(coord &ob); 
friend coord operator++(coord &ob,int ) ;
//coord operator++(); 
};
/*coord &operator++(coord &ob); 
coord operator++(coord &ob,int notused); */
coord &operator++(coord &ob)  //coord  coord:: operator++() 
{
ob.x++;//++ob.x;
++ob.y;
return ob;
}
coord operator++(coord &ob,int notused) 
{coord temp;
temp.x = ob.x;
temp.y = ob.y;
//temp=ob;
ob.x++; ++ob.y;
	//temp.x=ob.x++;
		//temp.y=ob.y++;

return temp;
}


int main()
{
coord o1(10,20),o2,o3;
int x,y;
o2=++o1; //o1 is passed by referance.
o1.show_xy("o1");
o2.show_xy("o2");

//o3 = o2++;
o3 = operator++(o2,3);
o1.show_xy("o1");
o2.show_xy("o2");
o3.show_xy("o3");
cin>>x;
//o3=++o1;
o3 = operator++(o1);
o1.show_xy("o1");
o3=o1++;
o1.show_xy("o1");
o3.show_xy("o3");
return 0;
 }
