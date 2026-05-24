// ch11_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
 const int SIZE=10;
struct addr {public:int a,b,c;}; //
ostream &operator<<(ostream &stream , addr addrx)
{stream<<"Value of a="<<addrx.a<<"   Value of b="<<addrx.b<<"   Value of c="<<addrx.c;return stream;};

template <class StackType> class stack
{//const static int SIZE=10;
StackType stck[SIZE]; //holds the stack
public:int tos; //index of top of stack;
	void init() {tos=0;} ;//initialize stack
int push(StackType ob) //push object on stack
{
	if (tos == SIZE) { cout << "stack is full. \n"; return 0; }
	stck[tos] = ob; tos++; return 1;
}
StackType pop() //pop object from stack
{if (tos==0) {  cout<<"stack is empty. \n";  return stck[0];}
tos--;
return stck[tos];}
};
int main() {setlocale(LC_ALL,"Turkish"); 
    stack <char> s1,s2; int i;
s1.init(); s2.init();
s1.push('a');s1.push('b');s1.push('c');
s2.push('x'); s2.push('y'); s2.push('z');
for (i=0;i<3;i++) cout<<"pop s1:"<<s1.pop()<<endl;
for (i=0;i<3;i++) cout<<"pop s2:"<<s2.pop()<<endl;
stack <double> ds1,ds2;
ds1.init(); ds2.init();
ds1.push(1.1);ds1.push(2.2);ds1.push(3.3);
ds2.push(4.4);ds2.push(5.5);ds2.push(6.6);
for (i=0;i<3;i++) cout<<"pop ds1:"<<ds1.pop()<<endl;
for (i=0;i<3;i++) cout<<"pop ds2:"<<ds2.pop()<<endl;

cout<<endl<<endl;
addr addr1;
stack <addr> ads1;
ads1.init(); 
for(i=1;i<6;i++){ addr1.a=i;addr1.b=10*i;addr1.c=100*i;
ads1.push(addr1);}
//for (i=1;i<6;i++) {cout<<"pop ads1:"<<ads1.pop()<<endl;}
while(ads1.tos>0){cout<<"pop ads1:"<<ads1.pop()<<endl;}
return 0;}