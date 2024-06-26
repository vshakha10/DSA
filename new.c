#include<stdio.h>
int main(){
    int  arr1[5],arr2[2],arr3[7];
    int i,j=0;
    printf("enter the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the array2:");
    for(i=0;i<2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i = 0;i<5;i++)
    {
        arr3[j] = arr1[i];
        j++;
    }
    for(i=0;i<2;i++)
    {
        arr3[j] =arr2[i];
        j++;
    }
    printf("merge array:");
    for(i=0;i<7;i++)
    {
        printf("%d \t",arr3[i]);
    }
}
