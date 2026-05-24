//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
    float x,y,z,t1,t2,t3;
    y=1.0;z=10.0;t1=0;
    double x1,y1,z1;y1=1.0;z1=10.0;
    x1=0.1265345432567;
    y1=0.1265344632567;
    x=x1;
    y=y1;
    z=x-y;
    z1=x1-y1;
     cout<<setw(40)<<setprecision(40)<<z1<<endl; 
      
    cout<<setw(40)<<setprecision(40)<<z<<endl; 
    
 cout<<setw(40)<<setprecision(40)<<100.0*abs((z-z1)/z1)<<endl; 
return 0;
}
