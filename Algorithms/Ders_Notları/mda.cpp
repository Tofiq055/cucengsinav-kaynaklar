#include <stdio.h>
#include <stdlib.h>




int main(){

	int c, d, k, sum=0;

	int first[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
	int second[2][4] = { { 7, 8, 9, 10 }, { 11, 12, 13, 14 } };
	int result[3][4];

	for (c = 0; c < 3; c++){
		for (d = 0; d < 4; d++){
			for (k = 0; k < 2; k++){
			sum = sum + first[c][k] * second[k][d];
			}
			result[c][d] = sum;
			sum = 0;
		}
	}


	for (c = 0; c < 3; c++){
		for (d = 0; d < 4; d++){
			printf("%d ", result[c][d]);
		}
		printf("\n");
	}



	return 0;
}