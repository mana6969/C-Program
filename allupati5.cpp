#include<stdio.h>
int main()
{
	int size,i,j,temp,count;
	printf("\nEnter the size of array : ");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the elements in the array :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	//sorting the array
	for(j=0;j<size;j++)
	{
		for(i=0;i<size-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("\nAfter sorting the array the elements are : \n");
	for(i=0;i<size;i++)
	{
		printf("%3d",a[i]);
	}
	//sorting the odds
	for(j=0;j<size;j++)
	{
		for(i=0;i<size-1;i++)
		{
			if(a[i]%2==0)
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("\nAfter the sorting of odd numbers the elements are :\n");
	for(i=0;i<size;i++)
	{
		printf("%3d",a[i]);
	}
	//sorting the evens
	count=0;
	for(i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		{
			count++;
		}
	}
	for(j=count+1;j<size;j++)
	{
		for(i=count;i<size-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("\nAfter the sorting of even numbers the final output is :\n");
	for(i=0;i<size;i++)
	{
		printf("%3d",a[i]);
	}
	return 0;
}
