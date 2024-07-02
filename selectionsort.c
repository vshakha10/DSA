#include <stdio.h>
void selection(int arr[],int n)
{
    int a;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;
    int element;
    
    printf("enter the array size :");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the element :");
        scanf("%d",&arr[i]);
    }
        
    display(arr,n);
    selection(arr,n);
    display(arr,n);
    return 0;
}