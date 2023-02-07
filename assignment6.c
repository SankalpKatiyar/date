

#include<stdio.h>
#include<string.h>
#define n 1
typedef struct address
{
	int houseno;
	char street[50];
	char city[50];
	char state[50];
	int pincode; 
	
}address;
typedef struct employee
{
	char name[30];
	char dept[30];
	address addres;
	int salary;
}employee;


int main()
{
	employee emp[n];
	address add[n];
	int i,s;
	char c[]={"mechanical"},ch[30];
	for(i=1;i<=n;i++)
	{
	
	printf("Enter the name of the employee [ %d ] \n",i);
	fflush(stdin);
	gets(emp[i].name);
	printf("enter the house no.\n");
	scanf("%d",&add[i].houseno);
	printf("enter the street \n");
	fflush(stdin);
	gets(add[i].street);
	printf("enter the city \n");
	fflush(stdin);
	gets(add[i].city);
	printf("enter the state \n");
	fflush(stdin);
	gets(add[i].state);
	printf("enter the pincode\n");
	scanf("%d",&add[i].pincode);
	printf("enter the department\n ");
	fflush(stdin);
	gets(emp[i].dept);
	printf("enter the employee %d salary\n",i);
	scanf("%d",&emp[i].salary);
}
printf("\n emp name\thouseno.\tstreet\tcity\tstate\tpincode\tdept\tsalary\n");
for(i=1;i<=n;i++)
{
	
	printf("\n%s|",emp[i].name);
	printf("\t%d|",add[i].houseno);
	printf("\t%s|",add[i].street);
	printf("\t%s|",add[i].city);
	printf("\t%s|",add[i].state);
	printf("\t%d|",add[i].pincode);
	printf("\t%s|",emp[i].dept);
	printf("\t%d",emp[i].salary);

}

printf("\n----------------------------------------------------\n mechanical \n----------------------------------------------------\n");

for(i=1;i<=n;i++)
{
	strcpy(ch,emp[i].dept);
	s=strcmpi(ch,c);
	if(s==0)
	{
		printf("\nname\thouseno\tstreet\tcity\tstate\tpincode\tdept\tsalary\n");
		printf("%s|\t%d|\t%s|\t%s|\t%s|\t%d|\t%s|\t%d",emp[i].name,add[i].houseno,add[i].street,add[i].city,add[i].state,add[i].pincode,emp[i].dept,emp[i].salary);
	}
	else
	{
		printf("\n========\nother dept\n=======\n");
		printf("%s",emp[i].dept);
	}
}

}
