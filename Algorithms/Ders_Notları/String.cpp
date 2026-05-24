#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
	int i = 0;
	char *str = "abc def ghj klm";
	char a[100] = {'\0'};

	printf("%c", *str);
	while (*str != '\0'){
		if (*str == ' '){
			a[i] = *(str + 1);
			i++;
		}
		str++;
	}

	puts(a);

	return 0;
}