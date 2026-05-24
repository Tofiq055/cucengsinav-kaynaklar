// ch11_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
void Xhandler(){
try {char x[20]="Hello";
throw x;}// throw char *
catch (char *c) { cout<<"Caught  char inside Xhandler\n";
throw c;}//rethrow char * out of function

}
int main() { cout<<"start"<<endl;
try {Xhandler();}
catch(char *c) { cout<<"Caught  char inside main  "<<c<<endl;}
cout <<"end"<<endl;
return 0;}