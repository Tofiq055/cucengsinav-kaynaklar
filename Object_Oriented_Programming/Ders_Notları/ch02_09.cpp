// ch02_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <locale>
#include <iomanip>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
union bits {
	double d;
	bits(double n) {d=n;};
	void show_bits();
	unsigned char c[8];
};
void bits::show_bits(){
	int i,j;
	cout << "Double number=" << d << endl;
	for (j=sizeof(double)-1;j>=0;j--) {
		cout<<"Bit pattern in byte  "<<j<<": ";
		for (i=128;i;i>>=1)
			if (i&c[j]) cout<<"1";
			else cout<<"0";
			cout<<endl;}
}
int main() {
	bits ob(-1991.829);
ob.show_bits();
return 0;}
