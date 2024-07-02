#include<stdio.h>
void bubble(int arr[],int n)
{
    int a;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                a= arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = a;
            }
        }
    }
    for(int i=0; i<n; i++) 
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element :");
        scanf("%d",&arr[i]);
    }

    bubble(arr,n);
}