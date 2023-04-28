#include<stdio.h>
int main()
{
	int array2[100],array1[100],i,n;
	printf("Enter the number of elements to be store in the array :\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&array1[i]);
	}
	for(i=0;i<n;i++)
	{
		array2[i] = array1[i];
	}
	printf("The Elements stored in first array are : \n");
	for(i=0;i<n;i++)
	{
		printf(" %d",array1[i]);
	}
	printf("\nThe Elements copied into second array are : \n");
	for(i=0;i<n;i++)
	{
		printf(" %d",array2[i]);
	}
	printf("\n\n");
	return 0;
}
