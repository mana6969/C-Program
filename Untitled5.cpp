//Factorial using function
#include<stdio.h>
int factorial(int x) 
{
	if (x <= 1)
		return 1;
	else
		return x * factorial (x-1);
}	
int main()
{
	int a;
	printf("\nEnter a number : \n");
	scanf("%d",&a);
	printf("The factorial of %d is : \n",a);
	printf("%d",factorial(a));
	return 0;
}

