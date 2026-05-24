#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int toplamDegisim=0;

//QuickSort
//--------------------------------------------
void quickSort(int array[],int left,int right){
    int i,j,p,temp;
    
    i=left;
    j=right;
    p=array[(left+right)/2];
    
    do{
        while((array[i]<p) && (i<right))
            i++;
        while((array[j]>p) && (j>left))
            j--;
        if(i<=j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            i++;
            j--;
            toplamDegisim+=1;
        
        }
    
    }while(i<=j);
    //Her parçayı kendi arasında sırala
    if(left<j)
        quickSort(array,left,j);
    if(i<right)
        quickSort(array,i,right);
    
}
//SelectionSort
//--------------------------------------------

void selectionSort(int array[],int n){
    int i,j,index,min;
    for(i=0;i<(n-1);i++){
    
        min=array[n-1];
        index=n-1;
        for(j=i;j<(n-1);j++){
            if(array[j]<min){
                min=array[j];
                index=j;
            }
        }
        
        if(i!=index){
            array[index]=array[i];
            array[i]=min;
        
        }
        
        toplamDegisim+=1;
    
    
    }}
//heapSort
//--------------------------------------------



int left(int i){return (2*i+1);}//Index of the left child of node i
int right(int i){return (2*i+1);}//Index of the right chield of node i
int heapSize;//index of the last element

void heapify(int array[],int i){
    int left_child,right_child,max,temp;
    left_child=left(i);
    right_child=right(i);
    
    //find the max of nodes left,right and i
    
    if((left_child<=heapSize) && (array[left_child]>array[i]))
        max=left_child;
    else
        max=i;
    
    if((right_child<=heapSize) && (array[right_child]>array[max]))
        max=right_child;
    
    //if max is not the i th node , exchange
    
    if(max!=i){
        temp=array[max];
        array[max]=array[i];
        array[i]=temp;
        toplamDegisim+=1;
        heapify(array,max);
    
    }


}

void buildHeap(int array[],int n){
    int i;
    heapSize=n-1;
    for(i=(n-1)/2;i>=0;i--)
        heapify(array,i);

}

void heapSort(int array[],int n){
    int i,temp;
    buildHeap(array,n);
    for(i=n-1;i>=1;i--){
        //exchange the root with the ith element
        temp=array[i];
        array[i]=array[0];
        array[0]=temp;
        heapSize--;
        toplamDegisim+=1;
        heapify(array,0);
    
    }
}


//----------------------------------------



int main(){
    clock_t start,end;
    double difference;
    int *ptr;
    //srand(time(NULL));
    char selection;
    int selection_2,i;
    printf("---------------------\n");
    printf("1)Create array[10]\n");
    printf("2)Create array[100000]\n");
    printf("3)Create array[1000000]\n");
    printf("---------------------\n");
    while((selection=getchar())!='q'){
        
        switch (selection) {
            case '1':{

                ptr=(int*)malloc(sizeof(int)*10);
                for(i=0;i<10;i++){
                    ptr[i]=rand();}
                    printf("4)Sort array[10] with Quick sort algorithm.\n");
                    printf("5)Sort array[10] with Heap sort algorithm.\n");
                    printf("6)Sort array[10] with Selection sort algorithm.\n");
                    scanf("%d",&selection_2);
                
                    if(selection_2==4){
                        start=clock();
                        quickSort(ptr,0,9);
                        end=clock();
                        difference=(double)(end-start)/CLOCKS_PER_SEC;
                        printf("Running time of array[10] with Quick Sort : %lf\n",difference);
                        printf("Number of comparison of array[10] : %d\n",toplamDegisim);
                        toplamDegisim=0;
                    
                    }
                    else if(selection_2==5){
                    
                        start=clock();
                        heapSort(ptr,10);
                        end=clock();
                        difference=(double)(end-start)/CLOCKS_PER_SEC;
                        printf("Running time of array[10] with Heap Sort : %lf\n",difference);
                        printf("Number of comparison of array[10] : %d\n",toplamDegisim);
                        toplamDegisim=0;

                        
                    
                    
                    }
                    else if(selection_2==6){
                        
                        start=clock();
                        selectionSort(ptr,10);
                        end=clock();
                        difference=(double)(end-start)/CLOCKS_PER_SEC;
                        printf("Running time of array[10] with Selection Sort : %lf\n",difference);
                        printf("Number of comparison of array[10] : %d\n",toplamDegisim);
                        toplamDegisim=0;
                    
                    
                    }
                
                
            
                free(ptr);
            }
                break;
            case '2':
            {
                
                ptr=(int*)malloc(sizeof(int)*100000);
                for(i=0;i<100000;i++){
                    ptr[i]=rand();}
                printf("4)Sort array[100000] with Quick sort algorithm.\n");
                printf("5)Sort array[100000] with Heap sort algorithm.\n");
                printf("6)Sort array[100000] with Selection sort algorithm.\n");
                scanf("%d",&selection_2);
                
                if(selection_2==4){
                    start=clock();
                    quickSort(ptr,0,99999);
                    end=clock();
                    difference=(double)(end-start)/CLOCKS_PER_SEC;
                    printf("Running time of array[100000] with Quick Sort : %lf\n",difference);
                    printf("Number of comparison of array[100000] : %d\n",toplamDegisim);
                    toplamDegisim=0;
                    
                }
                else if(selection_2==5){
                    
                    start=clock();
                    heapSort(ptr,100000);
                    end=clock();
                    difference=(double)(end-start)/CLOCKS_PER_SEC;
                    printf("Running time of array[10] with Heap Sort : %lf\n",difference);
                    printf("Number of comparison of array[10] : %d\n",toplamDegisim);
                    toplamDegisim=0;
                    
                    
                    
                    
                }
                else if(selection_2==6){
                    
                    start=clock();
                    selectionSort(ptr,100000);
                    end=clock();
                    difference=(double)(end-start)/CLOCKS_PER_SEC;
                    printf("Running time of array[10] with Selection Sort : %lf\n",difference);
                    printf("Number of comparison of array[10] : %d\n",toplamDegisim);
                    toplamDegisim=0;
                    
                    
                }
                
                
                
                free(ptr);

            
            
            }
                break;
            case '3':
            {
            
                ptr=(int*)malloc(sizeof(int)*1000000);
                for(i=0;i<1000000;i++){
                    ptr[i]=rand();}
                printf("4)Sort array[1000000] with Quick sort algorithm.\n");
                printf("5)Sort array[1000000] with Heap sort algorithm.\n");
                printf("6)Sort array[1000000] with Selection sort algorithm.\n");
                scanf("%d",&selection_2);
                
                if(selection_2==4){
                    start=clock();
                    quickSort(ptr,0,999999);
                    end=clock();
                    difference=(double)(end-start)/CLOCKS_PER_SEC;
                    printf("Running time of array[100000] with Quick Sort : %lf\n",difference);
                    printf("Number of comparison of array[100000] : %d\n",toplamDegisim);
                    toplamDegisim=0;
                    
                }
                else if(selection_2==5){
                    
                    start=clock();
                    heapSort(ptr,1000000);
                    end=clock();
                    difference=(double)(end-start)/CLOCKS_PER_SEC;
                    printf("Running time of array[10] with Heap Sort : %lf\n",difference);
                    printf("Number of comparison of array[10] : %d\n",toplamDegisim);
                    toplamDegisim=0;
                    
                    
                    
                    
                }
                else if(selection_2==6){
                    
                    start=clock();
                    selectionSort(ptr,1000000);
                    end=clock();
                    difference=(double)(end-start)/CLOCKS_PER_SEC;
                    printf("Running time of array[10] with Selection Sort : %lf\n",difference);
                    printf("Number of comparison of array[10] : %d\n",toplamDegisim);
                    toplamDegisim=0;
                    
                    
                }
                
                
                
                free(ptr);
                
                
            
            
            }
                break;
            default:
                printf("Wrong Entry!\n");
                break;
        }
    
    
    
    
        printf("---------------------\n");
        printf("1)Create array[10]\n");
        printf("2)Create array[100000]\n");
        printf("3)Create array[1000000]\n");
        selection=getchar();
    }



    getchar();
    return 0;}

