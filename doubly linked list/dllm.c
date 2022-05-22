#include "dll.h"
int main()
{
    node* head= NULL;
    node* tail=NULL;
    append_after(&head,&tail,1);
    append_after(&head,&tail,2);
    append_after(&head,&tail,3);
    append_before(&head,&tail,4);
    append_before(&head,&tail,5);
    append_before(&head,&tail,6);  
    traverse_forward(head);
    traverse_back(tail);
    return 0;
}    