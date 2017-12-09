#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* delete(struct Node* head, int val)
{
    struct Node* shift = head;
    if (shift -> val == val)
    {
        if (shift -> next != NULL)
          shift = shift -> next;
        else 
        {
          free(head);
          head = shift;
        }
        free(head);
        head = shift;
    }
    while (shift -> next != NULL)
    {
        while (shift -> next != NULL && shift -> next -> val != val) 
          shift = shift -> next;
        if (shift -> next != NULL)
        {
            struct Node* temp = shift -> next;
            shift -> next = shift -> next -> next;
            free(temp);
        }
    }
    return head;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    head -> val = 1;
    head -> next = NULL;
    head = delete(head,1);
    printf("%p\n", head);
    return 0;
}
