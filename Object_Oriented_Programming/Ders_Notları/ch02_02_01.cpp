// ch02_02_01.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <locale>
#include <cstring>
#include <cstdlib>
//setlocale(LC_ALL,"Turkish");
using namespace std;
class strtype {
private:
	char *p;
	int len;
public:
	strtype(char *pp);//constructor
	~strtype();//destructor
	void set(char *ptr);
	void show();
};
//Initialize a string object
strtype::strtype(char *pp) {
	cout << "Initializing the object  :" <<pp<< endl;
	p = (char *)malloc(1+strlen(pp));
	if (!p)  {cout << "Allocation error" << endl;  exit(1);}
	strcpy(p, pp);
	len = strlen(p);  }
//Free memory when destroying string object
strtype::~strtype() {
	cout << "Freeing p.   text :" << p << "\n"; free(p);
	//show();cout<<endl;
}
void strtype::set(char *ptr) {
	free(p);
	p = (char *)malloc(1 + strlen(ptr));
	if (!p) 	{cout << "Allocation error" << endl;  exit(1);}
	strcpy(p, ptr);
	len = strlen(p);
}
void strtype::show(){
	cout << p << ".   Lenght of the string is :" << len << endl;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	strtype s1("xxxxx"), s2("YYYYYYYY");
	s1.show();
	s2.show();
	s1.set("This is a test");
	s2.set("I like C++.");
	s1.show();
	s2.show();
	return 0;
}

