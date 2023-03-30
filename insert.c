#include<stdio.h>
int main()
{
    int size,i,el,pos;
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements for it : \n");
    for(i=0;i<size;i++)
    {
        printf("Element%d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array elements are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the element u wanna insert : ");
    scanf("%d",&el);
    printf("\nEnter the position where u wanna insert : ");
    scanf("%d",&pos);
    printf("\nAfter insertion the array elements are : \n");
    for(i=size;i>=pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=el;
    for(i=0;i<size+1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}