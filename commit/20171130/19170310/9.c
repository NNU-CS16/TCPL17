#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
}
void clear(struct Node *head)
{
    struct Node *shift=head;
    struct Node *temp=NULL;
    while(shift->next!=NULL)
    {
        temp=shift;
        shift=shift->next;
        free(temp);
    }
    free(shift);
}
int main()
{
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->val=1;
    clear(head);
    return 0;
}
