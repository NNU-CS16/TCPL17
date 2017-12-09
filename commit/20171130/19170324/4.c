#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* insert(struct Node* head, int val);
struct Node* create(int arr[], int n);
void output(struct Node* head);

int main()
{
	int val = 55;
	int arr[5] = {99, 56, 52, 37, 2};
	output(insert(create(arr, 5), val));

    struct Node* p = insert(create(arr, 5), val);
    while(p != NULL)
    {
        free(p);
        p = p->next;
    }
	return 0;
}

struct Node* insert(struct Node* head, int val)
{
	struct Node *p, *prev = NULL, *newp;
	p = head;
	while (p != NULL)
	{
		if (p->val > val)
			break;
		prev = p;
		p = p->next;
	}
	newp = (struct Node *)malloc(sizeof(struct Node));
	newp->val = val;
	newp->next = p;
	if (p == head)
		head = newp;
	else
		prev->next = newp;

	return head;
}

struct Node* create(int arr[], int n)
{
    int i;
    struct Node *head, *newp;
    head = NULL;
    for (i = 0; i <= n - 1; ++i)
    {
        newp = (struct Node *)malloc(sizeof(struct Node));
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
