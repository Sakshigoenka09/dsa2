#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **p;
    p=(int**)malloc(sizeof(int)*3);
    for(int i=0;i<3;i++)
    {
        *(p+i)=(int*)malloc(sizeof(int)*3);

        
    }
    printf("enter a number\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          scanf("%d",&p[i][j]);
        }
    }
    printf("the first matrix is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    int **t;
    t=(int**)malloc(sizeof(int)*3);
    for(int i=0;i<3;i++)
    {
        *(t+i)=(int*)malloc(sizeof(int)*3);

        
    }
    printf("enter a number\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          scanf("%d",&t[i][j]);
        }
    }
    printf("the second matrix is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    int **c;
    c=(int**)malloc(sizeof(int)*3);
    for(int i=0;i<3;i++)
    {
        *(c+i)=(int*)malloc(sizeof(int)*3);

        
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           c[i][j]=p[i][j]+t[i][j];

        }
    }
    printf("the sum of two matrices is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}