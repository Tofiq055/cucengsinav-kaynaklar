// ch11_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"


#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
void Xtest(int test){
cout<<"Inside Xtest, test is: "<<test<<endl;
if (!test) throw test;}
int main() { cout<<"start"<<endl;
try {// start a try block
cout<<"inside try block"<<endl;
Xtest(3);Xtest(1);Xtest(0);}
catch (int i) {// throw an integer error
cout<<"Caught one! Number is: "<<i<<endl; }
cout <<"end"<<endl;
return 0;
}