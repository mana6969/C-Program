//Input an array and search an element
#include<stdio.h>
int main()
{
	int size,i,e,flag=0;
	printf("\nEnter the size of array : ");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the elements :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the Element to search : ");
	scanf("%d",&e);
	for(i=0;i<size;i++)
	{
		if(a[i]==e)
		{
			printf("\nElement present at position %d",i+1);
			flag=flag+1;
		}
	}
	if(flag==0)
	{
		printf("\nElement is not present ");
	}
	return 0;
}
