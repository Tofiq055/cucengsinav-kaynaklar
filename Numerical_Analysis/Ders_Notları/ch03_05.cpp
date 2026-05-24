//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f1(double x,double r);
double f2(double x,double y);
int main(){int i,j,k;
  
  double x,y;
 /*
cout<<"Bir değer girin:";
cin>>r;
cout<<"Başlangıç değerini girin:";
cin>>x0;
//x0=r/2.0;*/
y=0.5;
for (j=0;j<101;j++) {x=0.1*j;
for (i=0;i<10;i++)
{
    y=f1(x,y);
}
 cout<<setprecision(15)<<"    x["<<j<<"]="<<x<<"    y["<<j<<"]="<<y<< "    g["<<x<<","<<setprecision(4)<<y<<"]="<<setprecision(15)<<f2(x,y)<<   endl;

}
return 0;

}
double f1(double x,double y)
{
   return y-(3*pow(x,7)+2*pow(y,5)-pow(x,3)+pow(y,3)-3)/(10*pow(y,4)+3*y*y); 
}
double f2(double x,double y)
{
   return (3*pow(x,7)+2*pow(y,5)-pow(x,3)+pow(y,3)-3); 
}
