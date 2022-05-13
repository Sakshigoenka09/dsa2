#include<stdio.h>
void rec(int n)
{
   if(n>10)
   return;
   printf("the value of n is %d\n",n);
   rec(n+1);  
}
void rev(int n)
{
  if(n>10)
  return;
  rev(n+1); //stack
  printf("the value of n is %d\n",n);
}
int fac(int n)
{                             //fac(1)      //1
    if(n<=1)                  //fac(2)   =   //2*fac(1)=2
    return 1;                 //fac(3)   =6   //3*fac(2)=3*2=6
    else                      //fac(4)   24   //4*fac(3)=4*6=24
    return n*fac(n-1);        //fac(5)  =120    //5*fac(4)=5*24=120
}
int main()
{
    rec(1);
    rev(1);
    int x=fac(5);
    printf("the factorial of 5 is %d ",x);
    return 0;
}