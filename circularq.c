#include<stdio.h>
#define n 5
int a[n] , f = -1 , r = -1;

int insert(int data)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else if ((r + 1)% n == f)
    {
        printf("Queue Is Full...\n");
    }
    else
    {
        r = (r + 1)% n;
        a[r] = data;
    }
}

int delete()
{
    if (f < 0)
    {
        printf("Queue Is Empty...\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1 ) % n;
    }
}

int display()
{
    int i = f;
    if (f < 0)
    {
        printf("Queue Is Empty...\n");
    }
    else
    {
        do
        {
            printf("%d\t",a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}


int main()
{
    insert(10);
    insert(20);
    
    insert(30);
    insert(40);
    
    insert(50);
    delete();
    delete();
    
    insert(60);
    display();
}