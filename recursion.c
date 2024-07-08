#include<stdio.h>

int recursion(int arr[5],int low, int high, int element)
{
    while(low<=high)
    {
        int mid = (high+low)/2;
            if(arr[mid] == element)
            {
                return mid;
            }
            if(arr[mid] < element)
            {
                return  recursion( arr, mid+1, high, element);
            }
            else
            {
                return recursion(arr,low, mid-1, element);
            }
    }
        return -1;
}

int main() 
{
    
    int arr[5]={9,5,8,12,45};
    int low=0;
    int high=5;
    int element=8;

    int result = recursion(arr,low,high,element);
    
    if(result == -1)
    {
        printf("element not found!");
    }
    else
    {
        printf("%d \t ",result);
    }
    
    return 0;
}