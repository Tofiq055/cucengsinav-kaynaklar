#include<stdio.h>
#include<conio.h>

int fun(int *j){
   *j += 5;
   return 2 * (*j) + 1;
}

 
int main(){
   int x, y, z, v, sonuc1, sonuc2;
   x = 3;
   y = 3;
   z = 3;
   v = 3;
  
   sonuc1 = (x + 2) * fun(&x);
   printf("Sonuc1 = %d\n", sonuc1);
   printf("x = %d\n", x);
   
   sonuc2 = fun(&y) * (y + 2);
   printf("Sonuc2 = %d\n", sonuc2);
   printf("y = %d\n", y);
  
   z = z + fun(&z);
   printf("z = %d\n", z);
   
   
   v = fun(&v)+ v;
   printf("v = %d\n", v);






getch();
return 0 ;
}

