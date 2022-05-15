#include<stdio.h>
void name(int n )
{ 
   if(n==0)
   return;
   printf("The name is sakshi\n");
   name( n-1);
}
int main()
{
   int n;
   printf("enter the number ");
   scanf("%d",&n);
   name(n);
   return 0;
}