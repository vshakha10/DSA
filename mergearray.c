#include<stdio.h>
int main()
{
    int  array1[5],array2[2],array3[7];
    int i,j=0;
    printf("enter the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("enter the array2:");
    for(i=0;i<2;i++)
    {
        scanf("%d",&array2[i]);
    }
    for(i = 0;i<5;i++)
    {
        array3[j] = array1[i];
        j++;
    }
    for(i=0;i<2;i++)
    {
        array3[j] =array2[i];
        j++;
    }
    printf("merge array:");
    for(i=0;i<7;i++)
    {
        printf("%d \t",array3[i]);
    }
}
