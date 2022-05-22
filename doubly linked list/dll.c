#include "dll.h"
node* create_node(int value)
{
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->prev=NULL;
    newnode->next=NULL;
    newnode->data=value;
    return newnode;
}
void append_before(node** head,node**tail,int value)
{
    node* temp;
    temp=create_node(value);
    if(*head==NULL && *tail==NULL)
    {           
        *head=temp;
        *tail=temp;
        return ;
    }
    temp->next=(*head);
    (*head)->prev=temp;
    (*head)=temp;
}
void append_after(node** head,node**tail,int value)
{
    node* cnew;
    cnew=create_node(value);
    if(*head==NULL && *tail==NULL)
    {
        *head=cnew;
        *tail=cnew;
        return;
    }
    (*tail)->next=cnew;
    cnew->prev=(*tail);
    (*tail)=cnew;
}
void traverse_back(node* tail)
{
   while(tail!=NULL)
   {
       printf("%d ",tail->data);
       tail=tail->prev;
   }
   printf("\n");
}
void traverse_forward(node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}