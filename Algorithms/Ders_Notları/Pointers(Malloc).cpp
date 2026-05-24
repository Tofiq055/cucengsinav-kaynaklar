#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
	
	int num, count=0, i;
	int *numbers = NULL;
	

	while (1){
		printf("Enter a number (0 to end): ");
		scanf("%d", &num);
		if (num == 0) break;
		count++;

		numbers = (int*)realloc(numbers, count * 4);

		*(numbers + count - 1) = num;
	}

	for (i = 0; i < count; i++){
		if (*(numbers + i) != *(numbers + count - 1 - i)){
			printf("Not palindrome\n");
			free(numbers);
			return 0;
		}
	}

	printf("Palindrome\n");
	free(numbers);

	getchar();
	return 0;
}