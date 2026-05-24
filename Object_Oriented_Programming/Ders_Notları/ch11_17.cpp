// ch11_17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
#include <new>
using namespace std;
int main() {
double *p;

do{
try {p=new double[100000];} //allocate memory
catch(bad_alloc xa) { cout<<"Allocation failure."<<endl;
exit(0);}
cout<<"Allocation okay."<<endl;
}while(1);

/*
do{
p=new(nothrow) double[100000];// allocate memory
if (p) cout<<"Allocation Okay"<<endl;
else cout<<"Allocation Error."<<endl;
}while(p);
*/


return 0;
}
