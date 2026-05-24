#include <stdio.h>


struct ClientData
{
	int accno;
	char name[10];
	float balance;
};

int main(void){


	int clientno;
	struct ClientData client = { 0, "", 0.0 };

	FILE *fPtr;

	if ((fPtr = fopen("clnt.dat", "rb+")) == NULL){
		printf("dosya acilamiyor: ");
	}
	else{
		printf("Duzeltilecek kaydin musteri nosunu giriniz: ");
		scanf("%d", &clientno);


		fseek(fPtr, clientno*sizeof(struct ClientData), SEEK_SET);

		fread(&client, sizeof(struct ClientData), 1, fPtr);
		printf("%d %s %.2f\n", client.accno, client.name, client.balance);

		printf("yeni isim gir: ");
		scanf("%s", &client.name);
		printf("yeni miktar gir: ");
		scanf("%f", &client.balance);


		rewind(fPtr);
		fseek(fPtr, clientno*sizeof(struct ClientData), SEEK_SET);

		fwrite(&client, sizeof(struct ClientData), 1, fPtr);

		/*
		fread(&client, sizeof(struct ClientData), 1, fPtr);

		while (!feof(fPtr)){


		printf("%d %s %.2f\n", client.accno, client.name, client.balance);
		fread(&client, sizeof(struct ClientData), 1, fPtr);
		
		}

		*/

		fclose(fPtr);
	}

	return 0;
}