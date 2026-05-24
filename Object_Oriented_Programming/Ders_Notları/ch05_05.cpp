// ch05_05.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strtype {
private:
char *p;
public:
strtype(const strtype &o);// copy constructor
strtype(char *s);//constructor
~strtype() {
	
	
	 cout<<"Destroying the object. *p: "<<p<<endl; delete[] p;
}//destructor
char *get() {return p;}
};
strtype::strtype(const strtype &o)  //copy constructor.
{int l,i;
l=strlen(o.p)+1;
p=new char [l];
if (!p) {cout<<"Allocation error"<<endl; exit (1);}
strcpy(p, o.p);//for (i = 0; i < l; i++) p[i] = o.p[i];//  strcpy(p, o.p); //copy o.p to p
cout<<"constructing the object using copy constructor.  Length l = "<<l<<"  text *p: "<<p<<endl;} 

strtype::strtype(char *s) {int l;
l=strlen(s)+1;
p=new char [l];
if (!p) {cout<<"Allocation error"<<endl; exit (1);}
strcpy(p,s);
cout<<"Constructing the object. p of the object : "<<p<<endl;}
//void show(strtype x) 
strtype show(strtype x)
{ strtype y("aaaaaaaaaaaaa");// 
cout<<x.get()<<endl;return y;
}
int main ()
{setlocale(LC_ALL,"Turkish");int i;
strtype a("Hello"), b("There"),c("xxx");
b=show(a);

//c=show(a);//
//cin>>i;

//c=show (b);

cin>>i;
return 0;
}