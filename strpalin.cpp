//string reversee
#include<stdio.h>
int main()
{
	int i,length=0,check=0;
	char str[50],strrev[50]={'\0'};
	printf("Enter a string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		length=length+1;
	}
	for(i=length-1;i>=0;i--)
	{
		strrev[length-1-i]=str[i];
	}
	for(i=0;i<length;i++)
	{
		if(strrev[i]!=str[i])
		{
			check=check+1;
		}
	}
	if(check==0)
	{
		printf("\n palindrome");
	}
	else
	{
		printf("\n not palindrome");
	}
	return 0;
}
