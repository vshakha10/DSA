#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *ptr;
};
struct node *head = NULL;

void insert_end(int val)
{
   
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node) );

    temp -> data = val;
    temp -> ptr = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr -> ptr != NULL)
    {
        ptr = ptr -> ptr;
    }
    ptr -> ptr = temp;
    return;

} 

void  insert_first(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = val;
    temp ->  ptr = head;

    head = temp;
}

void insert_mid(int pos,int num)
 {
    struct node *ptr = head;
    struct node *p;
    struct node *temp =  malloc(sizeof(struct node));
    
    temp -> data = num;

    while(ptr -> data != pos)
    {
        p = ptr;
        ptr = ptr->ptr;
    }
    p -> ptr = temp;
    temp -> ptr = ptr;
 }
 void delete_mid(int pos,int num)
 {
    struct node *ptr = head;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = num;

    while(ptr -> data != pos)
    {
        p=ptr;
        ptr = ptr -> ptr;
    }
    p -> ptr = ptr ->ptr;
    free(ptr);
 }
void display()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->ptr;
    }
    printf("\n");
}
void delete_end()
{
    struct node *ptr = head;
    struct node *pre = NULL;

    if (head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    if(head -> ptr == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    while (ptr -> ptr != NULL)
    {
        pre = ptr;
        ptr = ptr -> ptr;
    }
    free(ptr);
    pre -> ptr = NULL;
}


void  delete_first()
{
    struct  node  *ptr = head;

    head= ptr -> ptr;
    free(ptr);
}

int main()
{
    int choice,val;
    int pos,num;

    do
    {
        printf("1. Insert at End\n");
        printf("2. Display\n");
        printf("3. Delete at End\n");
        printf("4. Insert at First\n");
        printf("5. Delete at First\n");
        printf("6. Insert at Mid\n");
        printf("7. Delete at Mid\n");
        printf("8. for  exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch(choice)
        {
            case 1:
            printf("enter value to insert at end: ");
            scanf("%d",&val);
            insert_end(val);
            break;

        case 2:
            display();
            break;

        case 3:
            delete_end();
            break;

        case  4:
            printf("enter value to insert at first: ");
            scanf("%d",&val);
            insert_first(val);
            break;

        case 5:
            delete_first();
            break;

        case 6:
            printf("enter position to  insert  element :");
            scanf("%d",&pos);
            display();
            printf("insert  element :");
            scanf("%d",&num);
            insert_mid(pos ,num);
            display();
            break;

        case 7 :
            printf("enter position to  insert  element :");
            scanf("%d",&pos);
            display();
            printf("delete element :");
            scanf("%d",&num);
            delete_mid(pos ,num);
            display();
            break;

        case 8 :
            exit(0);
            break;


        case 9 :
            exit(0);
            break;

        default:
            printf("invalid choice \n");
            break;
        }
    }
       while ( choice < 9);
     return 0;
    

}