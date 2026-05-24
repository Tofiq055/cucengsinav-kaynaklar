// ch04_01.cpp : Defines the entry point for the console application.
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
~samp()  {cout<<"Destructing object.  Value of a ="<<a<<endl;}
int get_a() {return a;}
};

int main(){setlocale(LC_ALL,"Turkish");
samp object_1[4]={samp(-1),-3,samp(-2),-4};
int i;
samp ob_2[2] = { 100,200 };
cout<<endl;
{samp ob1[2]={1,2};}
cout<<endl;
cin >> i;
for (i=0; i<4; i++) cout<<object_1[i].get_a()<<"  ";
cout<<endl;
cout<<endl;
{samp ob2[2]={10,20};}
cout<<endl;
return 0;
}

