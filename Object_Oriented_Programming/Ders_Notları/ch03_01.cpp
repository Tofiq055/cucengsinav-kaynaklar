// ch03_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
//setlocale(LC_ALL,"Turkish");

#include <iostream>
using namespace std;
class myclass  {private: int a,b;
public:
void set(int i,int j) {a=i;b=j;} 
void show() {cout<<"The value of a : "<<a<<"     The value of b:    "<<b<<endl;}
};
int main()
{setlocale(LC_ALL,"Turkish");
myclass ob_1,ob_2;int i;
ob_1.set(10,4);
ob_2=ob_1;//assign ob_1 to ob_2
ob_1.show();
ob_2.show();
cin>> i;
ob_2.set(50,40);
ob_2.show();
ob_1.show();

cout << endl;
ob_1=ob_2;
ob_1.show();
ob_2.show();

return 0;
}

