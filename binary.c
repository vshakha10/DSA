#include <stdio.h>
#include <stdlib.h>

    void randomsize(int arr[],int size) 
    {
        for (int i=0;i<size;i++) 
        {
            arr[i]=(rand()%50)+1;
        }
    }

    void display(int arr[],int size) 
    {
        for (int i=0;i<size;i++) 
        {
            printf("%d\t", arr[i]);
        }
    }

    void sorted (int arr[],int size) 
    { 
        int a; 
        for (int i = 0; i < size; i++) 
        { 
            for (int j = i; j < size; j++) 
            { 
                if (arr[i] > arr[j]) 
                { 
                    a = arr[i]; 
                    arr[i] = arr[j]; 
                    arr[j] = a; 
                }       
            } 
        }    
    } 

    int search(int arr[],int high,int low,int mid,int find_element) 
    { 
        printf("\nenter the element which you want to find : "); 
        scanf("%d",&find_element); 
 
        while (low <= high) 
        { 
            mid = (low + high) / 2; 
 
            if (arr[mid] == find_element) 
            { 
                return mid; 
            } 
            if (arr[mid] < find_element) 
            { 
                low = mid + 1; 
            } 
            else 
            { 
                high = mid - 1;  
            } 
        } 
        return 0; 
    } 


int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size]; 
    int low=0; 
    int high=size-1; 
    int mid; 
    int find_element; 
 
   
    randomsize(arr,size); 
    sorted(arr,size); 
    display(arr,size); 
    
    int index = search(arr,high,low,mid,find_element); 
    if (index != -1) 
    { 
       printf("Element found at index : %d",index); 
    } 
    else 
    { 
        printf("Element not found");
    } 
    return 0; 
}




