#include<stdio.h>
#include<stdlib.h>
int rec(int arr[],int,int);
int main(){
	int arr[100],i,l,h,rarr[100],*recarr,x;
	printf("Taking input of the seven array values\n\n");
	for(i=0;i<7;i++){
		printf("Enter value of arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter low: ");
	scanf("%d",&l);
	printf("Enter high: ");
	scanf("%d",&h);
	x=h-l;
	for(i=l;i<=h;i++){
		rarr[i-l]=arr[i];
	}
	recarr=rec(rarr,x,x);
	for(i=l;i<=h;i++){
		arr[i]=recarr[i-l];
	}
	for(i=0;i<7;i++){
		printf("\nValue of arr[%d]: %d",i,arr[i]);
	}
}
int rec(int rarr[],int x,int y){
	if(x==0){
		return;
	}
	else{
		rarr[x]=rarr[y-x];
		rec(rarr,x-1,y);}
	return rarr;
}
