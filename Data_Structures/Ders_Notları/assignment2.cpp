#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define studentNumber 17

//struct
typedef struct{

char isim[100];
char soyisim[100];
unsigned long num;

}Students;



FILE *studentFile;

//Ascending Number Order
void ascendingNumber(Students studentArray[]){


	int swap;
	char stringSwap[100];
	for(int i=0;i<studentNumber-1;i++){
		for(int j=0;j<(studentNumber-i-1);j++){

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

	for(int i=0;i<studentNumber;i++){

		printf("%lu %s %s \n",studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
	}


}

//Descending Number Order
void descendingNumber(Students studentArray[]){


	int swap;
	char stringSwap[100];
	for(int i=0;i<studentNumber-1;i++){
		for(int j=0;j<(studentNumber-i-1);j++){

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

	for(int i=0;i<studentNumber;i++){

		printf("%lu %s %s \n",studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
	}

}


//Ascending Name Order 

void ascendingName(Students studentArray[]){

	int swap;
	char stringSwap[100];
	for(int i=0;i<studentNumber-1;i++){
		for(int j=0;j<(studentNumber-i-1);j++){

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

	for(int i=0;i<studentNumber;i++){

		printf("%s %s %lu \n",studentArray[i].isim,studentArray[i].soyisim,studentArray[i].num);
	}

}

//Descending Name Order
void descendingName(Students studentArray[]){

	int swap;
	char stringSwap[100];
	for(int i=0;i<studentNumber-1;i++){
		for(int j=0;j<(studentNumber-i-1);j++){

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

	for(int i=0;i<studentNumber;i++){

		printf("%s %s %lu\n",studentArray[i].isim,studentArray[i].soyisim,studentArray[i].num);
	}

}

//ascending  Surname Order
void ascendingSurname(Students studentArray[]){

	int swap;
	char stringSwap[100];
	for(int i=0;i<studentNumber-1;i++){
		for(int j=0;j<(studentNumber-i-1);j++){

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

	for(int i=0;i<studentNumber;i++){

		printf("%s %s %lu\n",studentArray[i].soyisim,studentArray[i].isim,studentArray[i].num);
	}

}

//Descending Surname Order
void descendingSurname(Students studentArray[]){

	int swap;
	char stringSwap[100];
	for(int i=0;i<studentNumber-1;i++){
		for(int j=0;j<(studentNumber-i-1);j++){

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

	for(int i=0;i<studentNumber;i++){

		printf("%s %s %lu\n",studentArray[i].soyisim,studentArray[i].isim,studentArray[i].num);
	}

}

//UPDATE
void updateStudentData(Students *studentArray){
  int x=0,y=0;
   
    unsigned long sNumber;
    studentFile = fopen("student.txt","r+");
    Students studentArray2[studentNumber];
    if(studentFile == NULL){
        printf("File error!\n");
    
    }else{
    
        printf("Please enter student number to update data : \n");
        scanf("%lu",&sNumber);
        for(int i=0;i<studentNumber;i++){
        
            if(studentArray[i].num == sNumber){
                
				x=1;
                y=1;
                
				printf("%lu %s %s\n",studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
                printf("Student Number : \n");
                scanf("%lu",&studentArray2[i].num);
                printf("Student Name : \n");
                scanf("%s",studentArray2[i].isim);
                printf("Student Surname : \n");
                scanf("%s",studentArray2[i].soyisim);
                
                
            
            
            }
            else {
                studentArray2[i].num = studentArray[i].num;
                strcpy(studentArray2[i].isim,studentArray[i].isim);
                strcpy(studentArray2[i].soyisim,studentArray[i].soyisim);
                
               
            
            }
        
        }
        
        if (y==1)
            
        {
            
           
            
            printf("The record is modified\n");
            
        }
        if (x==0)
            
        {
    
            
            printf("No record found...\n");
            
           
            
        }

        fclose(studentFile);
        studentFile = fopen("student.txt","w");
        for (int i = 0; i <studentNumber; i++)
            
        {
            
            fprintf(studentFile,"%lu %s %s\n",studentArray2[i].num,studentArray2[i].isim,studentArray2[i].soyisim);
            studentArray[i] = studentArray2[i];
            
        }
        
        fclose(studentFile);
        
        
    
    }


}
int main(){
	Students studentArray[studentNumber];

	if((studentFile=fopen("student.txt","r")) != NULL){


//		printf("Dosyaya erisildi.\n");

		for(int i=0;i<studentNumber;i++){


			fscanf(studentFile,"%lu %s %s",&studentArray[i].num,studentArray[i].isim,studentArray[i].soyisim);
		}
		fclose(studentFile);

//		for(int i=0;i<studentNumber;i++){
//
//
//			printf("%lu %s %s\n",studentArray[i].number,studentArray[i].name,studentArray[i].surname);
//		}

			char selection;
       
   
      
        printf("========Please Select an Option =========\n");
        printf("1)Ascending sort by student numbers : \n");
        printf("2)Descending sort by student numbers : \n");
        printf("3)Ascending sort by student names : \n");
        printf("4)Descending sort by student names : \n");
        printf("5)Ascending sort by student surnames : \n");
        printf("6)Descending sort by student surnames : \n");
        printf("7)Update student data   : \n");
        while((selection=getchar())!='q'){
            
          
        
            switch(selection){
                case '1':
                    ascendingNumber(studentArray);
                  
                    break;
                case '2':
                    descendingNumber(studentArray);
                    
                    break;
                    
                case '3':
                    ascendingName(studentArray);
                    
                    break;
                case '4':
                    descendingName(studentArray);
                    
                    break;
                case '5':
                    ascendingSurname(studentArray);
                   
                    break;
                case '6':
                    descendingSurname(studentArray);
                    
                    break;
                case '7':
                    updateStudentData(studentArray);
                    
                    break;
                    
                    
                default:
                    printf("Wrong Input.Please try again!\n");
                    break;
                    
            }
            printf("========Please Select an Option =========\n");
            printf("1)Ascending sort by student numbers : \n");
            printf("2)Descending sort by student numbers : \n");
            printf("3)Ascending sort by student names : \n");
            printf("4)Descending sort by student names : \n");
            printf("5)Ascending sort by student surnames : \n");
            printf("6)Descending sort by student surnames : \n");
            printf("7)Update student data   : \n");
             selection = getchar();

        }
        
        
        
		
		


	}else{

		printf("No file");
	}




	getchar();
	return 0;
}
