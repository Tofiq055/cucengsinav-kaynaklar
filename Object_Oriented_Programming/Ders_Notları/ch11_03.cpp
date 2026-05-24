// ch11_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include <fstream>

#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
class v1 {public: double x,y,z;
v1(double i,double j,double k){x=i;y=j;z=k;}
void show(){cout<<"Values: x="<<x<<"  y="<<y<<"  z="<<z<<endl;};
v1(){x=0;y=0;z=0;}
};

template <class X> void swapargs(X &a, X &b)
{ X temp;     temp=a;
a=b;
b=temp;
}
ostream &operator<<(ostream &stream1, v1 ob)
{
stream1<<"x="<<ob.x<<",  y="<<ob.y<<",  z="<<ob.z<<endl;
return stream1;
}

int main() {setlocale(LC_ALL,"Turkish");
v1 xx(1.0,2.0,3.0),yy(11.0,12.0,13.0);
int i=10,j=20;
double x=10.1,y=23.3;

//ofstream f1;//(ios out);
//f1.open("file_1.txt");
cout<<"Orijinal xx"<<endl;
cout<<xx<<yy;
xx.show();
cout<<"Orijinal yy"<<endl;
cout<<yy;
//f1<<yy;
swapargs(xx,yy);
cout<<"xx after calling the swapargs() function "<<endl;
cout<<xx;
cout<<"yy after calling the swapargs() function  "<<endl;
cout<<yy;

return 0;
}
