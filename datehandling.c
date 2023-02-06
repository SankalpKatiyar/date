#include<stdio.h>
#include<stdlib.h>
typedef struct date
{
	int day;
	int month;
	int year;
	
}date;
int main()
{
	date today;
	printf("enter the day\n");
	scanf("%d",&today.day);
	printf("enter the month \n");
	scanf("%d",&today.month);
	printf("enter the year \n");
	scanf("%d",&today.year);
	printf("\n the current date is %d/%d/%d",today.day,today.month,today.year);
	today.day=today.day+45;
	while(today.day>31)
	{
	switch(today.month)
	{
		case 2:
			if(today.year%400==0||(today.year%4==0&&today.year%100!=0))
			{
				if(today.day>29)
				{
					today.day-=29;
					today.month++;
				}
			}
				else if(today.day>28)
				{		
					today.day-=28;
					today.month++;
				}
		
			break;
			case 4: case 6: case 9: case 11: 
			if(today.day>30)
			{
					today.day-=30;
					today.month++;
					
			}
			break;
	
			default :
				if(today.day>31)
				{
				
				today.day-=31;
				today.month++;
				}
			break;			
	}
	if(today.month>12)
	{
		today.month=1;
		today.year++;
	}
	
}
printf("\n \n the final date is %d/%d/%d",today.day,today.month,today.year);
return 0;
}	
