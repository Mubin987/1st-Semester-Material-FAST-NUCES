#include<stdio.h>
int main()
{
	int num,ft,lt,product,i=1,p;
	printf("Enter your roll number: ");
	scanf("%d",&num);
	ft=num/100;
	lt=num%100;
	product=ft*lt;
	printf("First two: %d",ft);
	printf("\nLast two: %d",lt);
	printf("\nProduct: %d",product);
	do{
		if(num%i==0){
			p++;
		}
	i++;
	}while(i<=num);
	if(p>2){
		printf("\nThe number is not a prime number");
	}
	if(p<2){
		printf("\nThe number is a prime number");
	}
}
