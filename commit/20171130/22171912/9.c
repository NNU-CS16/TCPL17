/*9.c_释放空间*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct(int arr[], int size)
{
    int i;
    struct Node* head = NULL, *newp;
    for (i = size - 1; i >= 0; --i)
    {
        newp = (struct Node*)malloc(sizeof(struct Node));
        newp -> val = arr[i];
        newp -> next = head;
        head = newp;
    }
    return head;
}

void clear(struct Node* head)
{
    struct Node *p;
    while (head != NULL)
    {
        p = head;
        head = head->next;
        free(p);
    }
	printf("%X\n", head);
}

int main()
{
    int i, *arr, size, val;
    struct Node* p, *target;
    printf("请输入数组大小size：");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    printf("请输入数组：");
    for (i = 0; i < size; ++i)
        scanf("%d", &arr[i]);
    struct Node* head = construct(arr, size);

    clear(head);
    return 0;
}
