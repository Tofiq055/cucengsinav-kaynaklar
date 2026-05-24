// ch01_06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
//setlocale(LC_ALL,"Turkish");
using namespace std;
void f1(int a);//One argument
void f1(int a, int bl);//Two arguments
void sum1(double a[4], double b[4]);
void sum1(double a[4][4], double b[4][4]);
int main()
{
	int i, j;
	setlocale(LC_ALL, "Turkish"); int x;
	f1(3, 7);
	f1(10);
	f1(30, 70);
	double a[4], b[4], c[4][4], d[4][4];
	for (i = 0; i < 4; i++) {
		a[i] = i; b[i] = 10.0 * i;
	}

	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = i*j; d[i][j] = 10 * i + j;
		}
	}
	
	sum1(a, b);
	sum1(c, d);

	for (i = 0; i < 4; i++)
		cout << a[i] << "  ";
	cout << endl << endl;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) cout << c[i][j] << "  ";
		cout << endl;
	}
return 0;
}
//One argument
void f1(int a)
{
	cout << "one  parameter :" << a << endl;
}
//Two arguments
void f1(int a, int b)
{
	cout << "The first parameter :" << a << "    The second parameter :" << b << endl;
	cout << "product of a and b :" << a*b << endl;
}
void sum1(double a[4], double b[4])
{int i;
			for (i = 0; i < 4; i++) a[i] = a[i] + b[i];	
}
void sum1(double a[4][4], double b[4][4])
{int i, j;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++) a[i][j] = a[i][j] + b[i][j];
}}





