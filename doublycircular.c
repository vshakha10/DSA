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
    else
    {
    // while (ptr->next != head)
    // {
    //     ptr = ptr->next;
    // }
    //ptr->next = temp;
    temp->next = head;
    temp->pre = head->pre;
    head=temp;
   
    }
    return;
}
void delete_end()
{
    struct node *ptr = head;
    struct node *pre;
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
        pre = ptr;
        ptr = ptr->next;
    }
    pre->next = head;
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
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
    while (ptr->next != head)
   
        ptr = ptr->next;
    
    ptr->next = head->next;
    head->next-> pre=ptr;
    free(temp);
    return;
    }
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
    // insertEnd(10);
    // insertEnd(20);
    // insertEnd(30);
    // display();
    // deleteEnd();
    // display();

    insert_first(40);
    insert_first(50);
    display();
    // deleteFirst();
    // display();

//     insertMid(60, 20);
//     insertMid(70, 10);
//     display();
//     midDelete(20);
//     midDelete(10);
//     display();
}