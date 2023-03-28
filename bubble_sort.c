#include<stdio.h>
int main()
{
    int size,i,j,temp;
    printf("\nEnter the size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter elements for it : \n");
    for(i=0;i<size;i++)
    {
        printf("Element%d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nBefore sorting the array elements are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting the array elements are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}