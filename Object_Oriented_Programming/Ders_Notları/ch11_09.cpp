// ch11_09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <iostream>
using namespace std;
class myclass {public: float x,y,z; myclass(float a,float b,float c){x=a;y=b;z=c;};};
int main() {myclass a(1,2,3);
cout<<"start"<<endl;

try {//start a try block
	double x;x=10;
	int y=20;
	float z=5;
		//float x;x=10;
cout<<"inside try block"<<endl;
throw a; //throw an error
cout<<"This will not execute"<<endl;}
catch (double i) {//catch the error
cout<<"Caught one! Number is:(double) "<<i<<endl;  }
//try {throw 10;}
catch (int i) {//catch the error
cout<<"Caught one!(integer) Number is: "<<i<<endl; }
catch (myclass i) {//catch the error
cout<<"Caught one!(myclass) Number is: x="<<i.x<<" y="<<i.y<<" z="<<i.z<<endl; }


cout <<"end"<<endl;
return 0;
}//
