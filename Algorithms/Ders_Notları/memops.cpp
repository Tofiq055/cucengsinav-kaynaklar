#include <stdio.h>
#include <stdlib.h>


struct Student
{
	int no;
	char name[10];
	struct Student *next;
};




int main(void){


	int studentno;
	struct Student *root;
	struct Student *temp;

	root = (struct Student*)malloc(sizeof(struct Student));

	printf("Ogrenci no giriniz: ");
	scanf("%d", &root->no);
	printf("isim giriniz: ");
	scanf("%s", &root->name);
	root->next = NULL;


	temp = root;

	while (temp->next != NULL){
		temp = temp->next;
	}

	temp->next = (struct Student*)malloc(sizeof(struct Student));
	temp = temp->next;

	while (1){

		printf("Ogrenci no giriniz: ");
		scanf("%d", &studentno);
		if (studentno == 0){
			temp->next = NULL;
			break;
		}
		temp->no = studentno;
		printf("isim giriniz: ");
		scanf("%s", &temp->name);

		temp->next = (struct Student*)malloc(sizeof(struct Student));
		temp = temp->next;
	}

	temp = root;

	while (temp->next != NULL){
		printf("%d %s\n", temp->no, temp->name);
		temp = temp->next;
	}

	temp = root;
	printf("Getirilecek ogrenci no gir: ");
	scanf("%d", &studentno);

	while (temp->no != studentno){
		temp = temp->next;
	}

	printf("%d %s\n", temp->no, temp->name);





	return 0;
}