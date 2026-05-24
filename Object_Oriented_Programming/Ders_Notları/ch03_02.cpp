// ch03_02.cpp : Defines the entry point for the console application.
//

#include <locale>
//setlocale(LC_ALL,"Turkish");
#include "stdafx.h"

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strt_type {
private:
char *p;
int len;
public:
	double y;
strt_type(char *ptr);//constructor
~strt_type();//destructor
void show();
void set(char *ptr,double x);
};
strt_type::strt_type(char *ptr)
{ cout<<"in constructor   "<<ptr<<endl;
	len=strlen(ptr)+1;
p=(char *) malloc(len);
if (!p) 
{cout<<"Allocation error"<<endl;  exit(1);}
strcpy(p,ptr);
}
//destructor
strt_type::~strt_type()
{
		 cout<<"freeing p.   The value of y is :"<<y<<endl;  free(p);
}
void strt_type::show()
{
cout<<p<<"  The length of the string is : "<<len<<"   The value of y is : "<<y<<endl;
}
void strt_type::set(char *ptr,double x)
{ y=x;
len= strlen(ptr)+1;     free(p);p=(char *) malloc(len);
if (!p)  {cout<<"Allocation error "<<endl;  exit(1);}
strcpy(p,ptr);
}
int main()
{
	int i;
	
	int x; //setlocale(LC_ALL, "Turkish"); 
	strt_type s1("xxxxxxx");
	strt_type s2("yyyyyy");
	s1.y = 8;
	s2.y = 9;
	s1.show();
	s2.show();
	s1.set("This is a test", 10);
	s2.set("I like C++", 20);
	s1.show();
	s2.show();
	cin >> i;
	s2 = s1; //This generates an error.
	s1.show();
	s2.show();

	cout << endl;
s2.set("uuyyy",50);
s1.show();
s2.show();
s1.set("rrruuuuuuuuuuuuuuuuuuuuuuuu", 500);
cout << endl;
s1.show();
s2.show();

cin>>i; 
return 0;

}

