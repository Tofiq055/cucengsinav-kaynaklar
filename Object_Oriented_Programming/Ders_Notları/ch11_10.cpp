// ch11_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main() {
cout<<"start"<<endl;
try {// start a try block
cout<<"inside try block"<<endl;
throw 12; // throw an error
cout<<"This will not execute"<<endl;}
catch (double i) {//Won’t work for an int exception
cout<<"Caught one! Number is: "<<i<<endl; }
cout <<"end"<<endl;
return 0;
}// 