#include<stdio.h>
int main()
{
    int n,x;
    printf("enter the number of array : ");
    scanf("%d",&n);

    int a[n];

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
    a[n-1]=x;
    printf("\n The answer : ");
    for(int i=0;i<n;i++)
    {
        
        printf(" \t %d",a[i]);
    }

}