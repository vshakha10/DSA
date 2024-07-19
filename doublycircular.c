#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pre;  
    struct node *next;
};
struct node *head = NULL;

void insert_end(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->pre = temp;
        return;
    }
    else
    {
         while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->pre = ptr;
    temp->next = head;
    head->pre = temp;
    return;
    }
}
void insert_first(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->pre = head;
        return;
    }
   
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    ptr->pre=ptr;
    temp->next = head;
    head->pre=temp;
    head=temp;
    return;
    }
  

void delete_end()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("List Is Allready Empty.....\n");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
      
    }
    else
    {
    while (ptr->next != head)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = head;
    free(ptr);
}
    return;
}

void delete_first()
{
    struct node *ptr = head;
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List Is Already Empty....\n");
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp->next;
    head = temp->next;
    free(temp);
    return;
}


void insert_mid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->pre = p;
    temp->next = ptr;
    ptr->pre = temp;
    return;
}
void mid_delete(int pos)
{
    struct node *ptr = head;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next->pre = p;
    free(ptr);
    return;
}
int display()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty");
    }

    while (ptr->next != head)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
    printf("\n");
}

int main()
{

    int ch, i, j, x, y;

    do
    {
        printf("\nPress 1 for Insert End.\n");
        printf("Press 2 for Delete End.\n");
        printf("Press 3 for Insert First.\n");
        printf("Press 4 for Delete First.\n");
        printf("Press 5 for Mid Insert.\n");
        printf("Press 6 for Mid Delete.\n");
        printf("Press 7 For Display.\n");
        printf("Press 0 Exit.\n");

        printf("Enter Your Choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Value For Insert End : ");
            scanf("%d", &i);
            insert_end(i);
            break;

        case 2:
            delete_end();
            break;

        case 3:
            printf("Enter Value For Insert First : ");
            scanf("%d", &j);
            insert_first(j);
            break;

        case 4:
            delete_first();
            break;

        case 5:
            printf("Enter Value For Mid Add : ");
            scanf("%d", &x);
            printf("Enter Position For Add : ");
            scanf("%d", &y);
            insert_mid(x, y);
            break;

        case 6:
            printf("Enter Position For Delete : ");
            scanf("%d", &x);
            mid_delete(x);
            break;

        case 7:
            display();
            break;

        case 0:
            break;

        default:
            printf("Please Enter Valid Choice......");
            break;
        }
    } while (ch != 0);
}