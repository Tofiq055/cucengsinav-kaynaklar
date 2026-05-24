#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 997

typedef struct{
	
	char id[11];
	char name[20];
	float gano;
	
}STUDENT;

STUDENT H[SIZE];

void initialize(){        // tablo oluþturuyor tablo boþ
	int i;
	for(i=0;i<SIZE;i++){
		strcpy(H[i].id,"");
	}
}

int hash(char *key,int size){    // indis hesaplýyor    ogrenci numarasýna gore en son bir onceki ve 7. sayýsýný alýyor.
	int i,j,k,result;
	i=key[10]-48;
	j=key[9]-48;
	k=key[6]-48;
	
	result=(k*100 + j*10+i)%size;
	return result;
}

int insert(STUDENT r){
	int c,i, p, q;
	p=hash(r.id,SIZE);
	c=0;
	i=1;
	q=p;
	while(strcmp(H[p].id,"")!=0 && strcmp(H[p].id,r.id)!=0 && c<=SIZE/2)   // tablo bos degilse ve ogreni id varsa 
	{
		c++;
		p=q+i*i;
		i++;
		if(p>SIZE-1){
			p=p%SIZE;
		}
		
	}
	if (strcmp(H[p].id,"")==0){
		
		strcpy(H[p].id,r.id);
		strcpy(H[p].name,r.name);
		H[p].gano=r.gano;
		return p;
	
		
	}
	else if(strcmp (H[p].id,r.id)==0){
		printf("Error,the same student cannot appear twice\n");
		
	}
	else{
		printf("Overflow,counter has reached its limit\n");
	}
}


int search(STUDENT r){
	int c,p,i,q;
	
	p=hash(r.id,SIZE);
	
	c=0;
	i=1;
	q=p;
	
	while(strcmp(H[p].id,r.id)!=0&& strcmp(H[p].id,"")!=0&& c<=SIZE/2) {
		c++;
		p=q+i*i;
		i++;
		if(p>SIZE-1){
			p=p%SIZE;
		}
	}
	if (strcmp(H[p].id,r.id)==0){
		return p;
	}
	else{
		return -1;
	}
}

int main(){
	int indis,x;
	STUDENT ogr1;
	initialize();
	strcpy(ogr1.id,"2013556035");
	strcpy(ogr1.name,"Seydi Kadir HAYTA");
	ogr1.gano=2.44;
	
	x=insert(ogr1);
	printf("Ogrenci %d indise yerlestirildi ",x);
	
	indis=search(ogr1);
	printf("\n\n\n%s %d indiste bulundu ",ogr1.name,indis);
	
}






