#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define SIZE 17

//struct
typedef struct{

char isim[100];
char soyisim[100];
unsigned long num;

}Students;



FILE *studentFile;

//Ascending Numaraya göre
void ascendingNumber(Students studentArray[]){


 int swap;
 char stringSwap[100];
 for(int i=0;i<SIZE-1;i++){
  for(int j=0;j<(SIZE-i-1);j++){

   if(studentArray[j].num > studentArray[j+1].num){

    swap = studentArray[j].num;
    studentArray[j].num = studentArray[j+1].num;
    studentArray[j+1].num = swap;

    strcpy(stringSwap,studentArray[j].isim);
    strcpy(studentArray[j].isim,studentArray[j+1].isim);
    strcpy(studentArray[j+1].isim,stringSwap);
    
    

    strcpy(stringSwap,studentArray[j+1].soyisim);
    strcpy(studentArray[j+1].soyisim,studentArray[j].soyisim);
    strcpy(studentArray[j].soyisim,stringSwap);
   }

  }

 }

 for(int i=0;i<SIZE;i++){

  printf("%lu %s %s \n",studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
 }


}

//Descending Numaraya göre
void descendingNumber(Students studentArray[]){


 int swap;
 char stringSwap[100];
 for(int i=0;i<SIZE-1;i++){
  for(int j=0;j<(SIZE-i-1);j++){

   if(studentArray[j].num < studentArray[j+1].num){

    swap = studentArray[j+1].num;
    studentArray[j+1].num = studentArray[j].num;
    studentArray[j].num = swap;


    strcpy(stringSwap,studentArray[j+1].isim);
    strcpy(studentArray[j+1].isim,studentArray[j].isim);
    strcpy(studentArray[j].isim,stringSwap);
    
    

    strcpy(stringSwap,studentArray[j+1].soyisim);
    strcpy(studentArray[j+1].soyisim,studentArray[j].soyisim);
    strcpy(studentArray[j].soyisim,stringSwap);

   
   }

  }

 }

 for(int i=0;i<SIZE;i++){

  printf("%lu %s %s \n",studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
 }

}


//Ascending Ýsme göre

void ascendingName(Students studentArray[]){

 int swap;
 char stringSwap[100];
 for(int i=0;i<SIZE-1;i++){
  for(int j=0;j<(SIZE-i-1);j++){

   if(strcmp(studentArray[j].isim,studentArray[j+1].isim)>0){
    strcpy(stringSwap,studentArray[j].isim);
    strcpy(studentArray[j].isim,studentArray[j+1].isim);
    strcpy(studentArray[j+1].isim,stringSwap);
    
    swap = studentArray[j].num;
    studentArray[j].num = studentArray[j+1].num;
    studentArray[j+1].num = swap;

    
    

    strcpy(stringSwap,studentArray[j+1].soyisim);
    strcpy(studentArray[j+1].soyisim,studentArray[j].soyisim);
    strcpy(studentArray[j].soyisim,stringSwap);
   }

  }

 }

 for(int i=0;i<SIZE;i++){

  printf("%s %s %lu \n",studentArray[i].isim,studentArray[i].soyisim,studentArray[i].num);
 }

}

//Descending Ýsme göre
void descendingName(Students studentArray[]){

 int swap;
 char stringSwap[100];
 for(int i=0;i<SIZE-1;i++){
  for(int j=0;j<(SIZE-i-1);j++){

   if(strcmp(studentArray[j].isim,studentArray[j+1].isim)<0){
    strcpy(stringSwap,studentArray[j+1].isim);
    strcpy(studentArray[j+1].isim,studentArray[j].isim);
    strcpy(studentArray[j].isim,stringSwap);
    
    swap = studentArray[j+1].num;
    studentArray[j+1].num = studentArray[j].num;
    studentArray[j].num = swap;

    
    

    strcpy(stringSwap,studentArray[j+1].soyisim);
    strcpy(studentArray[j+1].soyisim,studentArray[j].soyisim);
    strcpy(studentArray[j].soyisim,stringSwap);
   }

  }

 }

 for(int i=0;i<SIZE;i++){

  printf("%s %s %lu\n",studentArray[i].isim,studentArray[i].soyisim,studentArray[i].num);
 }

}

//ascending Soyisme göre
void ascendingSurname(Students studentArray[]){

 int swap;
 char stringSwap[100];
 for(int i=0;i<SIZE-1;i++){
  for(int j=0;j<(SIZE-i-1);j++){
if(strcmp(studentArray[j].soyisim,studentArray[j+1].soyisim)>0){
    strcpy(stringSwap,studentArray[j].soyisim);
    strcpy(studentArray[j].soyisim,studentArray[j+1].soyisim);
    strcpy(studentArray[j+1].soyisim,stringSwap);
    
    swap = studentArray[j].num;
    studentArray[j].num = studentArray[j+1].num;
    studentArray[j+1].num = swap;

    
    

    strcpy(stringSwap,studentArray[j+1].isim);
    strcpy(studentArray[j+1].isim,studentArray[j].isim);
    strcpy(studentArray[j].isim,stringSwap);
   }

  }

 }

 for(int i=0;i<SIZE;i++){

  printf("%s %s %lu\n",studentArray[i].soyisim,studentArray[i].isim,studentArray[i].num);
 }

}

//Descending Soyisme göre
void descendingSurname(Students studentArray[]){

 int swap;
 char stringSwap[100];
 for(int i=0;i<SIZE-1;i++){
  for(int j=0;j<(SIZE-i-1);j++){

   if(strcmp(studentArray[j].soyisim,studentArray[j+1].soyisim)<0){
    strcpy(stringSwap,studentArray[j+1].soyisim);
    strcpy(studentArray[j+1].soyisim,studentArray[j].soyisim);
    strcpy(studentArray[j].soyisim,stringSwap);
    
    swap = studentArray[j+1].num;
    studentArray[j+1].num = studentArray[j].num;
    studentArray[j].num = swap;

    
    

    strcpy(stringSwap,studentArray[j+1].isim);
    strcpy(studentArray[j+1].isim,studentArray[j].isim);
    strcpy(studentArray[j].isim,stringSwap);
   }

  }

 }

 for(int i=0;i<SIZE;i++){

  printf("%s %s %lu\n",studentArray[i].soyisim,studentArray[i].isim,studentArray[i].num);
 }

}

int main(){
 Students studentArray[SIZE];

 if((studentFile=fopen("student.txt","r")) != NULL){


  printf("Dosyaya erisildi.\n");

  for(int i=0;i<SIZE;i++){


   fscanf(studentFile,"%lu %s %s",&studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
  }
  fclose(studentFile);

  for(int i=0;i<SIZE;i++){


   printf("%lu %s %s\n",studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
  }

  int selection;
 
 
 while((selection=getchar())!=-1) {
 
   
  printf("========Please Select an Option =========\n");
  printf("1)Ascending sort by student numbers : \n");
  printf("2)Descending sort by student numbers : \n");
  printf("3)Ascending sort by student names : \n");
  printf("4)Descending sort by student names : \n");
  printf("5)Ascending sort by student surnames : \n");
  printf("6)Descending sort by student surnames : \n");
  scanf("%d",&selection);
   
  
 
  switch(selection){
   case 1:
    ascendingNumber(studentArray);
    break;
   case 2:
    descendingNumber(studentArray);
    break;
   case 3:
    ascendingName(studentArray);
    break;
   case 4:
    descendingName(studentArray);
    break;
   case 5:
    ascendingSurname(studentArray);
    break;
   case 6:
    descendingSurname(studentArray);
    break;

   default:
    printf("Wrong Entry!\n");
    break;

    }
}

 }else{

  printf("No file");
 }




 getchar();
 return 0;
}
