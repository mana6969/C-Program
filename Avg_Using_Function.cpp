//Calculate Avg Using Function
#include<stdio.h>
int avg(int a,int b,int c);
int main()
{
	int x,y,z;
	printf("Enter values of x , y and z to calculate avg : \n");
	scanf("%d%d%d",&x,&y,&z);
	printf("The avg of x , y and z is : %d ",avg(x,y,z));
	return 0;
}
int avg(int a,int b,int c)
{
	int sum;
	sum=a+b+c;
	return sum/3;
}
