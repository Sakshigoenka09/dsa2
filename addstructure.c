#include<stdio.h>
typedef struct adding
{
    int num1;
    int num2;
}Class;
int main()
{
    Class add;
    printf("enter the first number ");
    scanf("%d",&add.num1);
    printf("enter the second number ");
    scanf("%d",&add.num2);
    int c=add.num1+add.num2;
    printf("The sum is %d\n",c);
    return 0;
}