#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0;
    float sum=0.0, avg=0.0;
    int *p;
    printf("enter the number of elements\n");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));
    printf("enter the element:- \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i]; 
    }
    avg=sum/size;
    printf("The sum is %f\n",sum);
    printf("The average is %f",avg);
    return 0;
}