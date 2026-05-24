#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void){

	FILE *fPtr;

	int no, choice;
	char name[30];
	float balance;

	/* fprintf section 
	if ((fPtr = fopen("deneme.dat", "w")) == NULL){
		printf("dosya acilamiyor");
	}
	else {
		printf("Enter no: "); scanf("%d", &no);
		

		while (no != -1){
			printf("Enter name: "); scanf("%s", &name);
			printf("Enter balance: "); scanf("%f", &balance);
			
			fprintf(fPtr, "%d %s %.2f\n", no, name, balance);

			printf("Enter no: "); scanf("%d", &no);

		}
		fclose(fPtr);
	}

	 end of fprintf section */



	if ((fPtr = fopen("deneme.dat", "r")) == NULL){
		printf("dosya acilamiyor");
	}
	else {
		
		printf("1-Show accounts with zero balance\n2-Show accounts with + credits\n3-Exit\n");
		scanf("%d", &choice);

		switch (choice){
		case 1:
			fscanf(fPtr, "%d%s%f", &no, name, &balance);
			
			
			while (!feof(fPtr)){

					if (balance == 0){
						printf("%d %s %.2f\n", no, name, balance);
					}

				fscanf(fPtr, "%d%s%f", &no, name, &balance);
			}
			break;



		case 2:
			fscanf(fPtr, "%d%s%f", &no, name, &balance);


			while (!feof(fPtr)){

				if (balance > 0){
					printf("%d %s %.2f\n", no, name, balance);
				}

				fscanf(fPtr, "%d%s%f", &no, name, &balance);
			}


			break;




		case 3:
			return 0;
			break;



		}




















		fscanf(fPtr, "%d%s%f", &no, name, &balance);

		while (!feof(fPtr)){
		printf("%d %s %.2f\n", no, name, balance);
		fscanf(fPtr, "%d%s%f", &no, name, &balance);
		}





		fclose(fPtr);
	}







	return 0;
}