#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter how many element u want to entry in array : \n");
	scanf("%d",&n);
	int array[n];
	printf("Enter Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&array[i]);
	}
	printf("Your input elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}
