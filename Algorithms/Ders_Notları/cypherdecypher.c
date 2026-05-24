#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*

cypher, decypher
*/

int main(int argc, char *argv[]) {
	
	int i, choice;
	char word[10] = {'\0'};
	printf("Enter your choice\n1. Encrypt\n2. Decrypt\n3. Exit\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Enter the word to encrypt: ");
			scanf("%s", &word);
			
			for(i=0; i<10;i++){
				if (word[i] == '\0') break;
				word[i] += 3;
			}
			printf("\nyour encrypted word is: %s", word);
			break;
		case 2:
			printf("Enter the word to decrypt: ");
			scanf("%s", &word);
			
			for(i=0; i<10;i++){
				if (word[i] == '\0') break;
				word[i] -= 3;
			}
			printf("your decrypted word is: %s", word);
			
		case 3:
			break;
	}
	
	
	
	

	return 0;
}

