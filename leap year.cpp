#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year to check it is leap year or normal year :");
	scanf("%d",&year);
	
	if (((year%4==0)&&(year%100!=0))||(year%400==0))
	    printf("%d is LEAP YEAR",year);
	else
	    printf("%d is NORMAL YEAR",year);
	return 0;
}
