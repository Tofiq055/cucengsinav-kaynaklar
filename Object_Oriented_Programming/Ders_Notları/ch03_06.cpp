// ch03_06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
//setlocale(LC_ALL,"Turkish");
using namespace std;
class samp {
private:
char *s;
public :
	samp() { s = NULL; cout << "constructing the object witout parameters" << endl; }
samp(char *str) {
	s = (char *)malloc(strlen(str) + 1);
	if (!s) { cout << "Allocation error" << endl; exit(1); }
	strcpy(s, str);
	 cout << "constructing the object=" <<s<< endl; }
~samp() {cout<<"Freeing s="<<s<<endl; if (s!=NULL) free(s); s=NULL;
	}
void show() {cout<<s<<endl;
}
void set(char *str);
};
void samp::set(char *str)
{
	if (s != NULL) free(s); 
	s=(char *) malloc(strlen(str)+1);
if (!s) {cout<<"Allocation error"<<endl; exit(1);}
strcpy(s,str);
}
 samp input(samp str1) //retuns an object of type samp.
//samp input() //retuns an object of type samp.
{ char s[80]; samp str("tttt");
cout<<"Enter a string :";
cin>>s;
str.set(s);
str.show();
return str; 
} 
int main (){setlocale(LC_ALL,"Turkish"); int i;
samp ob_1("qqq"),ob_2("hhhh"), ob_3;
//ob_1=input(); //This will cause an error.
ob_1.show();
ob_1 = input(ob_2); //This will cause an error.
cin >> i;
ob_1.show();
//cin>>i;
return 0;
}

