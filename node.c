#include<stdio.h>


struct Node
{
    int data;
    char ch;
    struct Node *ptr;
};


int  main()
{
    struct Node a,b;
    // int c=15;

    // c.p=&c;
    // printf("Value of c is : %d",*(a.p));

    a.data=65;
    a.ch='A';
    a.ptr=NULL;

        printf("Value of A is : \n data : %d char : %c\n",a.data,a.ch);   

    b.data=97;
    b.ch='a';
    b.ptr=NULL;

        printf("\nValue of B is : \n data : %d char : %c\n",b.data,b.ch);  

    a.ptr=&b;

        printf("\nValue of B is : \n data : %d char : %c\n", a.ptr->data, a.ptr->ch); 

    b.ptr=&a;
    
        printf("\nValue of A is : \n data : %d char : %c\n", b.ptr->data, b.ptr->ch); 
}