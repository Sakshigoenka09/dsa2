#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int rear;
    int front;
    int* arr;
    int n;
}queue;
void init(queue* line,int size);
int isempty(queue* line);
int isfull(queue* line);
void enqueue(queue* line,int value);
int dequeue(queue* line);
void display(queue* line);

