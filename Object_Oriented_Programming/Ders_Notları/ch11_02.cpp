// ch11_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct v1 {double x,y,z;
void set(double a,double b, double c){x=a;y=b;z=c;};
void show(){cout<<"Values: x="<<x<<"  y="<<y<<"  z="<<z<<endl;};
 v1(double a, double b, double c) { x = a; y = b; z = c; };
 v1() { x = 5; y = 10; z = 20; };
};
struct v2 { double x, y, z; };

template <class X> void swapargs(X &a, X &b)
{ X temp;     temp=a;
a=b;
b=temp;
}
int main() {
	v1 xx(1,2,3), yy(11,12,13); int x, y; v2 xxx, yyy;
x=10;y=20;
cout<<"original x="<<x<<"  y="<<y<<endl;
swapargs(x,y);
cout<<"swapped x="<<x<<"  y="<<y<<endl;

xxx.x=21;xxx.y=22;xxx.z=23;
yyy.x=111;yyy.y=112;yyy.z=113;

cout << "original xxx:   x=" << xxx.x << "  y=" << xxx.y << "   z=" << xxx.z << endl;;
cout << "original yyy:   x=" << yyy.x << "  y=" << yyy.y << "   z=" << yyy.z << endl;;
swapargs(xxx, yyy);
cout << endl << endl;
cout << "after swap xxx:   x=" << xxx.x << "  y=" << xxx.y << "   z=" << xxx.z << endl;;
cout << "after swap yyy:   x=" << yyy.x << "  y=" << yyy.y << "   z=" << yyy.z << endl;;


cout<<"original xx: ";xx.show();
cout<<"original yy: ";yy.show();
swapargs(xx,yy);

cout<<"swapped xx: ";xx.show();
cout<<"swapped yy: ";yy.show();

return 0;
}

