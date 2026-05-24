#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int item;
    struct node* next;

}STACK;

STACK *sp = NULL;

void printList();
int push(int item);//insert an element on top of the stack and returns the element that inserted
int pop();// remove and return the element on top of the stack
void reset();//empty the stack
int top();//last inserted element without removing it
int size();//returns number of elemets stored
int isEmpty();//Boolean value

int main() {
    isEmpty();
    printf("al sana size: %d\n",size());
    push(1);
    push(2);
    printf("al sana size: %d\n",size());
    pop();
    push(3);push(4);push(5);push(6);
    printList();
    printf("al sana size: %d\n",size());
printf("Top : %d\n",top());
isEmpty();
reset();
printList();
isEmpty();
    return 0;
}
void reset(){
    STACK* temp;

    while(sp!=NULL) {
        temp = sp;
        sp = sp->next;
        free(temp);
    }


}
void printList(){
    STACK* temp = sp;
    for(int i=0 ; temp!=NULL; i++){
        printf("%d \n",temp->item);
        temp = temp->next;
    }
}
int isEmpty(){
    if(sp==NULL){
        printf("it is empty\n");
        return 1;
    }
    else {printf("it is NOT empty\n");
        return 0;
    }

}
int size(){
    int i;
    STACK* temp = sp;

 for( i = 0 ; temp!= NULL; i++){
     temp=temp->next;
 }
 return i;

}
int top(){
    return sp->item;
}

int pop(){
    if(sp==NULL){
        printf("poplanacak birsey yok!\n");
        return 0;
    }
    STACK* temp;
    temp = sp;
    sp= sp->next;
    free(temp);
    return sp->item;


}
int push(int item){
STACK *p;
p =(STACK*) malloc(sizeof(STACK));
p->item = item;
p->next = sp;
sp = p;
return item;
}