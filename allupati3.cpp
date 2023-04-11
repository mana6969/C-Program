//Input an array and swap each 3 consecutive digits.Then swap 6 consecutive,3 at a time
#include<stdio.h>
int main()
{
	int size,i,temp;
	printf("\nEnter the size of array : ");
	scanf("%d",&size);
	int a[size];
	printf("\nInput Elements : \n");
	for(i=0;i<size;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<size-2;)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=a[i+2];
		a[i+2]=temp;
		i=i+3;
	}
	printf("\nAfter swapping the numbers are :\n");
	for(i=0;i<size;i++)
	{
		printf("% d",a[i]);
	}
	for(i=0;i<size-5;)
	{
		temp=a[i];
		a[i]=a[i+3];
		a[i+3]=temp;
		
		temp=a[i+1];
		a[i+1]=a[i+4];
		a[i+4]=temp;
		
		temp=a[i+2];
		a[i+2]=a[i+5];
		a[i+5]=temp;
		i=i+6;
	}
	printf("\nAfter swapping the Elements are : \n");
	for(i=0;i<size;i++)
	{
		printf("% d",a[i]);
	}
	return 0;
} 
