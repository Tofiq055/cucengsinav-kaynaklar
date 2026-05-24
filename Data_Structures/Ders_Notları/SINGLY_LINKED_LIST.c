#include <stdlib.h>
#include <stdio.h>
// singly linked list YAZIYORUM!

int sira = 0;


typedef struct Node{
    int data;
    struct Node *next;
}node_t;
node_t *head = NULL;
node_t *tail = NULL;

//prototypes:
int printList(); void addLast(node_t*,int); void addFirst(node_t*, int); void deleteFirst(); node_t* findPrevof(node_t*); void deleteLast(); void deleteMiddle(int); void addMiddle(node_t*,int j,int data);
void listGenerator(node_t*,int );
void reSet(){
	int i;
    while(head!=NULL){
	deleteFirst();}
    
    if(head==NULL) printf("List is Empty!");

}
int main(){
node_t *p;
p = (node_t*) malloc(sizeof(node_t));
int x=-1;
int data,j;
    printf("Operasyonu seciniz:\n 1.PrintList\n 2.AddLast \n 3.addFirst\n 4.AddMiddle \n 5.deletefirst\n 6.deleteLast\n 7.deletemiddle\n8.ListGenerator\n 9.Reset \nExit -> 0");
    do{

        scanf("%d",&x);

        if(x==1) printList();
        if(x==2){
            printf("datayi giriniz: ");
            scanf("%d",&data);
            addLast(p,data);
        }
        if(x==3){
            printf("datayi giriniz: ");
            scanf("%d",&data);
            addFirst(p,data);
        }
        if(x==4){
            printf("datayi ve indexi giriniz: ");
            scanf("%d",&data);
            scanf("%d",&j);
            addMiddle(p,j,data);
        }
        if(x==5) deleteFirst();
        if(x==6) deleteLast();
        if(x==7){
            printf("silmek istediginiz indexi giriniz: ");
            scanf("%d",&data);
            scanf("%d",&j);
            deleteMiddle(j);
        }
        if(x==8) {
            printf("Kac adet node olusturulsun? : ");
            scanf("%d",&data);
            listGenerator(p,data);
        }
        if(x==9){
            reSet();
        }


    }while(x!=0);
    return 0;
}


void addMiddle(node_t* p, int j, int data){
    node_t* temp;
    node_t* prev;
    p = (node_t*) malloc(sizeof(node_t));

    temp=head;
    if(j>sira-1){
        addLast(p,data);
        printf("Index is out of the range! \naddLast fonksiyonu cagirildi! \n");
        return;
    }
    if (j<=0){ addFirst(p,data); return;}

    if(j>0){
    	int i;
        for(i=0; i<j; i++)
        temp = temp->next;


        prev= findPrevof(temp);
        prev->next = p;
        p->next = temp;
      p->data = data;
        }
sira++;
    }
void listGenerator(node_t *p,int j){
	int i;
    for(i = 0; i<j; i++){
        addLast(p,i);
    }
    sira=sira+j;
}
void deleteFirst(){
    node_t *temp;
    if(head==NULL)
        printf("Listenin basi zaten bos!");


    if(head==tail){//bir tane elemanim var
        head = NULL;
        tail = NULL;
    }
    else {
        temp = head;
        head = head->next;
        free(temp);
    }
    sira--;
}
void deleteLast(){
    node_t *temp;
    temp = (node_t *) malloc(sizeof(node_t));
    if(tail == NULL){
        printf("Listenin sonu zaten bos?!");

    }

    if(head==tail){
        head = NULL;
        tail = NULL;
    }
    else{
        node_t *prev;
        prev=findPrevof(tail);
        temp = tail;
        prev->next = NULL;
        tail = prev;


      free(temp);
    }
    sira--;
}
int printList(){
    node_t *p;
    p=head;
    if(p == NULL){
        printf("Liste bostur!");
        return -1;
    }
    while(p != NULL){
        printf(" data : %d \n", p->data);
        p = p->next;

    }
    return 0;
}
void addFirst(node_t* p, int x){//basa ekliyorum
    p = (node_t *) malloc(sizeof(node_t));

    if (head == NULL) {
        head = p;
        tail = p;
        head->data = x;
        p->next = NULL;


    } else
    {
        p->next = head;
        head = p;
        head->data = x;


    }
   sira++;

}
void addLast(node_t *p, int x) {

    p = (node_t *) malloc(sizeof(node_t));
    if (tail == NULL) {
        head=p;
        tail = p;

        tail->data = x;

        tail->next = NULL;
    }
    else {
        tail->next = p;
        tail = p;
        tail->data = x;
        tail->next = NULL;

    }
 sira++;
}
node_t* findPrevof(node_t* z){
    node_t* prev;
    prev = head;
    while(prev->next != z){
        prev = prev->next;
    }
    return (node_t*) prev;
}
void deleteMiddle(int j){
    node_t *temp;
    node_t *prev;
    temp = head;

    if(j>sira-1){
        printf("Hata!\n");
        return;
    }
    if(head==NULL){
        printf("Deletion is impossible!");
        return;
    }
    if(j == 0) deleteFirst();

    if(j > 0){
    	int i;
        for( i=0; i<j; i++){
            temp=temp->next;
        }
        prev= findPrevof(temp);
        prev->next=temp->next;
        temp->next = NULL;
        free(temp);
    }
    sira--;
}
