#include<stdio.h>
#include<conio.h>

void funk(int *a, int *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
 
int main(){

   int deger=3, liste[] = {1, 3, 5, 7, 9, 11};
   int i ;
   funk(&deger, &liste[0]);      // 1      3 3 5 7 9 11
   
   funk(&liste[0], &liste[2]);   // 1      5 3 3 7 9 11
   
   funk(&deger, &liste[deger]);  //  3      5 1 3 7 9 11


  printf("deger : %d\n",deger);


  for( i=0 ; i<6 ; i++)
    printf("%d ",liste[i]);




getch();
return 0 ;
}

