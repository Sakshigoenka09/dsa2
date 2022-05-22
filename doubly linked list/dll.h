#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int data;
    struct st* next;
    struct st* prev;
}node;
node* create_node(int value);
void append_before(node** head,node**tail,int value);
void append_after(node** head,node**tail,int value);
void traverse_forward(node* head);
void traverse_back(node* tail);


