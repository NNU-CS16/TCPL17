/*8.c_归并链表*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node* next;
};

struct Node* construct1(int arr1[], int size1)
{
    int i;
    struct Node* head1 = NULL, *newp;
    for (i = size1 - 1; i >= 0; --i)
    {
        newp = (struct Node*)malloc(sizeof(struct Node));
        newp -> val = arr1[i];
        newp -> next = head1;
        head1 = newp;
    }
    return head1;
}

struct Node* construct2(int arr2[], int size2)
{
    int i;
    struct Node* head2 = NULL, *newp;
    for (i = size2 - 1; i >= 0; --i)
    {
        newp = (struct Node*)malloc(sizeof(struct Node));
        newp -> val = arr2[i];
        newp -> next = head2;
        head2 = newp;
    }
    return head2;
}

struct Node* merge(struct Node* head1, struct Node* head2)
{
  struct Node* head = NULL;
  if (head1 == NULL)
     return head2;
  if (head2 == NULL)
     return head1;
  if (head1 -> val <= head2 -> val)
  {
    head = head1;
    head1 = head1 -> next;
  }
  else
  {
    head = head2;
    head2 = head2 -> next;
  }
  head -> next = merge(head1,head2);
}

int main()
{
    int i, *arr1, size1, *arr2, size2;
	struct Node* t, *head1, *head2;
    printf("请输入数组1大小size：");
    scanf("%d", &size1);
    arr1 = (int *)malloc(size1 * sizeof(int));
    printf("请输入有序数组：");
    for (i = 0; i < size1; ++i)
        scanf("%d", &arr1[i]);
    struct Node* p = construct1(arr1, size1);

    printf("请输入数组2大小size：");
    scanf("%d", &size2);
    arr2 = (int *)malloc(size2 * sizeof(int));
    printf("请输入有序数组：");
    for (i = 0; i < size2; ++i)
        scanf("%d", &arr2[i]);
    struct Node* q = construct2(arr2, size2);

    struct Node* head = merge(head1, head2);
	t = head;
	while (t != NULL)
    {
        printf("%d\t", t -> val);
        t = t -> next;
    }
    printf("\n");
    free(arr1);
	free(arr2);
    return 0;
}
