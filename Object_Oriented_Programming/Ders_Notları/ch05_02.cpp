// ch05_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
#include <cstdio>
using namespace std;
class date{
int day, month,year;
public:
date(char *str);
date(int m, int d, int y) {day=d;month=m;year=y;cout<<"integer input"<<endl;}
void show(){cout<<month<<'/'<<day<<'/'<<year<<endl;}
};
date::date(char *str)
{sscanf(str,"%d%*c%d%*c%d",&month,&day,&year);cout<<"string input"<<endl;}
int main()
{setlocale(LC_ALL,"Turkish");
date sdate("8/23/2010");
date ssdate("8-23-2010");
date sssdate("8*23juy2010");
date idate(8,23,2010);
sdate.show();
idate.show();
ssdate.show();
sssdate.show();
return 0;
}
