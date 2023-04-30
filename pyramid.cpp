#include<stdio.h>
int main()
{
	int i,j,rows,k;
	
	printf("Enter the number of rows : ");
	
	scanf("%d",&rows);
    
	  
	for(i=1,k=1;i<=rows;i++,k+=2)
		{
			for(j=1;j<=rows-i;j++)
			{
				printf("  ");
			}
			for(j=1;j<=k;j++)
			{
				printf("* ");
			}
			
			printf("\n");
		}
		
	return 0;
}
