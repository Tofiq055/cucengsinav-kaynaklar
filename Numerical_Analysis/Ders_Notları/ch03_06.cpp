//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f1(double x,double r);
int main(){int i,j,k;
  
  double x1,x2,temp,r,fx1,fx2;
 
cout<<"Bir değer girin:";
cin>>r;
x1=r/2.0;
x2=r/2.0001;
fx1=f1(x1,r);
fx2=f1(x2,r);
for (i=0;i<17;i++)
{
   
    temp=x2-fx2*((x2-x1)/(fx2-fx1));
    x1=x2;
    x2=temp;
    fx1=fx2;
    fx2=f1(x2,r);
    
 cout<<setprecision(25)<<"x"<<i+3<<"="<<x2<<"   f(x"<<i+3<<")="<<fx2<<endl;
if ((fx2-fx1)==0) break; 
}
cout<<setprecision(25)<<"sqrt("<<r<<")="<<sqrt(r)<<endl;
return 0;
}double f1(double x,double r)
{
   return (x*x-r); 
}

