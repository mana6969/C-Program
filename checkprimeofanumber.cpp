#include<stdio.h>
int main()
{
	int num,i,rem,check;
	printf("Enter a number : \n");
	scanf("%d",&num);
	while(num>0)
	{
		check=0;
		rem=num%10;
		if(rem==1)
		{
			printf("%d is Prime.\n",rem);
		}
		else
		{
			for(i=1;i<=rem;i++)
			{
				if(rem%i==0)
					{
						check++;
					}
			}
			if(check==2)
				{
					printf("%d is Prime.\n",rem);
				}
			else
				{
					printf("%d is not Prime.\n",rem);
				}
		}
		num=num/10;
	}
	return 0;
}
