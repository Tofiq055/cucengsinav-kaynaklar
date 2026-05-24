// ch05_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>

//setlocale(LC_ALL,"Turkish");

#include<iostream>
using namespace std;
class myclass {
private: int x;
public:
myclass () {x=5;cout<<"Constructor without initializer. x= "<<x<<endl;} //no initializer 
myclass (int n) {x=n;cout<<"Constructor with initializer. x= "<<x<<endl;}
~myclass () {cout<<"Destructing the object. x= "<<x<<endl;}

int getx() {return x;}
};
int main (){setlocale(LC_ALL,"Turkish");int i;
myclass object_1(100);//declare with initial value.
myclass object_2;// declare without initializer.
cout<<"object_1. x= "<<object_1.getx()<<endl;
cout<<"object_2. x= "<<object_2.getx()<<endl;
cin>>i;
myclass object_11[10];//declare with initial value.
//myclass object_22[10]={1,2,3,4,5,6,7,8,9,10};
myclass object_22[10]={myclass(55),myclass(),30,4,5,6,7,8,9,10};
for (i=0;i<10;i++){
cout<<"object_11["<<i<<"].x="<<object_11[i].getx()<<"  ";
cout<<"object_22["<<i<<"].x="<<object_22[i].getx()<<"  "<<endl;}
return 0;
}

