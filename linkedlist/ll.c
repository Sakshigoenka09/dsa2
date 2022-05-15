#include"ll.h"
node* createnode(int value)
{
    node* a;
    a=(node*)malloc(sizeof(node));
    a->data=value;
    a->next=NULL;
    return a;
}
void append(node** head, int value)
{
    node* b;
    b=createnode(value);   
    if(*head==NULL)
    {
        *head=b;
        return;
    }
    node* current=*head;
    while(current->next!=NULL)
    {
        current=current->next;                   
    }
    current->next=b;
}
void traverse(node* head)
{
    while(head->next != NULL)
    {
        printf("%d",head->data);
        printf("\n");
        head = head->next;
    }
    printf("%d\n",head->data);
}



