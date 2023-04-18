#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2,i,j,k;
	printf("\n Enter the size of first matrix : ");
	scanf("%d%d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\n Enter the element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter the size of second matrix : ");
	scanf("%d%d",&r2,&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\n Enter the element [%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	if(c1!=r2)
	{
		printf("Multiplication is not possible.");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("\n Multiplication of the matrices is :\n\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\t%d\t",c[i][j]);
			}
			printf("\n\n");
		}	
	}
	return 0;
}
