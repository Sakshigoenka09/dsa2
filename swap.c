#include<stdio.h>
#include<stdlib.h>
void swap(int* a,int* b, int* c)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
    
}
int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    printf("the value of c is %d\n",c);
    printf("After Swapping\n");
    swap(&a,&b,&c);
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    printf("the value of c is %d\n",c);
    return 0;

}
