#include<stdio.h>
void main()
{
int dnum,rem,n,bnum,i=0;
printf("ennter the number");
scanf("%d",&dnum);
n=dnum;
while(dnum!=0)
{
	rem=dnum%2;
	bnum=bnum+rem*pow(10,i);
	printf("bnum=bnum+rem*poe(10,%d)====> %d\n",i,bnum);
	dnum=dnum/2;
	i++;
}
printf("\n the binary number is %d",bnum);
}








