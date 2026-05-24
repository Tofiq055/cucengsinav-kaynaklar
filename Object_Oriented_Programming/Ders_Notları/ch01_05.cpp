// ch01_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void date(char *date);//date as a string
void date(int month, int day, int year);//date as numbers
int main()
{
	date("8/23/2010");
	date("aassd8/23dssd/20dsds10");
	date(8, 23, 2010);
	return 0;
}
//date as a string
void date(char *x)
{
	cout << "Date :" << x << endl;
}
//date as numbers
void date(int month, int day, int year)
{
	cout << "Date :" << month << "/" << day << "/" << year << endl;
}


