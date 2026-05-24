// ch03_05.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
class samp {
private:
char s[80];
public :
	samp() {cout<<"constructing object without paremeters"<<endl;}
	samp(char *str) {strcpy(s,str);cout<<"constructing object.   s:"<<s<<endl;}
~samp() {cout<<"destructing object :"<<s<<endl;}
void show() {cout<<s<<endl;}
void set(char *str){strcpy(s,str);}
};
samp input(samp str) //returns an object of type samp  
//samp input()
{ char s[80];//o.set("aaaaaaaaaaaaa");
samp str1("üüüüüüüüü");
cout<<"Enter a string :";
cin>>s;
str1.set(s);
return str1;}
int main (){setlocale(LC_ALL,"Turkish");
samp ob_1; samp ob_2("xxxx");int i;
//ob_1=input();
ob_1=input(ob_2); 
cin>>i;
//ob_1=ob_2;
ob_1.show();
return 0;
}

