#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Pre;
    struct Node *Next;
};
struct Node *Head = NULL;

void Display()
{
    struct Node *copyHead=Head;
    while(copyHead ->Next != NULL) 
    {        
       cout<<copyHead->data<<" ";
       copyHead = copyHead->Next;
    }
       cout<<copyHead->data<<" ";

}
void insert_first(int Data)
{
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    
    if(Head==NULL)
    {
        link->data=Data;
        link->Pre=NULL;
        link->Next=NULL;
        Head=link;
        return;
    }
    link->data=Data;
    link->Pre=NULL;
    link->Next=Head;
    Head=link;
}
void insert_end(int Data)
{
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    struct Node *copyHead=Head;
    struct Node *copy1Head;

    
    if(Head==NULL)
    {
        link->data=Data;
        link->Pre=NULL;
        link->Next=NULL;
        Head=link;
        return;
    }
    while(copyHead->Next!= NULL)
    {   
        copy1Head=copyHead;
        copyHead=copyHead->Next;
    }
        link->data=Data;
        link->Pre=copy1Head;
        link->Next=NULL;
        copyHead->Next=link;
}
void insert(int Data, int Eliment)
{
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    struct Node *copyHead=Head;
    struct Node *copy1Head;

    while(copyHead->data!= Eliment)
    {   
        copy1Head=copyHead;
        copyHead=copyHead->Next;
    }
        link->data=Data;
        link->Pre=copy1Head;
        link->Next=copyHead->Next;
        copyHead->Next=link;
}
void delete_first()
{
    if(Head->Next==NULL)
    {
        Head=NULL;
        return;
    }
    Head=Head->Next;
    Head->Pre=NULL;
}
void delete_end()
{
    struct Node *copyHead=Head;
    struct Node *copy1Head;

    if(Head->Next==NULL)
    {
        Head=NULL;
        return;
    }
    while (copyHead->Next != NULL)
    { 
        copy1Head=copyHead;
        copyHead=copyHead->Next;
    }
        copy1Head->Next=NULL;

}
void delet(int Eliment)
{
    struct Node *copyHead=Head;
    struct Node *copy1Head=Head;
    if(Head->data==Eliment)
    {
        Head=copyHead->Next;
        Head->Pre=NULL;
        return;
    }
    while(copyHead->data != Eliment)
    {
        copy1Head=copyHead;
        copyHead=copyHead->Next;
    }
    if(copyHead->Next==NULL)
    {
        copy1Head->Next=copyHead->Next;
        copyHead->Pre=copy1Head->Pre;
        copyHead->Next=NULL;
        return;
    }
        copy1Head->Next=copyHead->Next;
        copyHead->Pre=copy1Head->Pre;
}
int main()
{
    // insert_first(10);
    //  insert_first(20);
    //  insert_first(30);
    // insert_first(40);
    insert_end(10);
     insert_end(20);
     insert_end(30);
     insert_end(40);
     insert_end(50);
    //insert(1000,20);
    // delete_first();
    // delete_first();
    //  delete_first();
    // delete_end();
    // delete_end();
    // delete_end();
 //  delet(10);
   delet(50);   

    Display();
}