// ch03_04.cpp : Defines the entry point for the console application.
//

#include <locale>
//setlocale(LC_ALL,"Turkish");
#include "stdafx.h"
#include <iostream>
using namespace std;
class samp {
private:
int i;
public :
	samp(int n) {i=n;cout<<"Creating object. The value of i : "<<i<<endl;}
~samp() {cout<<"Destroying object. The value of : "<<i<<endl;}
void set_i(int n) {i=n;}
int get_i(){return i;}
};
/*
samp sqrt_it(samp o) 
{samp x(5);
o.set_i(o.get_i()*o.get_i());
cout<<"The value of i of the passed object (by value) : "<<o.get_i()<<endl;
//x=o;
x.set_i(25);
return x;
}
*/
void sqrt_it_1(samp *o)
{
	//samp x(5);
o->set_i(o->get_i()*o->get_i());
cout<<"the object passed by pointer : "<<o->get_i()<<endl;
}
void sqrt_it_2(samp &o)
{
	//samp x(5);
o.set_i(o.get_i()*o.get_i());
cout<<"the object passed by reference : "<<o.get_i()<<endl;
}
int main(){setlocale(LC_ALL,"Turkish");
samp a(10),b(20);
int i;
//sqrt_it(a);
//cin >> i;
//b=sqrt_it(a);
//cin >> i;
//cout<<"The valu of i : "<<a.get_i()<<endl;
//a.set_i(50);
cout << "The valu of i : " << a.get_i() << endl;
cout << "The valu of i : " << b.get_i() << endl;
sqrt_it_1(&a);//pointer
sqrt_it_1(&b);//pointer
//sqrt_it_2(a);//reference
//sqrt_it_2(b);
			 //sqrt_it(a);
cin >> i;
cout<<"The valu of i : "<<a.get_i()<<endl;
cout << "The valu of i : " << b.get_i() << endl;
return 0;
}

