//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f1(double x);
double f2(double x);
int main(){int i,j,k;
  
  double a0,b0,c0;
 
a0=0;b0=1;

a0=0.5;b0=1.5;

for (i=0;i<41;i++)
{
    c0=(a0+b0)/2.0;
    //if ((f1(b0) * f1(c0))<0 ) {a0=c0;}
    if ((f2(b0) * f2(c0))<0 ) {a0=c0;}
    else {b0=c0;}
 // cout<<setprecision(17)<<"c"<<i<<"="<<(c0)<<"  f1[c"<<i<<"]="<<f1(c0)<<endl;
  cout<<setprecision(17)<<"c"<<i<<"="<<(c0)<<"  f2[c"<<i<<"]="<<f2(c0)<<endl;
}

return 0;
}
double f1(double x)
{
   return (1/x - pow(2,x)); 
}
double f2(double x)
{
   return (2*x -tan(x)); 
}
