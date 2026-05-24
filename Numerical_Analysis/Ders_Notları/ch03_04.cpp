//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f1(double x);
double f2(double x);
double f3(double x,double r);
int main(){int i,j,k;
  
  double a0,b0,c0,x,r;
 
cout<<"Bir değer girin:";
cin>>x;
//cin>>r;

//x=500;

//cout<<setprecision(25)<<"x0="<<x<<"   f(x0)="<<f2(x)<<endl;

for (i=0;i<17;i++)
{
    x=f1(x);
 cout<<setprecision(25)<<"x"<<i+1<<"="<<x<<"   f(x"<<i+1<<")="<<f2(x)<<endl;

}
//cout<<setprecision(25)<<"sqrt("<<r<<")="<<sqrt(r)<<endl;
return 0;
}
double f1(double x)
{
   return (x-((exp(4*x)-1)/((4*exp(2*x))))); 
}
double f2(double x)
{
   return tanh(x); 
}
double f3(double x,double r)
{
   return 0.5*(x +r/x); 
}
