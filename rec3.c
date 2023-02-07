#include<stdio.h>
int gcd(int, int);
int main()
{
	int n1,n2;
	printf("enter the numbet");
	scanf("%d%d",&n1,&n2);
	
		printf("%d %d %d.",n1,n2,gcd(n1,n2));
		return 0;
}
int gcd(int n1, int n2)
{
	if(n1==0)
	return n2;
	if(n2==0);
	return n1;
	if(n1>n2)
	return gcd(n1%n2,n2 );
	else 
	return gcd(n1,n2%n1);
	
	
}
