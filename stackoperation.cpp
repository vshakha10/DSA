#include<iostream>
using namespace std;
class stack
{
    int a[5],top=-1;

    public:
    void push();
    void pop();
    void display();
    void exit();

    void stack :: push() 
    {
        int data;
            if(top==5-1)
            {
                    printf("\n stack is full\n");
            }
            else
            {
                    printf("enter element:");
                    scanf("%d",&data);
                    top++;
                    a[top]=data;
            }
    }
    void stack :: pop()
    {
            if(top==-1)
            {
                    printf("stack is empty\n");
            }
            else
            {
                    printf("pop element:%d\n",a[top]);
                    top--;
            }
    }
    void stack :: display()
    {
            int i;
            if( top>=0)
            {
                    printf("element:\n");
                    for(i=top;i>=0;i--)
                    printf("%d\n",a[i]);
            }
            else
            {
                printf("stack is empty\n");
            }
    }
};

int main()
{
    stack s;
    s.push();
    s.pop();
    s.display();
    s.display();
    
    int choice;
    printf("1.push or insert\n");
    printf("2.pop or delete\n");
    printf("3.display\n");
    printf("4.exit\n");
    
    while(1)
    {
       printf("enter the choice:");
       scanf("%d",&choice);
       switch(choice)
      {
          case 1:
          {
               push();
               break;
          }
          case 2:
          {
              pop();
              break;
          }
          case 3:
          {
              display();
              break;
          }
          case 4:
          {
              exit (0);
          }
          default:
          {
              printf("wrong choice");
          }
      } 
       
    }
    

   while(choice!=0);
   return 0;
}