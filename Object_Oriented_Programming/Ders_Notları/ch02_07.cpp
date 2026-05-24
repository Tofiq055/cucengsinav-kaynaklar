// ch02_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
#include <cmath>
#include <iomanip>
//setlocale(LC_ALL,"Turkish");
#include <iostream>
using namespace std;
union union_x {
int x;
double y;
unsigned char ch[8];
void show_data();
};
void union_x::show_data()
{cout<<"The value of x : "<<x<<endl;
cout<<"The value of y : "<<y<<endl;
cout<<"The value of ch : "<<"  "<<(unsigned int)ch[7]<<"  "<<(unsigned  int)ch[6]<<"  "<<( int)ch[5]<<"  "<<( int)ch[4]<<"  "<<(  int)ch[3]<<"  "<<( int)ch[2]<<"  "<<( int)ch[1]<<"  "<<( int)ch[0]<<endl;
cout << "The value of ch : "  <<  (int)ch[3] << "  " << (int)ch[2] << "  " << (int)ch[1] << "  " << (int)ch[0] << endl;

}
int main()
{setlocale(LC_ALL,"Turkish");
	union_x union_1;
	union_1.ch[0]=0;union_1.ch[1]=0;union_1.ch[2]=0;union_1.ch[3]=0;union_1.ch[4]=0;union_1.ch[5]=0;union_1.ch[6]=0;union_1.ch[7]=0;
	union_1.x=15;
union_1.show_data();
union_1.y =  94338970000;//20
 union_1.show_data();
 cout<<union_1.ch[0]+256*union_1.ch[1]+256*256*union_1.ch[2]+256*256*256*union_1.ch[3]<<endl;//-(2^31)+101*(256^3)+64*(256^2)<<endl;
 
return 0;
}




