#include <stdio.h>  
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

void clear(struct Node * head)
{
    struct Node *p = head, *prev = NULL;
    while (p -> next != NULL)
    {
       prev = p;
       p = p -> next;
       free(prev);
    }
    free(p); 
}  

int main(void)
{
    int arr[3] = {3, 5, 4};
    struct Node *head = NULL, *p = NULL;

    for (int i = 0; i < 3; i++)
    {
        struct Node *newp = (struct Node *)malloc(sizeof(struct Node));
        newp -> val = arr[i];
        newp -> next = head;
        head = newp;
    }
    clear(head);
    return 0;
}

  
