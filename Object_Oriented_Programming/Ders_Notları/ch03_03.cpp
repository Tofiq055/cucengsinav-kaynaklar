// ch03_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>

//setlocale(LC_ALL,"Turkish");

using namespace std;
class samp {
private:
int i;
public :
	samp(int n) { i = n; cout<<"object is created. The value of i ="<<i<<endl;}
	//samp() { i = 0; cout << "object is created (without parameters). The value of i =" << i << endl; }
	~samp() {cout<<"object is destroyed. The value of i  ="<<i<<endl;}
void set_i(int n) {i=n;}
int get_i(){return i;}
};
void sqrt_it(samp o)
{samp x(55);
o.set_i(o.get_i()*o.get_i());
cout<<"The value of i of the passed object:"<<o.get_i()<<endl;
cout << "The value of i of the object x:" << x.get_i() << endl;
}
int main(){setlocale(LC_ALL,"Turkish");
samp a(10);// a.set_i(10);
samp b(50);
sqrt_it(a);
sqrt_it(b);
int k;
cin>>k;
cout << "The value of i : " << a.get_i() << endl;
cout << "The value of i : " << b.get_i() << endl;
cout << endl;
b.set_i(150);
cout<<"The value of i : "<<a.get_i()<<endl;
cout << "The value of i : " << b.get_i() << endl;
return 0;
}
