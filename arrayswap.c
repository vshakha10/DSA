#include<stdio.h>
int main()
{
    int a[5],n,x;
    printf("enter the number of array : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("enter a[%d] : ",i);
        scanf("%d",&a[i]);
        x=a[0];
    }

    printf("\n swapping value :");
    for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
        a[i]=a[i+1];
    }

    printf("\n The answer : ");
    for(int i=0;i<n;i++)
    {
        a[4]=x;
        printf(" \t %d",a[i]);
    }

}