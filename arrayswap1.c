#include<stdio.h>
int main()
{
    int n,x;
    printf("enter the number of array :");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter a[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("\n swaping number ");
   
        x = a[0];
        a[0] = a[n - 1];
        a[n - 1] = x;

    printf("\n \t");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}
