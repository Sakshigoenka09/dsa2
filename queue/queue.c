#include"queue.h"
void init(queue* line,int size)
{
    line->front=-1;
    line->rear=-1;
    line->arr=(int*)malloc(size*sizeof(int));
    line->n=size;
}       
int isempty(queue* line)
{
    // if((line->front)>(line->rear))
    // {
    //     line->rear=-1;
    //     line->front=-1;
    // }
    if(line->rear==-1 && line->front==-1||(line->front)>(line->rear))
    return 1;
    else 
    return 0;
}
int isfull(queue* line)
{
    if(line->rear==(line->n)-1)
    return 1;
    else
    return 0;
}
void enqueue(queue* line,int value)
{
    if(isfull(line))
    {
        printf("queue is full\n");
        return ;
    }
    if(isempty(line))
    {
        line->front=0;
    }
    line->rear++;
    line->arr[line->rear]=value;
}
int dequeue(queue* line)
{
    if(isempty(line))
    {
        printf("queue is empty\n");
        return -9999;
    }
    int data=line->arr[line->front];
    line->front++;
    return data;
}
void display(queue* line)
{
    if(isempty(line))
    {
        printf("queue is empty\n");
        return ;
    }
    for(int i=line->front;i<=line->rear;i++)
    {
        printf("the queue is:%d\n",line->arr[i]);
    }
}

