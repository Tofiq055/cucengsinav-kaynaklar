//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f1(double x,double r);
int main(){int i,j,k;
  
  double x0,r,x1;
 
cout<<"Bir değer girin:";
cin>>r;
cout<<"Başlangıç değerini girin:";
cin>>x0;
//x0=r/2.0;


for (i=0;i<18;i++)
{
    x0=f1(x0,r);
 
  cout<<setprecision(51)<<"    x["<<i<<"]="<<x0<<endl;
}
cout<<setprecision(51)<<"sqrt("<<r<<")="<<sqrt(r)<<endl;
return 0;
}
double f1(double x,double r)
{
   return 0.5*(x +r/x); 
}
