#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Book{
	int id;
	char name[50];
	char author[50];
	int year;
	Book *next;
};

void AddBook(Book *b){
	printf("\nEnter book ID: "); scanf("%d", &b->id);
	printf("\nEnter book title: "); scanf("%s", &b->name);
	printf("\nEnter author: "); scanf("%s", &b->author);
	printf("\nEnter publish year: "); scanf("%d", &b->year);
	b->next = NULL;
}

void RemoveBook(Book *start, Book *b){
	while (start->next != b){
		start = start->next;
	}
	start->next = b->next;
}

void DisplayBook(Book *b){
	while (b != NULL){
		printf("\n%d\t%s\t%s\t%d", b->id, b->name, b->author, b->year);
		b = b->next;
	}
}

void Menu(){
	printf("\n1-Add book");
	printf("\n2-Remove book");
}

int main(){
	int selection, flag = 0, bookid;
	Book *home = (Book*)malloc(sizeof(Book));
	Book *pos = home;
	while (1){
		Menu();
		scanf("%d", &selection);

		switch (selection){
		case 1:
			if (flag == 0){
				AddBook(home);
				flag = 1;
				DisplayBook(home);
			}
			else{
				while (pos->next != NULL){
					pos = pos->next;
				}
				pos->next = (Book*)malloc(sizeof(Book));
				pos = pos->next;
				AddBook(pos);
				pos = home;
				DisplayBook(home);
			}
			break;
		case 2:
			printf("Enter book id to remove: "); scanf("%d", &bookid);

			while (pos->id != bookid){
				pos = pos->next;
			}
			RemoveBook(home, pos);
			DisplayBook(home);
			break;
		}
	}
	/*
	printf("Enter book id: "); scanf("%d", &sample->id);
	printf("Enter book title: "); scanf("%s", &sample->name);
	printf("Enter author: "); scanf("%s", &sample->author);
	printf("Publish year: "); scanf("%d", &sample->year);
	sample->next = NULL;
	sample->next = (Book*)malloc(sizeof(Book));
	
    printf("\n%d\t%s\t%s\t%d", sample->id, sample->name, sample->author, sample->year);
	*/
	return 0;
}
