#include <stdio.h>

int i;
#define PI 3.14
#define LOOP(n) for(i=0; i<n; i++)
#define PRINT(x) printf("%s\n", x)  
#define CIRCLEAREA(r) ( (PI)* (r) *(r) )

#define MINIMUM3(x, y, z)   (MINIMUM(x, y)<z?MINIMUM(x, y):z)
#define MINIMUM(x, y) (x<y?x:y)

int main(){
	
	int a, b, c;
	printf("Enter three number: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("The minimum number is %d", MINIMUM3(a, b, c));

	return 0;
}