#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0,max=0;
    int *p;
    printf("enter the size of the array:- \n");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));
    printf("enter the element:- \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&p[i]);   
    }
    for(int i=0;i<size;i++)
    {
        if(p[i]>max){
            max=p[i];
        }
    }
    printf("The largest element is %d ",max);
    return 0;
}
    
