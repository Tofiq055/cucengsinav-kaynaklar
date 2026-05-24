//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
  
    float x0,x1,x2,x3,a1,a2;
    x1=4;
    x0=1.0;
  a1=((float) 13.0)/((float) 3.0);
   a2=((float) 4.0)/((float) 3.0);
   
   
   /*
    double x0,x1,x2,x3,a1,a2;
    x1=4;
    x0=1.0;
  a1=((double) 13.0)/((double) 3.0);
   a2=((double) 4.0)/((double) 3.0);
   */
   
  //  cout<<setw(68)<<setprecision(80)<<x1<<endl;
  //  cout<<setw(40)<<setprecision(40)<<x<<endl;

for (i=2;i<21;i++)
{
    x2=a1*x1- a2*x0;
  x0=x1;
  x1=x2;
  cout<<setprecision(7)<<"x["<<i<<"]="<<x2<<endl;
}

cout<<"correct result="<<pow(4,20)<<endl;
return 0;
}
