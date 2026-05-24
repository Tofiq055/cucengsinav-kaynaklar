//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f1(double *a ,double &c0,double &c1,double z0, int n);

int main(){int i,j,k,n1;
  
  double x, c0,c1,a[20],z0; 
  a[4]= 1;
   a[3]=-4 ;
    a[2]= 7;
     a[1]= -5;
      a[0]= -2;
 n1=4;
 z0=3;
cout<<"Bir değer girin:";
cin>>z0;

for (i=0;i<7;i++)
{
 f1( a, c0, c1, z0, n1);
    z0=z0-c0/c1;
    
 cout<<setprecision(25)<<"x"<<i+1<<"="<<z0<<"   f(x"<<i+1<<")="<<c0<<"c1="<<c1<<endl; 
}

return 0;
}
double f1(double *a ,double &c0,double &c1,double z0, int n)
{int i,j,k;cout<<"n="<<n<<endl;i=0;
    double b[3],d[2];
    b[n-1]=a[n];
    for (i=0;i<=n-2;i++) {k=n-(i+1); b[k]=a[k+1]+z0*b[k+1];}
   c0=a[0]+z0*b[0];
   

   d[n-2]=b[n-1];
     for (i=0;i<=n-3;i++) {k=n-(i+2); d[k]=b[k+1]+z0*d[k+1];}
    c1=b[0]+z0*d[0];
   
      
}

