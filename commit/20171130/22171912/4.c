/*4.c_有序链表插入节点*/
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

struct Node* insert(struct Node* head, int val)
{
	struct Node* newp, *prev = NULL, *p = head;
	newp = (struct Node*)malloc(sizeof(struct Node));
	newp -> val = val;
	while (p != NULL)
	{
		if (p -> val > newp -> val)
			break;
		prev = p;
		p = p -> next;
	}
	newp -> next = p;
	if (p == head)
		head = newp;
	else
		prev -> next = newp;
	return head;
}

int main()
{
    int i, *arr, size, val;
	struct Node* p;
	printf("请输入带插入的数：");
    scanf("%d", &val);
    printf("请输入数组大小size：");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    printf("请输入有序数组：");
    for (i = 0; i < size; ++i)
        scanf("%d", &arr[i]);

    struct Node* head = construct(arr, size);

	head = insert(head, val);
	p = head;
    while (p != NULL)
    {
        printf("%d\t", p -> val);
        p = p -> next;
    }
    printf("\n");
    free(arr);
    return 0;
}

