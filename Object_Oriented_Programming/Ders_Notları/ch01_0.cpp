// ch01_0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
// function overloading example
//setlocale(LC_ALL,"Turkish");
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	float y;
	printf("%d\n", 255);// prints integer number to the console.
	printf("%f\n", 2.55);// prints float number.
	printf("%s\n", "This is a text");// prints text.
	printf("%s", "Enter a real number: ");
	scanf("%f", &y);
	printf("%f\n", y);
	cout << "This will be printed to the console. \n";
	cout << "This will be printed to the console. (endl for next line)" << endl << "\n";
	cout << 3 << endl;
	cout << 3.7 << "\n";
	int x;
	y = 7.45;
	cout << "Enter a real number üğ :";
	cin >> y;
	cout << "y=" << y << "  yy  " << "  x  " << 45.8;
	cout << endl; /*Next line (carriage return)*/

	return 0;
}



