#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;
int display()
{
    if (f < 0)
    {
        printf("array is empty....");
    }
    else
    {
        for (int i = f; i <= r; i++)
            printf("%d ", a[i]);
    }
}
int rearinsert()
{
    int value;
    printf("enter value : ");
    scanf("%d", &value);
    if (r > n - 1)
    {
        printf("\n The queue is full \n");
    }
    else
    {
        if (f < 0)
        {
            f = r = 0;
            a[r] = value;
        }
        else
        {
            r++;
            a[r] = value;
        }
    }
}
int firstdelete()
{
    if (f < 0)
    {
        printf("empty.....");
    }
    else
    {
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f++;
        }
        printf("\n value deleted:");
    }
}
int firstinsert()
{
    int value;
    printf("enter value : ");
    scanf("%d", &value);
    if (f == 0)
    {
        printf("do not insert again....");
    }
    if (f < 0)
    {
        f = r = 0;
        a[f] = value;
    }
    else
    {
        --f;
        printf("\n value deleted:");
    }
}
int reardelete()
{
    if (f < 0)
    {
        printf("empty....");
    }
    else
    {
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            --r;
        }
        printf("\n value delete : ");
    }
}
int main()
{
    int ch;
    printf("1.display \n");
    printf("2.rearinsert \n");
    printf("3.firstdelete\n");
    printf("4.first insert \n");
    printf("5.reardelete:\n");
    printf("6.the end:\n");
    do
    {
        printf("\nenter your choice : ");
        scanf("%d", &ch);
        int data;
        switch (ch)
        {

        case 1:
            display();
            break;

        case 2:
            rearinsert();
            break;

        case 3:
            firstdelete();
            break;

        case 4:
            firstinsert();
            break;

        case 5:
            reardelete();
            break;

        default:
            printf("wrong choice : ");
            break;
        }
    } 
    while (ch != 0);
}