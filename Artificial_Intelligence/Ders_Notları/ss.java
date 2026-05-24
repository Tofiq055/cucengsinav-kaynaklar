//package dmdw;

import java.util.Scanner;

import java.lang.Math;

public class kmeans {

public static void main(String[] args) {

//Scanner s = new Scanner(System.in);

int n,k,i,j,minpos;

k=30;

n=569;

System.out.println("Enter values:");

int arr[]=new int[569];

for(i=0;i<n;i++)

arr[i]=s.nextInt();

float means[]= new float[40];

float prev[]= new float[40];

int clus[][]=new int[40][569];

int clustop[]=new int[40];

for(i=0;i<k;i++)

means[i]=arr[i];

float min,flag=1;

while(flag==1)

{

flag=0;

for(i=0;i<k;i++)

if(prev[i]!=means[i])

{

flag=1;

break;

}

if(flag==1)

{

for(i=0;i<k;i++)

for(j=0;j<clustop[i];j++)

clus[i][j]=0;

for(i=0;i<k;i++)

clustop[i]=0;

for(i=0;i<n;i++)

{

minpos=0;

min=Math.abs(means[0]-arr[i]);

for(j=1;j<k;j++)

{

if(min>Math.abs(means[j]-arr[i]))

{

minpos=j;

min=Math.abs(means[j]-arr[i]);

}

}

clus[minpos][clustop[minpos]++]=arr[i];

}

for(i=0;i<k;i++)

prev[i]=means[i];

for(i=0;i<k;i++)

{

int sum=0;

for(j=0;j<clustop[i];j++)

sum+=clus[i][j];

means[i]=sum/clustop[i];

}

}

}

for(i=0;i<k;i++)

{

System.out.println("Mean : "+i);

System.out.println(means[i]);

System.out.println("Cluster : "+i);

for(j=0;j<clustop[i];j++)

System.out.println(clus[i][j]);

}

}

}