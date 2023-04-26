#include<stdio.h>
#include<math.h>
int main ()
{
	int num,count=0,i,temp,sum=0,rem;
	printf("Enter the number : ");
	scanf("%d",&num);
	i=num;
	temp=num;
	while (num)
	{
		num=num/10;
		count=count+1;
	}
	printf("digit count=%d\n",count);
	while(i>0)
	{
		rem=i%10;
		sum=sum+pow(rem,count);
		i=i/10;
	}
	if(temp==sum)
	printf("%d is a armstrong number",temp);
	else
	printf("%d is not a amrstrong number",temp);
	return 0;
}
