#include<stdio.h>
#include<stdlib.h>
#define x 10

void Merge(int a[] , int low ,int mid ,int high)
{
    int b[x];
    int i = low , j = mid + 1 , k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    
    while(i <= mid)
            b[k++] = a[i++];

    while(j <= high)
            b[k++] = a[j++]; 

    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

int sort(int a[] , int low , int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        sort(a , low , mid);
        sort(a , mid + 1 ,high);
        Merge(a,low,mid,high);
    }
}
int main()
{
    int a[x], i,n=x;

    for ( i = 0; i < n; i++)
    {
        a[i] = rand() % 99+1;
    }

    printf("Before Sorting Array is: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }

    sort(a , 0 , n - 1);
    printf("\nAfter Sorting Array is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}    