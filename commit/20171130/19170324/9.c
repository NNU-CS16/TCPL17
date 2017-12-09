#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
void clear(struct Node* head);
struct Node* create(int arr[], int n);
void output(struct Node* head);

int main()
{
	int arr[5] = {2, 37, 52, 56, 99};
	create(arr, 5);

	return 0;
}

void clear(struct Node* head)
{
	struct Node *p;
	while(head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
	output(head);
}

struct Node* create(int arr[], int n)
{
    int i;
    struct Node *head, *newp;
    head = NULL;
    for (i = 0; i <= n - 1; ++i)
    {
        newp = (struct Node*)malloc(sizeof(struct Node));
        newp->val = arr[i];
newp->next = head;
        head = newp;
    }
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
