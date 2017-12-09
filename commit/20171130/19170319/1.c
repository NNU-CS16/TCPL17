#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
struct Node* conetruct(int arr[],int size)
{
    int i = 0;
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;
    struct Node* p = head;
    for ( ;i < size;i++)
    {
        p->next = (struct Node*)malloc(sizeof(struct Node));
        p->val = arr[i];
        p = p->next;
        p->next = NULL;
        
    }
    return head;
}
int main()
{
    int arr[10];
    int i;
    for (i = 0;i < 10;i++)
        arr[i] = i;
    struct Node* p = conetruct(arr,10);
    while (p->next != NULL)
    {
        printf("%d ",p->val);
        p = p->next;
    }
    return 0;
}
