#include<stdio.h>
typedef struct timeperiod
{
    int hours;
    int minutes;
    int seconds;
}Class;
int main()
{
    Class T1;
    Class T2;
    printf("Enter the hours minutes and seconds for T1 ");
    scanf("%d:%d:%d",&T1.hours,&T1.minutes,&T1.seconds);
    printf("Enter the hours minutes and seconds for T2 ");               //6.30.43
    scanf("%d:%d:%d",&T2.hours,&T2.minutes,&T2.seconds);   
    if(T1.seconds>T2.seconds)
    {
        T2.minutes=T2.minutes-1;
        T2.seconds+=60;
    }
    int sec=T2.seconds-T1.seconds;
    if(T1.minutes>T2.minutes)
    {
        T2.hours-=1;
        T2.minutes+=60;
    }
    int min=T2.minutes-T1.minutes;
    int hrs=T2.hours-T1.hours;
    printf("%d:%d:%d",hrs,min,sec);                                                    
    return 0;
}