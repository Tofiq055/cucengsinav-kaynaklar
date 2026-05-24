
#include <stdio.h>


struct ClientData
{
	int accno;
	char name[10];
	float balance;
};




int main(void){

	struct ClientData client = { 0, "", 0.0 };

	FILE *fPtr;



	if ((fPtr = fopen("clnt.dat", "wb")) == NULL){
		printf("dosya acilamiyor");
	}
	else{

		printf("No giriniz: ");
		scanf("%d", &client.accno);


		while (client.accno != -1){

		printf("isim giriniz: ");
		scanf("%s", &client.name);

		printf("miktar giriniz: ");
		scanf("%f", &client.balance);


		fwrite(&client, sizeof(struct ClientData), 1, fPtr);


		printf("No giriniz: ");
		scanf("%d", &client.accno);

		}

		fclose(fPtr);
	}




	return 0;
}

