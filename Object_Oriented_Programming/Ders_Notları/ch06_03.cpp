// ch06_03.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <locale>
//setlocale(LC_ALL,"Turkish");
using namespace std;
class matrix {private:
public: double a[5][5];
	matrix () 
	{int i,j;
	for (i=0;i<5;i++) { 
		for (j = 0; j < 5; j++) a[i][j] = 0;
	}
	}
void show() {int i,j;
	for (i=0;i<5;i++) { 
		for (j=0;j<5;j++) cout << a[i][j]<<"  ";
	cout<<endl;
	}
}
matrix operator+(matrix ob2);
matrix operator*(matrix ob2);
matrix operator/(matrix ob2);
bool operator==(matrix ob2);
};

bool  matrix::operator==(matrix ob2)
{
	int x; x = 0;
	int i, j;
	for (i = 0; i<5; i++) {
		for (j = 0; j < 5; j++)   if (a[i][j] != ob2.a[i][j]) return false;
	}
	return true;
}

matrix  matrix::operator+(matrix ob2)
{matrix temp;
int i,j;
	for (i=0;i<5;i++) { 
		for (j=0;j<5;j++) temp.a[i][j]=a[i][j]+ob2.a[i][j];}
return temp;}

matrix  matrix::operator/(matrix ob2)
{
	matrix temp;
	int i, j;
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) temp.a[i][j] = a[i][j] * ob2.a[i][j];
	}
	return temp;
}

matrix  matrix::operator*(matrix ob2)
{
	matrix temp;
	int i, j,k;
	for (i = 0; i<5; i++) {
		for (j = 0; j < 5; j++)
		{
			temp.a[i][j] = 0;
			for (k = 0; k < 5; k++) temp.a[i][j]+= a[i][k] * ob2.a[k][j];
		}
	}
	return temp;
}


int main() {setlocale(LC_ALL,"Turkish");
matrix m1,m2,m3,m4,m5;
int i,j;
	for (i=0;i<5;i++) { 
		for (j = 0; j < 5; j++) { m1.a[i][j] = i * 10 + j; m5.a[i][j] = i * 10 + j;
		}
	}
for (i=0;i<5;i++) { 
		for (j=0;j<5;j++) m2.a[i][j]=i*100+j;}
m1.show();cout<<endl;
m2.show();cout<<endl;
//m3=m1 + m2;//+o3; //m3=m1.operator+(m2);
m4 = m1 / m2;
m4.show();
cout << endl << endl;
m3 = m1 + m2;
//m3 = m1 .operator+(m2);
m3.show();
m3 = m1 * m2;
cout << endl << endl;
m3.show();

if (m1 == m5) cout << "true" << endl;
else  cout << "false" << endl;
if (m1 == m2) cout << "true" << endl;
else  cout << "false" << endl;

//matrix_add(o3,o2,01,dim1,dim2);

return 0;
}
