#include <stdio.h>
#include <stdlib.h>

struct Client
{
	int no;
	char name[20];
	int balance;
};


int main(){
	int number, counter=0;
	Client c;
	FILE *fp;

	fp = fopen("deneme.dat", "rb+");

	fread(&c, sizeof(Client), 1, fp);
	while (!feof(fp)){
		printf("%d %s %d\n", c.no, c.name, c.balance);
		fread(&c, sizeof(Client), 1, fp);
	}

	/* client edit section
	printf("Enter number to edit: "); scanf("%d", &number);

	fread(&c, sizeof(Client), 1, fp);

	while (c.no != number){
		fread(&c, sizeof(Client), 1, fp);
		counter++;
	}

	fseek(fp, counter*sizeof(Client), SEEK_SET);

	printf("Enter new number: "); scanf("%d", &c.no);
	printf("Enter new name: "); scanf("%s", &c.name);
	printf("Enter new balance: "); scanf("%d", &c.balance);

	fwrite(&c, sizeof(Client), 1, fp);
	*/
	fclose(fp);

	return 0;
}