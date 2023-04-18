#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],s[100][100],r,c,i,j;
	
	printf("Enter the size of row and column : ");
	scanf("%d %d",&r,&c);

    printf("Enter first matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the value of [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The first matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("  %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter second matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the value of [%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("The second matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("  %d",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The sum of two matrices is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("  %d",s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
