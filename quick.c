#include<stdio.h>
#include<stdlib.h>

void print(int a[],int size)
{
    for(int i=0;i<=size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void print1(int a[],int first,int last)
{
    for(int i=first;i<=last;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void quick_sort(int a[],int lb,int ub)
{
    if(lb < ub)
    {
         int pivot = a[lb];
         int start = lb;
         int end = ub;
         int  temp;
         print(a,6);
         //print1(a,lb,ub);

    while (start < end)
    {
        while(a[start] <= pivot)
        {
            start++;
        }
        while(a[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            temp = a[start];
            a[start] =  a[end];
            a[end] = temp;
        }
    }
        temp = a[lb];
        a[lb] = a[end];
        a[end] = temp;
    
        quick_sort(a,lb,end-1);
        quick_sort(a,end+1,ub);
     

    }
}
int  main()
{
    int  ub=6;
    int a[ub];
    int lb=0;
    

    for ( int i = 0; i <= ub; i++)
    {
        a[i] = rand() % 99+1;
    }
    print(a,ub);
    quick_sort(a,lb,ub);

    printf("after sort\n");
    print(a,ub);
    
    return 0;
}