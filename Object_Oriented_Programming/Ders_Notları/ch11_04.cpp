// ch11_04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "stdafx.h"

#include <iostream>
using namespace std;
class v1 {public: double x,y,z;
v1(double i,double j,double k){x=i;y=j;z=k;}
v1(){x=10;y=10;z=10;}
};
ostream &operator<<(ostream &stream1, v1 ob)
{
stream1<<"x= "<<ob.x<<", y= "<<ob.y<<", z= "<<ob.z<<endl;
return stream1;
}
template <class type1, class type2> void myfunction(type1 x, type2 y)
{ cout<<x<<"  "<<y<<endl;}
int main(){int i,j;i=10;j=100;v1 z1(3,6,9),z2(5,10,15);
myfunction(10,"hiiiiiiiiii");
myfunction(0.23,10L);
myfunction(i,j);
myfunction(j,10);
myfunction(i,z1);
myfunction(z1,z2);
return 0;
}