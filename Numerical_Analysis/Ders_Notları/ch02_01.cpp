//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
using namespace std;

int main(){int i,j,k;
    float x,y,z,t1,t2,t3;
    y=1.0;z=10.0;t1=0;
    double x1,y1,z1;y1=1.0;z1=10.0;
    x=y/z;
    t1=x;
      x1=y1/z1;
     cout<<setw(40)<<setprecision(40)<<x<<endl; 
      cout<<setw(40)<<setprecision(40)<<x/t1<<endl; 
    cout<<setw(68)<<setprecision(80)<<x1<<endl;
    
t1=x;
t2=0;
for (i=0;i<300000000;i++)
{
    t2=t1+t2;
    //t2=((float) 10)*t1;
    //t1=((float) 1.0)/t2;
}
//cout<<t2<<endl;
return 0;
}
