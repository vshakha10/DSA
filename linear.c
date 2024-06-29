#include <stdio.h>
#include <stdlib.h>

    void randomize(int arr[],int size) 
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
            printf("%d\n", arr[i]);
        }
    }

    void index (int arr[],int size)
    {
        int a;
        printf("enter the index : ");
        scanf("%d",&a);
        
        if(a<0||a>=size)
        {
            printf("Invalid index.\n");
        } 
        else 
        {
            printf("Value at index %d: %d\n", a, arr[a]);
        }
    }

    void check(int arr[], int size) 
    {
        int a;
        printf("Enter the number to check: ");
        scanf("%d", &a);
        int found;
        for (int i = 0; i < size; i++) 
        {
        if (a == arr[i])
        {
            printf("Number %d found at index %d.\n", a, i);
            break;
        }
        }
        if(! found)
        {
            printf("Number %d not found.\n", a);
        }
}


