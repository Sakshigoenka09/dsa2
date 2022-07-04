#include"queue.h"
int main()
{
    queue line;
    int size;
    printf("enter the size of the queue: \n");
    scanf("%d",&size);
    init(&line,size);
    enqueue(&line,1);
    enqueue(&line,2);
    enqueue(&line,3);
    enqueue(&line,4);
    enqueue(&line,5);
    display(&line);
    int x=dequeue(&line);
    if(x!=-9999)
    {
        printf("The deleted item is %d\n",x);
    }
    display(&line);
    return 0;
}
