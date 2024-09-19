#include<stdio.h>
#include<stdlib.h>
float *getmarks(int);
void display(float *ptr,int);
float Average_score(float[],int);
int main(){
	int N,i,j,temp;
	float *ptr;
	printf("For how many students you want to enter marks? ");
	scanf("%d",&N);
	ptr=(float*)malloc(N*sizeof(float));
	ptr=getmarks(N);
	//display(ptr,N);
	for(i=0;i<N;i++){
		printf("\nMarks of student %d: %f",i+1,ptr[i]);
	}
	printf("\nAverage: %f",Average_score(ptr,N));
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		if(ptr[i]<ptr[j]){
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;
		}
	}}
	printf("\n\nPrinting sorted numbers\n\n");
	for(i=0;i<N;i++){
		printf("\n %d: %f",i+1,ptr[i]);
	}
}
float * getmarks(int n){
	int i;
	float arr[100];
	for(i=0;i<n;i++){
		printf("Enter marks of student %d: ",i+1);
		scanf("%f",&arr[i]);
	}
	return arr;
}
void display(float *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nMarks of student %d: %f",i+1,arr[i]);
	}
}
float Average_score(float ptr[],int N){
	int i;
	float sum,avg;
	for(i=0;i<N;i++){
		sum+=ptr[i];
	}
	avg=sum/N;
	return avg;
}


