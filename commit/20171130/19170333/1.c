#include <stdio.h>
#include <stdlib.h>
struct Node{ 
    int val;
    struct Node *next;
};

struct Node *construct (int arr[], int size)
{
    struct Node *head= (struct Node* )malloc(sizeof(struct Node));
    head -> val = arr[0];
    struct Node *shift = NULL;
    shift = head;
    for (int i = 1; i < size; i++)
    {       
        shift -> next = (struct Node *)malloc (sizeof (struct Node));
        shift = shift -> next;
        shift -> val = arr[i];
    }
    return head;
}
int main ()
{
    int arr[5] = {5, 4, 3, 2, 1};
    struct Node *p = construct (arr, 5);
    while (p != NULL)
    {
        printf ("%-2d", p -> val);
        p = p -> next;
    }
    return 0;
}   
