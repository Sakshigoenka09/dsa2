#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int data;
    struct st* next;
}node;


node* createnode(int value);
void append(node** head, int value);
void traverse(node* head);