// ch11_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <locale>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
void Xhandler(int test){
try { if (test) throw test;
cout<<"No error! Ex. #: "<<test<<endl;
}
catch (int i) {//catch an integer error
cout<<"Caught one! Ex. #: "<<i<<endl; }

}
int main() { cout<<"start"<<endl;
Xhandler(1);
Xhandler(2);
Xhandler(0);
Xhandler(3);
cout <<"end"<<endl;
return 0;
}