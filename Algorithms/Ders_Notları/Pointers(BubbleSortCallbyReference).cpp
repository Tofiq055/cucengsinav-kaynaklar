#include <stdio.h>
#include <stdlib.h>


void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(){

	int arr[10] = { 5, 9, 4, 7, 3, 1, 5, 3, 8, 2 };
	int pass;
	int i;

	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");

	for (pass = 0; pass < 9; pass++) {
		for (i = 0; i < 9; i++){
			if (arr[i] > arr[i + 1]){
				swap(&arr[i], &arr[i + 1]);
			}
		}
	}
	

	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}	
	return 0;
}
