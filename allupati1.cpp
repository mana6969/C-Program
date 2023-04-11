//Input an array and swap each 2 consecutive digits
#include<stdio.h>
int main()
{
	int size,temp,i;
	printf("\nEnter the size of array : ");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the Elements : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		i=i+2;
	}
	printf("\nAfter swapping the Elements are : \n");
	for(i=0;i<size;i++)
	{
		printf("%2d",a[i]);
	}
	return 0;
}
