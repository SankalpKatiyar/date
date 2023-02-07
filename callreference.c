#include<stdio.h>
int swap(int *x,int *y);
void main()
{
	int a=30,b=40;
	swap(&a,&b);
	printf("the swap values are %d ,%d ",a,b);
}
int swap(int *x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return *x;
	return *y;
}
