#include<stdio.h>
int main()
{
    int size,i,pos;
    printf("\nEnter the size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter elements for it : \n");
    for(i=0;i<size;i++)
    {
        printf("\nElement%d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe array elements are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter which position element u wanna delete :");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nAfter delete the array elements are : \n");
    for(i=0;i<size-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}