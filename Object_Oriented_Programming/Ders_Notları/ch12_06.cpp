// ch12_06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
class Base {
public:
virtual void f () {cout<<"Inside Base"<<endl;};
};
class Derived :public Base {
public:
void f () {cout<<"Inside Derived"<<endl;};
};
int main() {Base *bp,b_ob;
Derived *dp,d_ob;
dp=dynamic_cast<Derived *> (&d_ob);
if (dp) { cout<<"Cast from Derived * to Derived OK.\n";
dp->f();} else cout<<"Error"<<endl; cout<<endl;

bp=dynamic_cast<Base *> (&d_ob);
if (bp) { cout<<"Cast from Derived * to Base OK.\n";
bp->f();} else cout<<"Error"<<endl; cout<<endl;
bp=dynamic_cast<Base *> (&b_ob);
if (bp) { cout<<"Cast from Base * to Base OK.\n";
bp->f();} else cout<<"Error"<<endl; cout<<endl;
dp=dynamic_cast<Derived *> (&b_ob);
if (dp) { cout<<"Error"<<endl;} else
cout<<"Cast from Base * to Derived not OK.\n"; cout<<endl;
bp=&d_ob;
dp=dynamic_cast<Derived *> (bp);
if (dp) { cout<<"Casting bp to a Derived * OK.\n"<<
"because bp is really pointing to a Derived object.\n";
bp->f();} else cout<<"Error"<<endl; cout<<endl;
bp=&b_ob;//bp points to Base object.
dp=dynamic_cast<Derived *> (bp);
if (dp)  cout<<"Error"<<endl; else 
{ cout<<"Now Casting bp to a Derived * is not OK.\n"<<
"because bp is really pointing to a Base object.\n";} cout<<endl;
dp=&d_ob;//dp points to Derived object.
bp=dynamic_cast<Base *> (dp);
if (bp)  { cout<<"Casting dp to a Base * is OK.\n";
bp->f();} else cout<<"Error"<<endl;  
 cout<<endl;
return 0;
}