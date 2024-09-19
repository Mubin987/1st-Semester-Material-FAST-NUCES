#include<stdio.h>
int main()
{
	int year,y1,y2,y3,y4,tot,td,d,nb;
	do{
	printf("Enter your batch year or -1 to exit: ");
	scanf("%d",&year);
	if(year==-1){
		break;
	}
	if(year==21){
		d=3000;
	}
	if(year==20){
		d=4500;
	}
	if(year==19){
		d=6000;
	}
	if(year==18){
		d=7500;
	}
	tot=tot+30000;
	td=td+d;
	}while(year!=-1);
	td=td-1;
	nb=tot-td;
	printf("\nTotal Bill: %d",tot);
	printf("\nTotal Discount: %d",td);
	printf("\nNet Bill: %d",nb);
}
