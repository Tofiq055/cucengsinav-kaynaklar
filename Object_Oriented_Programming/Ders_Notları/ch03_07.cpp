// ch03_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
//setlocale(LC_ALL,"Turkish");
using namespace std;
class myclass;
class yourclass;

void isfactor(myclass ob_1, yourclass ob_2);
class myclass
{
private:
int n,d;
public : //int n,d;
myclass(int i,int j) {n=i;d=j;}
friend void isfactor1(myclass ob_1);
friend void isfactor(myclass ob_1, yourclass ob_2);
};

class yourclass
{
private:
	int nn, dd;
public: //int n,d;
	yourclass(int i, int j) { nn = i; dd = j; }
	friend void isfactor(myclass ob_1, yourclass ob_2);
};



void isfactor(myclass ob_1, yourclass ob_2) {
	if (!(ob_1.n % ob_2.dd)) {cout<<ob_2.dd<<" is a factor of "<<ob_1.n<<endl;}
	else {cout<<ob_2.dd<<" is not a factor of "<<ob_1.n<<endl;}
}
void isfactor1(myclass ob_1) {
	if (!(ob_1.n % ob_1.d)) { cout << ob_1.d << " is a factor of " << ob_1.n << endl; }
	else { cout << ob_1.d << " is not a factor of " << ob_1.n << endl; }
}

int main()
{setlocale(LC_ALL,"Turkish");
myclass ob_x(10,2), ob_y(10,3), ob_z(10,5), ob_t(5, 10);
yourclass yob_x(10, 2), yob_y(10, 3), yob_z(10, 5), yob_t(5, 10);
isfactor1(ob_x);
isfactor1(ob_y);
isfactor1(ob_z);
isfactor1(ob_t);
/*
isfactor(ob_x, yob_x);
isfactor(ob_y,yob_y);
isfactor(ob_z,yob_z);
isfactor(ob_t,yob_t);
*/
}


