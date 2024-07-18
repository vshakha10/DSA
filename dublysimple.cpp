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
void Push_Fast(int Data)
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
void Push_Back(int Data)
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
void Push(int Data, int Eliment)
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
void Pop_Fast()
{
    if(Head->Next==NULL)
    {
        Head=NULL;
        return;
    }
    Head=Head->Next;
    Head->Pre=NULL;
}
void Pop_Back()
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
void Pop(int Eliment)
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
    // Push_Fast(10);
    // Push_Fast(20);
    // Push_Fast(30);
    // Push_Fast(40);
    Push_Back(10);
    Push_Back(20);
    Push_Back(30);
    Push_Back(40);
    Push_Back(50);
    //Push(1000,20);
    // Pop_Fast();
    // Pop_Fast();
    // Pop_Fast();
    // Pop_Back();
    // Pop_Back();
    // Pop_Back();
 //  Pop(10);
   Pop(50);   

    Display();
}