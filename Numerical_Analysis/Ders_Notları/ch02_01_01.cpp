//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
    //float x,y,z;
    double y1,x1,x,y,z;
    /*x=5*10e-9;
    x1=x*x+1.0;
    y=sqrt(x1)-1.0;
    y1=(x*x)/(1+sqrt(x1));
    cout<<"y="<<y<<endl;
    cout<<"y1="<<y1<<endl;*/
    x= pow(10,37);
      cout<<"x="<<setw(68)<<setprecision(80)<<x<<endl;
      y= pow(10,20);
    x=x+y;
    z=0;
    for(i=0;i<1000000000;i++) z=z+y;
    x=x+z;
    cout<<"x="<<setw(68)<<setprecision(80)<<x<<endl;
    //cout<<"y="<<setw(68)<<setprecision(80)<<y<<endl;
    //cout<<"z="<<setw(68)<<setprecision(80)<<z<<endl;
   // cout<<setw(68)<<setprecision(80)<<x1<<endl;
   // cout<<setw(40)<<setprecision(40)<<x<<endl;

return 0;
}
