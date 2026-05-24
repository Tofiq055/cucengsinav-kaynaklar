#include<stdio.h>
#include<string.h>
#include<conio.h>
#define SIZE 17
int heapsize;
struct information {
	int num;
	char isim[SIZE];
	char soyisim[SIZE];
};

void bubble(struct information list[]){
	int temp,i,j,z;
	char strng1[50],strng2[50];
	
	for(j=0;j<16;j++){
			for(i=0;i<16;i++){
				if (list[i].num>list[i+1].num){
					
					temp=list[i].num;		
					list[i].num=list[i+1].num;
					list[i+1].num=temp;
					
					strcpy(strng1,list[i].isim);		
					strcpy(list[i].isim,list[i+1].isim);
					strcpy(list[i+1].isim,strng1);
					
					strcpy(strng2,list[i].soyisim);		
					strcpy(list[i].soyisim,list[i+1].soyisim);
					strcpy(list[i+1].soyisim,strng2);
				}
			}
		}
	
		printf ("*********************************\n\nAscending student numbers with bubble sort:\n\n");
		for (z=0;z<SIZE;z++){
			printf("  %10d %10s %7s\n",list[z].num,list[z].isim,list[z].soyisim);
		}
	
	
	
}


void selection(struct information list[]){     //secmeli
	int i,j,min,z,index;
	char strng1[50],strng2[50];
	
	for(i=0;i<(SIZE-1);i++){
		
		min=list[SIZE-1].num;
		index=SIZE-1;
		
		for(j=i;j<(SIZE-1);j++){
			
			if(list[j].num<min){
				min=list[j].num;
				index=j;
				strcpy(strng1,list[i].isim);		
				strcpy(list[i].isim,list[i+1].isim);
				strcpy(list[i+1].isim,strng1);
				strcpy(strng2,list[i].soyisim);		
				strcpy(list[i].soyisim,list[i+1].soyisim);
				strcpy(list[i+1].soyisim,strng2);
			}
			
		}
		if(i!=index){
			list[index].num=list[i].num;
			list[i].num=min;
		}
	}
	printf ("*********************************\n\nAscending student numbers with selection sort :\n\n");
		for (z=0;z<SIZE;z++){
			printf("  %10d  %s %s\n",list[z].num,list[z].isim,list[z].soyisim);
		}
	
	
}


void insertion(struct information list[]){  //eklemeli   2 diziye atýyor  
	int i,k,z,key;
	char strng1[50];
	
	for (i=1;i<SIZE;i++){
		key= list[i].num;
		
		for(k=i-1; k>=0 && key <=list[k].num;k--) {
			list[k+1].num=list[k].num;
		
		}
			
		
		list[k+1].num=key;
	}
	printf ("*********************************\n\nAscending student numbers with insertion sort :\n\n");
		for (z=0;z<SIZE;z++){
			printf("  %10d \n",list[z].num);
		}
	
	
}

//merge sort
 #define MAX 50
void mergesort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);
void partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergesort(arr,low,mid,high);
    }
}

void mergesort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}  




void quicksort (struct information list[], int left, int right){
	int k,j,q,z,temp;
	k=left;
	j=right;
	q=list[(left+right)/2].num;
	
	do{
		while((list[k].num<q) && (k<right)){
			k++;
		}
		while((list[j].num>q) && (j>left)){
			j--;
		}
		
		if(k<=j){
			temp=list[k].num;
			list[k].num=list[j].num;
			list[j].num=temp;
			k++;
			j--;
		}
	}while(k<=j);
	
	if (left<j){
		quicksort(list,left,j);	
	}	
	if(k<right){
		quicksort(list,k,right);
	}
	
}

int left(int i){
	return (2*i+1);
}

int right(int i){
	return(2*i+2);
}

void heapify(struct information list[],int i){
	
	int left_child, right_child,max, temp;
	
	left_child=left(i);
	right_child=right(i);
	
	if ((left_child <= heapsize) && (list[left_child].num > list[i].num)){
		max=left_child;
	}
	else{
		max=i;
	}
	
	if((right_child <= heapsize) && (list[right_child].num > list[max].num)){
		max=right_child;
	}
	if(max!=i){
		
		temp=list[max].num;
		list[max].num=list[i].num;
		list[i].num=temp;
		heapify(list,max);
	}
}

void build_heap(struct information list[],int n){
	int i;
	heapsize=n-1;
	for(i=(n-1)/2;i>=0;i--){
		heapify(list,i);
	}
}


void heapsort(struct information list[],int n){
	int i, temp,z;
	build_heap(list, n);
	
	for (i=n-1; i>=1;i--){
		
		temp=list[i].num;
		list[i].num=list[0].num;
		list[0].num=temp;
		heapsize--;
		heapify(list,0);
	}
	printf ("*********************************\n\nAscending student numbers with heap sort :\n\n");
		for (z=0;z<SIZE;z++){
			printf("  %10d\n",list[z].num);}
	
}


int main()
{
	struct information list[SIZE];
	int temp,i,j,z;
	char strng1[50],strng2[50];
	int merge[MAX];
	int selected;
	
		FILE *dosya;
	
        printf("========Please Select an Option =========\n");
        printf("1)Selection Sort \n");
        printf("2)Bubble Sort \n");
        printf("3)Insertion Sort \n");
        printf("4)Merge Sort \n");
        printf("5)Quick Sort\n");
        printf("6)Heap Sort\n");
        
       	scanf("½d",&selected);
	   
	   		if((dosya=fopen("student.txt","r"))!=NULL)
	   		{
	   			printf("Dosyaya erisildi.\n\n");
	   			for(i=0; i<SIZE; i++) {
				   
	   			
				   	fscanf(dosya,"%d %s %s\n",&list[i].num,list[i].isim,list[i].soyisim);
	   			
			   }
	   		
	   		fclose(dosya);
	   		
	   	while(1){
		char operation;
		scanf("%s",&operation);
		
	
	
	switch(operation){
		
		case '1': 
		
				selection(list);
					break;
		
		case '2': 
		
				bubble(list);
					break;
		
		case '3': 
		
			insertion(list);
					break;
		
		case '4': 	
				
				for(i=0;i<SIZE;i++){
				merge[i] = list[i].num;
            }
            partition(merge,0,SIZE-1);
            printf ("*********************************\n\nAscending student numbers with merge sort :\n\n");
            for(i=0;i<SIZE;i++){
            	printf("%d\n",merge[i]);}
        	
			break;  
		
		case '5': 
					quicksort(list,0,SIZE-1);
					printf ("*********************************\n\nAscending student numbers with quick sort :\n\n");
					for (z=0;z<SIZE;z++){
						printf("  %10d\n",list[z].num);
					}
					break;
		
		case '6': 
		heapsort(list,SIZE);break;
		
		default: 
			printf("Baska secenek:\n");
					break;
			
	}
	 printf("========Please Select an Option =========\n");
        printf("1)Selection Sort \n");
        printf("2)Bubble Sort \n");
        printf("3)Insertion Sort \n");
        printf("4)Merge Sort \n");
        printf("5)Quick Sort\n");
        printf("6)Heap Sort\n");
	}
	   		

}

		else
			printf("Dosya bulunamadi.");
	
	
	return 0;
}
