// ch11_08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include "stdafx.h"

#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;

struct addr {int a,b,c; addr(int x,int y, int z) {a=x;b=y;c=z;};
addr() {a=0;b=0;c=0;}; void setaddr(int x,int y, int z) {a=x;b=y;c=z;};};

ostream &operator<<(ostream &stream , addr addrx)
{stream<<"a="<<addrx.a<<"  b="<<addrx.b<<"  c="<<addrx.c;return stream;};

template <class Type1, class Type2> class myclass
{
Type1 i;Type2 j;
public:
myclass(Type1 a, Type2 b) {i=a;j=b;}
void show() {cout<<"Type1 : "<<i<<endl<< "Type2 : " << j<<endl;}
};
int main() {setlocale(LC_ALL,"Turkish");
	myclass<int, double> ob1(10, 0.23);
myclass<char, char *> ob2('X',"This is a test");
addr addr1(0,10,100),addr2(20,40,500);

myclass<addr, addr> ob3(addr1, addr2);
myclass<addr, float> ob4(addr1, 11.234);
myclass<float,addr > ob5(11.234,addr1);

ob1.show();
cout<<endl;
ob2.show();
cout<<endl;
ob3.show();
cout<<endl;
ob4.show();
cout<<endl;
ob5.show();
return 0;
}//