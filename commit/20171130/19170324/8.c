#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int val;
	struct Node *next;
};
struct Node* create(int arr[], int n);
struct Node* merge(struct Node* head1, struct Node* head2);
void output(struct Node* head);

int main()
{
	int arr1[5] = {95, 88, 78, 54, 19};
	int arr2[6] = {74, 32, 30, 29, 13, 2};
	output(merge(create(arr1, 5), create(arr2, 6)));

	struct Node* p = merge(create(arr1, 5), create(arr2, 6));
    while(p != NULL)
    {
        free(p);
        p = p->next;
    }
	return 0;
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

struct Node* merge(struct Node* head1, struct Node* head2)
{
	int tmp[11], i, k, tmpe;
	struct Node *p1, *p2;
	p1 = head1;
	p2 = head2;
	for (i = 0; p1 != NULL && p2 != NULL; ++i)
	{
		if (p1->val <= p2->val)
		{
			tmp[i] = p1->val;
			p1 = p1->next;
		}
		else
		{
			tmp[i] = p2->val;
			p2 = p2->next;
		}
	}

	if (p1 != NULL)
		while (p1 != NULL)
		{
			tmp[i++] = p1->val;
			p1 = p1->next;
		}

	if (p2 != NULL)
		while (p2 != NULL)
		{
			tmp[i++] = p2->val;
			p2 = p2->next;
		}

	for (i = 0, k = 10; i != k; ++i, --k)
	{
		tmpe = tmp[i];
		tmp[i] = tmp[k];
		tmp[k] = tmpe;
	}
		
	return create(tmp, 11);
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
