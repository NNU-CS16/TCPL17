#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* delete(struct Node* head, int val);
struct Node* create(int arr[], int n);
void output(struct Node* head);

int main()
{
	int arr[8] = {55, 3, 57, 34, 55, 99, 45, 55};
	output(delete(create(arr, 8), 55));

	return 0;
}

struct Node* delete(struct Node* head, int val)
{
	struct Node *prev, *p;
	p = head;
	while (p != NULL)
	{
		if (p->val == val)
		{
			if (p == head)
			{
				p = p->next;
				head = p;
				continue;
			}
			else
			{
				prev->next = p->next;
				free(p);
				if (prev->next == NULL)
					break;
				else
				{
					p = (prev->next)->next;
					continue;
				}
			}
		}
		prev = p;
		p = p->next;
	}

	return head;
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
