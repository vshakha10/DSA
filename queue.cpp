#include<iostream>
#include<stdlib.h>
using namespace std;
void Queue_Add(int* num, int &f , int &l,int vlaue)
{
    if(l<10)
    {
        if(f==0 && l==0)
        {
            num[f]=vlaue;
            l++;
        }else
        {
            num[l]=vlaue;
            l++;
        }
    }
    else
    {
        cout<<"Queue Full"<<endl;
    }
}
void Queue_Dispaly(int num[], int &f , int &l)
{
    cout<<"Display:-";
    for(int i=f;i<l;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
void Queue_Delete(int &f , int &l)
{
    if(f==l)
    {
        cout<<"Queue Is Emtpy"<<endl;
        f=0;
        l=0;
    }else
    {
        f++;
        cout<<"Delete Sucsses Full"<<endl;
    }
}
int main()
{
    int num[10];
    int l,Last=0,el,Fast=0;
    one:
    cout<<"1. Add(Queue)"<<endl;
    cout<<"2. Delete(Queue)"<<endl;
    cout<<"3. Dispaly(Queue)"<<endl;


    cout<<"Enter you choice:-"<<endl;

    cin>>l;
    switch (l)
    {
    case 1:
        cout<<"Enter You Eliment:-";
        cin>>el;
        Queue_Add(num,Fast,Last,el);
        goto one;
    case 2 :
        Queue_Delete(Fast,Last);
        goto one;
    case 3 :
        Queue_Dispaly(num,Fast,Last);
        goto one;
    default:
        goto one;
    }
    End:
    return 0;
}
