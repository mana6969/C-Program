#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int i,sum,count=0,temp,flag;
    temp=n;
    flag=n=temp;
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("\n%d",count);
    int a[count];
    for(i=0;i<count;i++)
    {
        temp=flag%10;
        a[i]=temp;
        flag=flag/10;
        printf("\n%d",flag);
    }
    sum=0;
    for(i=0;i<count;i++)
    {
        sum=sum+a[i];
        printf("\n%d",sum);
    }
    printf("%d",sum);
    return 0;
}
