// ch02_08.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

static union
{
int i;
char ch[4];
};
int main()
{/*
 union
{
int i;
char ch[4];
};*/
i=9999;
cout<<"Value of i : "<<i<<endl;
cout<<"Value of ch : "<<ch<<endl;
ch[0]=48;
ch[1]=67;
ch[2]=68;
ch[3]=66;

cout<<"Value of i : "<<i<<endl;
cout<<"computed value of i : "<<ch[0]+256*ch[1]+256*256*ch[2]+256*256*256*ch[3]       <<endl;
cout<<"ch[3] : "<<ch[3] << "    ch[2] : " << ch[2] << "    ch[1] : " << ch[1] << "    ch[0] : " << ch[0] <<endl;
return 0;
}