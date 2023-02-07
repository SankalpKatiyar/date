#include<stdio.h>
int main()
{
	int size,arr[10],i,j,temp;
	printf("enter the size of an array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter the array element");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i;j<size-1;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	printf("\t%d",arr[i]);
}
