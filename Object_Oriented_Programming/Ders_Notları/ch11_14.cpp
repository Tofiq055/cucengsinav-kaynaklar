// ch11_14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <locale>
//setlocale(LC_ALL,"Turkish");


#include <iostream>
using namespace std;
void Xhandler(int test) throw(int) {
try { if (test==0) throw test;// throw int
else  if (test==1) throw 'a';// throw char
else if (test==2) throw 123.23;// throw double
}
catch (int i) { cout<<"Caught "<<i<<endl;}//catch integer exception
catch (...) { cout<<"Caught one!"<<endl;} //catch all exceptions
//catch (int i) { cout<<"Caught "<<i<<endl;}
}
int main() { cout<<"start"<<endl;
Xhandler(0);
Xhandler(1);
Xhandler(2);
cout <<"end"<<endl;
return 0;}