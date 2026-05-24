// ch11_15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
void Xhandler(int test) throw(double){
if (test==0) throw test;// throw int
if (test==1) throw 'a';// throw char
if (test==2) throw 123.23; //throw double
}
int main() { cout<<"start"<<endl;
try{
Xhandler(1);
Xhandler(1);
Xhandler(2);
}//1 ve 2 deðerlerinide kullan

catch (int i) { cout<<"Caught int"<<endl;}
catch (char c) { cout<<"Caught char"<<endl;}
catch (double d) { cout<<"Caught double"<<endl;}
cout <<"end"<<endl;
return 0;}
