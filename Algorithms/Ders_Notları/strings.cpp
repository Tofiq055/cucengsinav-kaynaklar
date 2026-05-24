#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void strreplace(char *s){
	int i = 0;

	while (s[i] != '\0'){
		if (s[i] == '\n') s[i] = ' ';
		i++;
	}

}


void up(char *str){
	int i = 0;
	while (str[i] != '\0'){
		str[i] = toupper(str[i]);
		i++;
	}
}



int main(void){
	int age, rf;
char data[] = "111 emre Kilinc 27 3\n222 ahmet AsLaN 60 6\n333 Mehmet Kara 40 5";

strreplace(data);
up(data);


char *token;

token = strtok(data, " ");


while (token != NULL){

	printf("TC No: %s ", token);

	token = strtok(NULL, " ");
	printf("Ad: %s ", token);

	token = strtok(NULL, " ");
	printf("Soyad: %s ", token);

	token = strtok(NULL, " ");
	printf("Age: %s ", token);
	age = atoi(token);

	token = strtok(NULL, " ");
	printf("RF: %s ", token);
	rf = atoi(token);

	printf("Ins. Cost: %.2f\n", age * rf * 10.0);


	token = strtok(NULL, " ");
}



return 0;
}