#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[], int size);
struct Node* InsertBeforeHead(struct Node* head, struct Node* newp);
struct Node* construct(int arr[], int size);
void output(struct Node* head);
struct Node
{
	int val;
	struct Node* next;
};

int main()
{
	int size, i;
	scanf("%d", &size);
	int arr[size];
	for (i = 0; i <= size - 1; ++i)
		scanf("%d", &arr[i]);
	reverse(arr, size);
	output(construct(arr, size));

    struct Node* p = construct(arr, size);
    while(p != NULL)
    {
        free(p);
        p = p->next;
    }
	return 0;
}

void reverse(int arr[], int size)
{
	int j, k, temp;
	for (j = 0, k = size - 1; j <= size / 2; ++j, --k)
		if (arr[j] != arr[k])
		{
			temp = arr[j];
			arr[j] = arr[k];
			arr[k] = temp;
		}
}

struct Node* construct(int arr[], int size)
{
	int i;
	struct Node *head, *newp;
	head = NULL;
	for (i = 0; i <= size - 1; ++i)
	{
		newp = (struct Node *)malloc(sizeof(struct Node));
		newp->val = arr[i];
		head = InsertBeforeHead(head, newp);
	}
	return head;
}

struct Node* InsertBeforeHead(struct Node* head, struct Node* newp)
{
	newp->next = head;
	head = newp;
	return head;
}

void output(struct Node* head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d\n", p->val);
        p = p->next;
    }
}
