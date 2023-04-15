#include<stdio.h>
int main(){
	int num,rem,rev=0,temp;
	printf("Enter the number to check it is palindrome or not : ");
	scanf("%d",&num);
	temp=num;
	while (num>0)
      {
	    rem=num%10;
	    rev=(rev*10)+rem;
	    num=num/10;
      }
      if (rev==temp)
         printf("%d is palindrome",temp);
      else
	     printf("%d is not palindrome",temp);   
	
	return 0;
}
