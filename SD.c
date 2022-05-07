#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float sum=0.0, avg=0.0,sum2=0.0,diff=0.0,avg2=0.0,sq=0.0,t=0.0,size;
    float *p;
    printf("Enter the size of array\n");
    scanf("%f",&size);
    p=(float*)malloc(size*sizeof(float));
    printf("Enter the element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%f",&p[i]);
        sum=sum+p[i];

    }
    avg=sum/size;
    printf("the avg is %f\n",avg);
    for(int i=0;i<size;i++)
    {
        diff=p[i]-avg;
        t=diff*diff;
        sum2=t+sum2;
    }
    printf("the diff is %f\n",diff);
    printf("the square is %f\n",t);
    avg2=sum2/size;
    printf("the avg2 is %f\n",avg2);
    sq=sqrt(avg2);
    printf("The standard deviation is %f\n",sq);
    return 0;

}