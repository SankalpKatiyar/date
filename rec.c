#include<stdio.h>
int fib(int);

int main()
{
	int num,i;
	printf("enter the number ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	printf("\t%d",fib(i));
}
int fib(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	return fib(num-1)+fib(num-2);
}

