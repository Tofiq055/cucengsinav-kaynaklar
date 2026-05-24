// ch07_04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
class base { protected : int a,b;
public: void setab (int  n, int m)  {a=n; b=m;}
};
class derived :protected base { private: int c;
public:
void setc (int n) { c=n;}
void showabc () {cout<<a<<"  "<<b<<"  "<<c<<endl;}
void setabb(int  n, int m) { setab(n, m); }
};
int main () {derived ob;ob.setc(3); base bo1;
bo1.setab(10,20);
ob.setabb(1,2);  //Error setab() is a protected member of base and is not accessible here.
ob.showabc();  
return 0;}
