// ch02_06.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
#include <cstring>
using namespace std;
class st_type {	double balance; char name[40];
public:
	int a, b;
	st_type(double b, char *n);//constructor
	~st_type() { cout << "In destructor.   Name:" << name << endl; };//destructor
	void show();
//private:  double balance; char name[40];
};

st_type::st_type(double b,char* n)
{balance=b;strcpy(name,n);cout<<"In constructor.  Name:"<<name <<endl ;}
void st_type::show()
{cout<< "Name : "<<name;
cout<< "    Balance (Money in the acount) : "<<balance<<endl;
}
int main() 
{
	setlocale(LC_ALL,"Turkish");
	st_type acount_3(500,"Ali");
	acount_3.show();
	{	st_type acount_2(250, "Ayşe"); acount_2.show();  }
st_type acount_1(125,"Ahmet");
acount_1.show();
return 0;
}
