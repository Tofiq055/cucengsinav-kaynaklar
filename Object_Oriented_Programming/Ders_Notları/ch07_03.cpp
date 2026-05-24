// ch07_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
class base {int x;
protected: int a, b;
public: void setab (int  n, int m)  {a=n; b=m;}
		int y;
void showab () {cout<<"a="<<a<<"  "<<"b="<<b<<endl;}
};
class derived :public base { private : int c;
public:
	void setabb(int  n, int m) {
		setab(n, m);// a = n; b = m;// setab(n, m);
}
void setc (int n) { c=n;}
void showabc () {cout<<"a="<<a<<"  b="<<b<<"  c="<<c<<endl;}
void showabb() {
	showab();
}
};
int main () {derived ob;base ob_2;
ob.setab(1,2); ob.setc(3); ob_2.setab(10,20);
ob.showab();
ob.showabc();  ob_2.showab(); ob_2.y = 0;
return 0;}


