// ch06_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strtype {private: //char *p;int len;
public:char *p;
	   int len;
strtype(char *s);//constructor

strtype(const strtype &ob1);

~strtype() {delete []p;}//destructor
char *get() {return p;}
//strtype &operator=(strtype &ob); //void operator=(strtype &ob);
 strtype operator=(strtype ob );
void set(char *s)
{int len_s=(strlen(s)+1);
	 delete [] p; p=new char [len_s];len=len_s;
 strcpy (p,s);   } //for(i=0;i<len;i++) p[i]=s[i];
};



strtype::strtype(char *s)
{int l;
l=strlen(s)+1;
p=new char [l];
if (!p) {cout<<"Allocation error"<<endl; exit (1);}
strcpy(p,s);len=l;
}
strtype::strtype(const strtype &ob1) //copy constructor
{
	 p = new char[ob1.len];
	 if (!p) { cout << "Allocation error" << endl; exit(1); }
	len = ob1.len; strcpy(p, ob1.p);
}

//void strtype::operator=(strtype &ob) 
//strtype &strtype::operator=(strtype &ob)  //{//Assign an object

strtype strtype::operator=(strtype ob)
{
	delete [] p; p=new char [ob.len];
int i;
len=ob.len; strcpy (p,ob.p);//for (i=0;i<len;i++) p[i]=ob.p[i];
return ob;//return *this;
} 

int main(){ strtype a("Hello"),b("There is someone"),c("wwww kkk");int i;
cout << "a= " << a.get() <<"   len="<<a.len<<   endl;
cout << "b= " << b.get() << "   len=" << b.len << endl;
cout << "c= " << c.get() << "   len=" << c.len << endl;
cout<<endl;
a=b=c;
//a.operator=(b.operator=(c));
//b = c;
//a=b;

cout << "a= " << a.get() << "   len=" << a.len << endl;
cout << "b= " << b.get() << "   len=" << b.len << endl;
cout << "c= " << c.get() << "   len=" << c.len << endl;
cout<<endl;
a.set("llllll");
c.set("fffffffffffff");
b.set("tttt");
cout<<"a= "<<a.get()<< "   len=" << a.len << endl;
cout<< "b= " << b.get()<< "   len=" << b.len << endl;
cout<< "c= " << c.get()<< "   len=" << c.len << endl;
cout << endl;
a = b = c;
cout << "a= " << a.get() << "   len=" << a.len << endl;
cout << "b= " << b.get() << "   len=" << b.len << endl;
cout << "c= " << c.get() << "   len=" << c.len << endl;
cout << endl;
//cin>>i;
return 0;}
