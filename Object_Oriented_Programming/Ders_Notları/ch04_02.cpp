// ch04_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>

//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
class samp {
private:  int a;
public:
samp(int n)  {a=n;cout<<"Constructing object.  Value of a ="<<a<<endl;}
~samp()  {cout<<"Destructing object. Value of a ="<<a<<endl;}
int get_a() {return a;}
};
int main() {setlocale(LC_ALL,"Turkish");
samp object_1[4][2]={samp(1),20,4,3,5,6,7,samp(85)};
//int i;
for (int i=0; i<4 ;i++) {
cout<<object_1[i][0].get_a()<<"  ";
cout<<object_1[i][1].get_a()<<"  ";
cout<<endl;
}
return 0;
}
