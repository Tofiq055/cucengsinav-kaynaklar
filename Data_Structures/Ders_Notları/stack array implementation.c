#include <stdio.h>
//stack array implementation
#define N 10

int arr[N];
int sp= 0;

int push(int item);//insert an element on top of the stack and returns the element that inserted
int pop();// remove and return the element on top of the stack
void reset();//empty the stack
int top();//last inserted element without removing it
int size();//returns number of elemets stored
int isEmpty();//Boolean value

int isEmpty(){
    if(sp==0){
        return 1;
    }
    return 0;
}
int top(){return sp;}
void printList();//print

void printList(){
    for(int i=sp-1; i >=0; i--){
        printf("%d \n",arr[i]);
    }
}
int push(int item){
    if(sp>=N){
        printf("Not possible to insert an element! \n");
        return -1;
    }
    arr[sp] = item;
    sp++;
    return item;
}

int pop(){
    if(sp<=0){
        printf("Not possible to pop an element! \n");
        return -1;
    }
   sp--;
    return arr[sp];
}
void reset(){
    for(sp; sp>0;--sp)
        arr[sp] = 0;
}
int size(){return sp;}




int main() {
printf("IS empty? %d\n",isEmpty());
  push(1);
    push(2);
    push(3);
    pop();
    printf("IS empty? %d\n",isEmpty());
    push(4);
    push(5);
reset();
    printf("IS empty? %d\n",isEmpty());

printList();




    return 0;

}
