#include"st.h"
int main()
{
   st train;
   init(&train);
   push(&train,1);
   push(&train,2);
   push(&train,4);
   push(&train,5);
   push(&train,6);
   int p=pop(&train);
   if(p==1234)
   {
       printf("stack is empty\n");
   }
   else
   {
       printf("the deleted element is %d\n",p);
   }
   peek(train);
}