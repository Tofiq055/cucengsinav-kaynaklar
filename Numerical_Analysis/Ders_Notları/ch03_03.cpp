//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f1(double x,double r);

int main(){int i,j,k;
  
  double a0,b0,c0,r;
 
cout<<"Bir değer girin:";
cin>>r;

a0=0;b0=r/2;

for (i=0;i<41;i++)
{
    c0=(a0+b0)/2.0;
    if ((f1(b0,r) * f1(c0,r))<0 ) {a0=c0;}
    else {b0=c0;}
 cout<<setprecision(25)<<"c"<<i<<"="<<(c0)<<"  f1[c"<<i<<"]="<<f1(c0,r)<<endl;

}
cout<<setprecision(25)<<"sqrt("<<r<<")="<<sqrt(r)<<endl;
return 0;
}
double f1(double x,double r)
{
   return (x*x - r); 
}
