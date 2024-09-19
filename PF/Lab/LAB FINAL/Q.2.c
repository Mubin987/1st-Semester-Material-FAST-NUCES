#include<stdio.h>
#include<stdlib.h>
int main(){
	int p[3][5],r[5][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
		printf("Enter value of p[%d][%d]: ",i,j);
		scanf("%d",&p[i][j]);
	}
	}
	printf("\nPrinting array p\n\n ");
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
		printf("%d ",p[i][j]);
	}
	printf("\n ");
	}
	
	printf("\nPrinting array r\n\n ");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
		r[i][j+2-i]=p[j][i];
		//printf("%d ",r[i][j+2-i]);
	}
	//printf("\n ");
	}
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
		printf("%d ",r[i][j]);
	}
	printf("\n ");
	}
}
