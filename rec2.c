#include<stdio.h>
int fact(int);
int main()
{
	int num,i;
	printf("enter the number");
	scanf("%d",&num);
	printf("%d",fact(num));
	
}
int fact(int num)
{
	if(num==0)
	return 0;
	else if(num==1)
	return 1;
	else
	return (num*fact(num-1));
}
