#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


void kar(int deste[4][13]){
	int cardno = 0;
	int row;
	int column;

	while (cardno < 52){

	while (1){
		row = rand() % 4;
		column = rand() % 13;
		if (deste[row][column] == 0) break;
	}
	deste[row][column] = cardno;
	cardno++;
	}

}


void dagit(int yDeste[4][13], char *face[], char *suit[]){
	
	int cardno = 0;
	int row;
	int column;


	while (cardno < 52){

	for (row = 0; row < 4; row++){
		for (column = 0; column < 13; column++){
			if (yDeste[row][column] == cardno) printf("%5s\t%s\n", face[column], suit[row]);
		}
	}
	cardno++;
	}



}



int main(void){
	srand(time(0));

	int deck[4][13] = { 0 };

	char *suit[4] = { "Kupa", "Karo", "Sinek", "Maca" };
	char *face[13] = { "as", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz", "on", "oglan", "kiz", "papaz" };

	kar(deck);
	dagit(deck, face, suit);


	return 0;
}