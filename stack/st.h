#include<stdio.h>
#include<stdlib.h>
typedef struct pos
{
    int top;
    int num;
    int* array;
    
}st;
void init(st* stack);
void push(st* stack,int value);
int pop(st* stack);
void peek(st stack);

