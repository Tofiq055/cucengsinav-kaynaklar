// ch02_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <cstring>
#include <cstdlib>
//setlocale(LC_ALL,"Turkish");
using namespace std;
#define SIZE 255
class strtype {
private:
char *p;
int len;
public:
strtype();//constructor
~strtype();//destructor
void set(char *ptr);
void show();
};
//Initialize a string object
strtype::strtype()
{
cout<<"Initializing the object"<<endl;
p=(char *) malloc(SIZE);
if (!p) 
{cout<<"Allocation error"<<endl;  exit(1);}
 *p = '\0'; //p[0]='\0'; *p = NULL;
len=0;
}
//Free memory when destroying string object
strtype::~strtype()
{cout<<"Freeing p.   text :"<<p<< "\n";free(p);
//show();cout<<endl;
}


void strtype::set(char *ptr)

{if (strlen(ptr) >=SIZE)
{cout<<"String too big";  exit(1) ;}


strcpy(p,ptr);
len=strlen(p);}



void strtype::show()
{cout<<p<<".   Lenght of the string is :"<<len<<endl;}


int main() {setlocale(LC_ALL,"Turkish");
strtype s1,s2;
s1.set("This is a test");
s2.set("I like C++.");
s1.show();
s2.show();

return 0;
}