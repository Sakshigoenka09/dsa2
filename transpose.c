#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **p;
    p=(int**)malloc(sizeof(int)*3);
    for(int i=0;i<3;i++)
    {
        *(p+i)=(int*)malloc(sizeof(int)*2);

        
    }
    printf("enter a number\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
          scanf("%d",&p[i][j]);
        }
    }
    printf("the first matrix is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
          printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    int **c;
    c=(int**)malloc(sizeof(int)*2);
    for(int i=0;i<3;i++)
    {
        *(c+i)=(int*)malloc(sizeof(int)*3);
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=p[j][i];
            
        }  
    }
    printf("the transpose is\n");
    for(int i=0;i<2;i++ )
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}    