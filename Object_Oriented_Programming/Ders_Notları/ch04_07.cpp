// ch04_07.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <locale>

//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
class samp { private:  int a,b;
public:
void set_ab(int i, int j) {a= i; b= j;}
int get_product() {return a*b;}  
samp() { a = 1; b = 2; cout << "constructing object (witout parameters)  a=" <<a<<"  b="<<b<< endl; }
samp(int i, int j) {a=i;b=j;cout<<"constructing object (takes parameters) a="<<a<<"  b=" << b<<endl;}
~samp() {cout<<"destroying object   a=" << a << "  b=" << b << endl;
}
};
int main()
{ setlocale(LC_ALL,"Turkish");samp *p,*k,*q;int i;
k = new samp(10, 20);
p = new samp[10];
q = new samp(50, 60);
samp obj1(3, 5);
 //allocate object array.
//k=p;
if(!p) {
cout <<"Allocation error"<<endl;
return 1;}
if (!k) {
	cout << "Allocation error" << endl;
	return 1;
}
if(!q) {
cout <<"Allocation error"<<endl;
return 1;}
for (i=0;i<10;i++) {p[i].set_ab(i,2*i);}//p++;}
//p=p-10;
for (i = 0; i < 10; i++)
{
	cout << "Product[" << i << "]= " << p[i].get_product() << endl;} //p++;}
//p=p-10;
//delete q;
cin >> i;
 delete [] p;
 delete q;
 delete k;
  return 0;}


