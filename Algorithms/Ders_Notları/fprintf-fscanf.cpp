#include <stdio.h>
#include <stdlib.h>


int main(){
	int id, choice;
	char name[20];
	int balance;

	FILE *fptr;

	if ((fptr = fopen("deneme.txt", "r")) == NULL){
		printf("cant open");
	}

	// reading from file with fscanf
	else {
		printf("1-Show accounts with zero balance \n2-Show accounts with negative balance ");
		scanf("%d", &choice);

		switch (choice){
			case 1:
				fscanf(fptr, "%d%s%d", &id, &name, &balance);

				while (!feof(fptr)){
					if (balance == 0){
						printf("ID: %d, Name: %s, Balance: %d", id, name, balance);
					}
					fscanf(fptr, "%d%s%d", &id, &name, &balance);
				}


				break;
			case 2:

				fscanf(fptr, "%d%s%d", &id, &name, &balance);

				while (!feof(fptr)){
					if (balance > 0){
						printf("ID: %d, Name: %s, Balance: %d", id, name, balance);
					}
					fscanf(fptr, "%d%s%d", &id, &name, &balance);
				}

				break;
		}
		


		/* writing to file with fprintf
		printf("Enter worker id: "); scanf("%d", &id);


		while (id != 0){
			printf("Enter name: "); scanf("%s", &name);
			printf("Enter baance: "); scanf("%d", &balance);

			fprintf(fptr, "%d %s %d\n", id, name, balance);

			printf("Enter worker id: "); scanf("%d", &id);

		}
		*/

		fclose(fptr);

		
	}



	return 0;
}