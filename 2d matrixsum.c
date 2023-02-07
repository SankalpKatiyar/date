#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],i,j,r[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the a array");
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{printf("\n");
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the array b");
		scanf("%d",&b[i][j]);
	}
}
	
	for(i=0;i<2;i++)
	{printf("\n");
		for(j=0;j<2;j++)
		{printf("\t%d",b[i][j]);
	}
}


		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			r[i][j]=a[i][j]+b[i][j];
			printf("\t%d",r[i][j]);
		}
	}
}





