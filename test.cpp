#include<stdio.h>
#include"stdlib.h"
struct student
{
	char name[20];
	char address[10];
};
int main()
{
	int i,n;
	printf("\nEnter the size u want to put details : \n");
	scanf("%d",&n);
	struct student student[n];
	for(i=1;i<=n;i++)
	{
		printf("\nEnter the name and address for student[%d] : \n",i);
		scanf("%s%s",student[i].name,student[i].address);
	}
	printf("\nDisplay the name address of students : \n");
	for(i=1;i<=n;i++)
	{
		printf("\nThe name and address of student[%d] : \n\n",i);
		printf("Name-%s\tAddress-%s\n",student[i].name,student[i].address);
	}
	return 0;
}
