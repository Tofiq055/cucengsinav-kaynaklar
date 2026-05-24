#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct card
{
	char *face;
	char *suit;
};

typedef struct card Kart;

void fillCards(Kart *kartlar, char *face[13], char *suit[4]){
	int i = 0;
	for (i = 0; i < 52; i++){
		kartlar[i].face = face[i % 13];
		kartlar[i].suit = suit[i % 4];
	}
}


void shuffle(Kart *deste){
	int i, j;
	Kart temp;

	for (i = 0; i < 52; i++){
		j = rand() % 52;
		temp = deste[i];
		deste[i] = deste[j];
		deste[j] = temp;
		printf("%s %s\n", deste[i].suit, deste[i].face);
	}
}


void deal(Kart *deste){
	int i;
	for (i = 0; i < 52; i++){
		printf("%s %s\n", deste[i].suit, deste[i].face);
	}
}

int main(void) {
	srand(time(NULL));
	char *face[13] = { "as", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz", "on", "oglan", "kiz", "papaz" };
	char *suit[4] = { "Kupa", "Karo", "Sinek", "Maca" };

	Kart kartlar[52];


	fillCards(kartlar, face, suit);
	shuffle(kartlar);
	




	return 0;
}