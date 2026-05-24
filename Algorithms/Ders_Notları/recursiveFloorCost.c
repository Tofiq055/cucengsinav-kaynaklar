#include <stdio.h>
#include <stdlib.h>


/*
Ýnþaat temeli 10000TL
Her kat 10000TL + %5*önceki masraflar

yani 

0 kat 10000
1 kat 20500 (10000+10000+10000*0.05)
2 kat 31525 (20500+10000+20500*0.05)
3 kat 43101 (31525+10000+31525*0.05)

GetPrice(int floor) -> rekürsif olarak tanýmlayýnýz. 

AMAÇ : Recursive yazýmýný pekiþtirmek!
*/


int CalcPrice(int floor){
	if (floor == 0) return 10000;
	return 10000 + 1.05*CalcPrice(floor-1); 
}

int main(int argc, char *argv[]) {
	int floor;
	printf("Enter the floor number: ");
	scanf("%d", &floor);
	printf("%d", CalcPrice(floor));
	return 0;
}

