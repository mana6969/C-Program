//addition of consecutive elements of an array
#include<stdio.h>
int main()
{
	int size,i,count=0;
	printf("\nEnter the size of array : \n");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter the elements : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("After adding the consecutive elements : \n");
	for(i=0;i<size-1;)
	{
		a[i/2]=a[i]+a[i+1];
		i=i+2;
		count=count+1;
	}
	if(size%2==0)
	{
		for(i=0;i<count;i++)
		{
			printf("%d",a[i]);
		}
	}
	else
	{
		a[count]=a[size-1];
		for(i=0;i<=count;i++)
		{
			printf("%3d",a[i]);
		}
	}
}
