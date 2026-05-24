// ch05_04.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
//#include <cstdlib>
using namespace std;
class array1 {
	int *p; double x, y;
public:
	int size;
	array1(int sz) {//constructor
		p = new int[sz];
		if (!p) exit(1);
		size = sz;
		cout << "Using 'normal' constructor.  size= " << size << endl;
	}
	~array1() {
		for (int i = 0; i < size; i++) cout << get(i) << " ";
		cout << "Destroying the object. size=" << size << endl; delete[] p;
	}
	array1(const array1 &a); //Copy conctructor
	int get(int i) {
		if (i >= 0 && i < size) return p[i];
		else { cout << "the index must be between 0 and " << size << endl; exit(1); }
	};
	void put(int i, int j)
	{
		if (i >= 0 && i < size) p[i] = j;
		else { cout << "the index must be between 0 and " << size << endl; exit(1); }
	};
};
array1::array1(const array1 &a ){ int i;
size = a.size; //a.size = 15;
x = a.x; y = a.y;// p = a.p;
p=new int[size];//Allocate memory for copy. p=a.p;
if (!p) exit(1);
for (i=0;i<a.size;i++) p[i]=a.p[i]; //copy contents 
cout <<"using copy constructor  size="<<size<<endl;} 
int main (){setlocale(LC_ALL,"Turkish");
array1 num_1(10); //this calls 'normal' constructor
array1 num(20); //this calls 'normal' constructor

int i;
for (i=0;i<num.size;i++) num.put(i,i);// Put some values into the array1
for (i=0;i<num_1.size;i++) num_1.put(i,5*i);
for (i=0;i<num_1.size;i++) cout<<num_1.get(i)<<" ";
cout<<endl;//display num
array1 x=num_1;
cin >> i;
//num=num_1;
for (i=0;i<x.size;i++) cout<<x.get(i)<<" "; //display x
cout<<endl;
for (i = 0; i<num_1.size; i++) cout << num_1.get(i) << " "; //display x
cout << endl;

for (i = 0; i<num_1.size; i++) num_1.put(i, 10* i);

for (i = 0; i<x.size; i++) cout << x.get(i) << " ";
cout << endl;
for (i = 0; i<num_1.size; i++) cout << num_1.get(i) << " ";
cout << endl;
cin>>i;

return 0;
}


