// ch04_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstdlib>
using namespace std;
class array1 {
int size;
char *p,x;
public:
array1 (int num) {
	p = new char[num];
	if (!p) { cout << "Allocation error" << endl; exit(1); }
	size = num;
}
~array1() { delete[] p; }
char &put(int i) {
	if (i<0 || i >= size) { cout << "Boundary error" << endl; exit(1); }
	return p[i];
} // return reference to p[i]
char *put1(int i) {
	if (i<0 || i >= size) { cout << "Boundary error" << endl; exit(1); }
	return   &p[i]; //(p + i);
} // return reference to p[i]
char get(int i) {
	if (i<0 || i >= size) { cout << "Boundary error" << endl; exit(1); }
	return p[i];
} //return character
};

int main () {
	array1 a(10);
a.put(3)='X';
a.put(2)='R';
*a.put1(4)='Z';
//a.p[0]='W';
//a.p[1]='Y';
//cout<<a.get(0)<<"  "<<a.get(1)<<endl;
//cout<<a.p[3]<<"  "<<a.p[2]<<endl;
//p=&a.put(3);
//cout<<*p<<endl;
cout<<a.get(3)<<"  "<<a.get(2)<<"  "<<a.get(4)<<endl;
cout<< *a.put1(3)<<"  "<<a.put(2)<<"  "<<a.put(4) <<endl;
//cout<<dec<<p<<endl;
//a.put(11)='!'; //generate run time boundary error.
return 0;
}
