#include <stdio.h>
#include <stdlib.h>


void change(int *ptr1, int *ptr2){
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(){
	
	int arr[] = {4,6,2,9,5,7,1};
	int k, size;
	
	size = sizeof(arr)/sizeof(arr[0]);
	
	while(1){
		int flag = 0;
		
		
		for (k = 0; k<size-1; k++){
			if(arr[k] > arr[k+1]){
				flag = 1;
				change(&arr[k], &arr[k+1]);
			}
		}
		
		if(flag == 0) break;
		
	}
	
	printf("Ordered array:\n");
	for (k=0; k<size; k++){
		printf("%d", arr[k]);
	}
	
	return 0;
}
