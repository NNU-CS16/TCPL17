#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
   struct Node* next;
};
struct Node* construct(int arr[], int size); 
struct Node* merge(struct Node* head1, struct Node* head2); 
int main()
{
    int arr[3],s[3];
    int  i;
    struct Node *head,*head1,*head2,*p,*p1;
    for (i = 0; i < 3; i++)
        scanf("%d",&arr[i]);
	for (i = 0; i < 3; i++)
        scanf("%d",&s[i]);
    head1 = construct(arr,sizeof(arr));
	p1=head;
	while (p1!=NULL)
	{printf("%d",p1->val);p1=p1->next;}
	head2 = construct(s,sizeof(s));
	head = merge(head1,head2);
    p = head;
    while (p != NULL)
    {
    	printf("%d",p->val);
        p = p->next;
    }
    return 0;
}
struct Node* construct(int arr[], int size)
{
    int n,i;
    n = size  / sizeof(int);
    struct Node *head,*p;
    head = NULL;
    for (i = n - 1; i > -1; i--)
    {
        p = (struct Node*)malloc(sizeof(struct Node));
    	p->val = arr[i];
        p->next = head;
        head = p;
    }
    return head;
}
struct Node* merge(struct Node* head1, struct Node* head2)
{
	int i = 0,j = 0,k,n,m,sum;
	int arr1[10],arr2[10],arr[20];
	struct Node *p1,*p2;
	p1 = head1;
	p2 = head2;
	while (p1 != NULL)
	{
		p1->val = arr1[i];
		i++;
		p1 = p1->next;
	}
	n = i - 1;
	while (p2 != NULL)
	{
		 p2->val = arr[j];
		 j++;
		 p2 = p2->next;
	}
	m = j - 1;
	sum = m + n +1;
	printf("%d%d",n,m);
	for (i = 0; i <= n; i++)
		arr[i] = arr1[i];
	for (i = n + 1,j = 0; j <= m; j++, i++)
		arr[i] = arr2[j];
	for (i = 0; i <= n; i++)
		arr[i] = arr1[i];
	for (j = n,i = 0; j <= sum; j++,i++)
		arr[j] = arr2[i];
	for (i = 0; i <= sum; i++)
		printf("%d",arr[i]);
	int mid = n,end = sum,start = 0;
	i = start; j = mid + 1;k =start;
    int temp[30];
    while ((i != mid + 1)&&(j != end + 1))
    {
        if (arr[i] > arr[j])
            temp[k++] = arr[j++];
        else
            temp[k++] = arr[i++];
    }
    while (i != mid + 1)
        temp[k++] = arr[i++];
    while (j != end + 1)
        temp[k++] = arr[j++];
    for (i = start; i <= end; i++)
        arr[i] = temp[i];
	struct Node *head;
	head = construct(arr,sizeof(arr));
	return head;
}
