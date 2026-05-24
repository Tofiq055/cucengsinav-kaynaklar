#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Card{
	char type[10];
	char num[10];
};

void shuffle(Card deck[52]){
	int i, random;
	Card temp;
	for (i = 0; i < 52; i++){
		temp = deck[i];
		random = rand() % 52;
		deck[i] = deck[random];
		deck[random] = temp;
	}
}


int main(){
	srand(time(NULL));
	int i;
	char *face[] = { "Diamond", "Heart", "Spade", "Club" };
	char *number[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	

	Card kagit[52];

	for (i = 0; i < 52; i++){
		strcpy(kagit[i].type, face[i % 4]);
		strcpy(kagit[i].num, number[i % 13]);
	}

	shuffle(kagit);

	for (i = 0; i < 52; i++){
		printf("%s ", kagit[i].type);
		printf("%s\n", kagit[i].num);
	}
	return 0;
}
