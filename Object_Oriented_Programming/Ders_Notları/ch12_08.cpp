// ch12_08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;


class B {
public:public:int x,y;float z;

};
class D : public B {
public:int x1,y1;double z1;
};

void f(const int *p)
{int *v;
v=const_cast<int *>(p);
*v=100;
//*p=120;
}

int main() { int i;B x,*xx;D z,*yy; D *z;x.x=1;x.y=2;x.z=3;
y.x=10;y.y=20;y.z=30;y.x=11;y.y1=12;y.z1=13;
//x=static_cast<B>(y);
cout<<x.x<<" "<<x.y<<" "<<x.z<<" "<<endl;
xx=&x;
xx=static_cast<B *>(&y);
cout<<xx->x<<" "<<xx->y<<" "<<xx->z<<" "<<endl;

/*

char *p="This is a stringggggggggggg";
i=reinterpret_cast<int &>(*p);//cast pointer to integer.
cout<<i<<endl<<p<<endl;

p="Uhis is a stringggggggggggg";
i=reinterpret_cast<int &>(*p);//cast pointer to integer.
cout<<i<<endl<<p<<endl;

/*

int x=99;
cout<<"x before call: "<<x<<endl;
f(&x);
cout<<"x after call: "<<x<<endl;

x=88;
cout<<"x after call: "<<x<<endl;
f(&x);
cout<<"x after call: "<<x<<endl;*/
return 0;
}

