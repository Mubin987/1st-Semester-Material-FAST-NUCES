#include<stdio.h>
int main()
{
	int anum=1,num,type;
	char a,b,c,d,e,s;
	printf("Enter type of data\n1 for numeric\n2 for textual\n3 for symbols\n");
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("Enter an Armstrong number: ");
			scanf("%d",&num);
			anum=((num/100)*(num/100)*(num/100))+((num%100/10)*(num%100/10)*(num%100/10))+((num%10)*(num%10)*(num%10));
			if(anum==num){printf("Number is Armstrong");
			}
			else{printf("Number is not Armstrong");
			}
		break;
		case 2:
			printf("Enter character 1: ");
			scanf("\n%c",&a);
			printf("Enter character 2: ");
			scanf("\n%c",&b);
			printf("Enter character 3: ");
			scanf("\n%c",&c);
			printf("Enter character 4: ");
			scanf("\n%c",&d);
			printf("Enter character 5: ");
			scanf("\n%c",&e);
			if(a==e&&b==d){printf("Palindrome");
			}
			else{printf("Not Palindrome");
			}
		break;
		case 3:
			printf("Enter symbol: ");
			scanf("\n%c",&s);
			printf("%c%c%c%c%c%c%c%c%c%c",s,s,s,s,s,s,s,s,s,s);
			printf("\n%c        %c",s,s);
			printf("\n%c        %c",s,s);
			printf("\n%c        %c",s,s);
			printf("\n%c%c%c%c%c%c%c%c%c%c",s,s,s,s,s,s,s,s,s,s);
		break;	
	}
}
