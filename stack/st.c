#include"st.h"
void init(st* stack)
{
    printf("enter th size of the array ");
    scanf("%d",&stack->num);
    stack->array=(int*)malloc(sizeof(int)*stack->num);
    stack->top=-1;
}
void push(st* stack,int value)
{
    stack->top++;
    stack->array[stack->top]=value;
}
int pop(st* stack)
{
    if(stack->top==-1)
    {
        return -1234;
    }
    int temp;
    temp=stack->array[stack->top];
    stack->top--;
    return temp;
}
void peek(st stack)
{
    if(stack.top==-1)
    {
        printf("stack empty");
    }
    else 
        printf("%d",stack.array[stack.top]);
}