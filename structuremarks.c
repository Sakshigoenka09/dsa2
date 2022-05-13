#include<stdio.h>
typedef struct reg
{
   float marks;
   char grade;
}student;
int main()
{
  int n;
  printf("enter the number of students ");
  scanf("%d",&n);
  student arr[n];
  for(int i=0;i<n;i++)
  {
    char b;
    printf("enter the marks\n");
    scanf("%f",&arr[i].marks);
    scanf("%c",&b);
    printf("enter the grade\n");
    scanf("%c",&arr[i].grade);
    scanf("%c",&b);
  }
  for(int i=0;i<n;i++)
  {
      printf("the marks is %f\n",arr[i].marks);
      printf("the grade is %c\n",arr[i].grade);
  }
  return 0;
}