//PS1='Z:\W\$'
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
  
  double y1,y2,e,a1,a2;
  //float y1,y2,e,a1,a2;
  y1=1.0;
e=exp(1);


for (i=1;i<21;i++)
{
    y2=e-((double)(i+1))*y1;
   // y2=e-((float)(i+1))*y1;
    y1=y2;
  cout<<setprecision(7)<<"y["<<i+1<<"]="<<y2<<endl;
}

return 0;
}
