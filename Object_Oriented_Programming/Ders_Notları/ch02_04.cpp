// ch02_04.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <locale>

//#include <cstdlib>
//setlocale(LC_ALL,"Turkish");

using namespace std;
class B {   //Define base class
private:
int i;
public: //int i;
void set_i(int n); 
int get_i();
};
class D :public B {  //Define derived class
private:
int j;
public:
void set_j(int n);
int mul(); 
};
void B::set_i(int n)
{i=n;}

int B::get_i()
{return i;}


void D::set_j(int n)
{j=n;}


int D::mul()
{
	//return j*i;
	return j*get_i();

}//get_i();}

int main ()
{ B ob1; D ob2;
ob1.set_i(10);
ob2.set_i(20); 
cout << ob1.get_i() << endl;// "  i=" << ob1.i << endl;
cout << ob2.get_i() << endl;// "  i=" << ob2.i << endl;
ob1.set_i(100);
ob2.set_i(200);
ob2.set_j(30);
cout << ob1.get_i() << endl;// "  i=" << ob1.i << endl;
cout << ob2.get_i() << endl;// "  i=" << ob2.i << endl;
cout<<ob2.mul()<<endl;}
