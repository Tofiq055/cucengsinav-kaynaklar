// ch11_06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <locale>
//setlocale(LC_ALL,"Turkish");


#include <iostream>
#include <cstring>
using namespace std;

//struct addr {int a,b,c;}; //
struct addr {int a,b,c;char d[10]; addr(int x,int y, int z) {a=x;b=y;c=z;strcpy(d,"fffff");};
addr() {a=10;b=20;c=30;};
void setaddr(int x,int y, int z,char zz[10]) {a=x;b=y;c=z;strcpy(d,zz);};};
ostream &operator<<(ostream &stream , addr addrx)
{stream<<"a="<<addrx.a<<"  b="<<addrx.b<<"   c="<<addrx.c<<"   d="<<addrx.d;return stream;};

template <class data_t> class list
{
data_t data;
list *next;
public:
list(data_t d)
{
data=d;next=0;
}
void add(list *node) {node->next=this;this->next=0;}
list *getnext () {return next;}
data_t getdata () {return data;}
};
int main() {setlocale(LC_ALL,"Turkish");
list<char> start('a'),*p,*last;
int i;char kk1[10];strcpy(kk1,"a");
last=&start;
for(i=1;i<26;i++){ 
p=new list<char> ('a'+i);
p->add(last);
last=p;}
p=&start;//follow the list
i = 0;
while (p) {
	i++;
	cout << p->getdata() << "  " ;
	if (i == 10) {i = 0; cout << endl;
}
p=p->getnext();
}
cout << endl;

addr addr1(1,2,3);
list<addr> start1(addr1),*p1,*last1;
last1=&start1;
for(i=1;i<6;i++){strcat(kk1,"c"); addr1.setaddr(i,10*i,100*i,kk1);
p1=new list<addr> (addr1);
p1->add(last1);
last1=p1;
}
p1=&start1;//follow the list

while(p1){
//cout <<p1->getdata()<<endl;
	addr1=p1->getdata();
		cout<<"a="<<addr1.a<<"  "<<"b="<<addr1.b<<"  "<<"c="<<addr1.c<<"  "<<"d="<<addr1.d<<"  "<<endl;
p1=p1->getnext();
}

return 0;
}