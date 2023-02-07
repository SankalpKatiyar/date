#include<stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("enter a number \n");
	scanf("%d",&a);
	fflush(stdin);
	printf("enter the operrator +,-,%,/ \n");
	scanf("%c",&ch);
	printf("enter the number b\n");
	scanf("%d",&b);

	
	switch(ch)
	{
		case '+':
		printf("addition %d ",a+b);
		break;
		case '-':
		printf("subtraction %d",a-b);
		break;
		case '*':
		printf("multiplication %d",a*b);
		break;
		case '%':
		printf("remainder %d",a%b);
		break;
		default :
		printf("entered wrong operator %c",ch);
	}
}
