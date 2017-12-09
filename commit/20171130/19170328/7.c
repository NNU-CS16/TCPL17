#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

struct Node *InsertBeforeHead(struct Node *head, struct Node *newp)
{
    newp -> next = head;
    head = newp;
    return head;
}
struct Node *construct(int arr[], int size)
{
    struct Node *head, *newp; int i;
    head = NULL;
    for( i = size-1; i >= 0 ; i--)
    {
        newp=(struct Node *)malloc(sizeof(struct Node));
        newp -> val = arr[i];
        head = InsertBeforeHead(head , newp);
    }
    return head;
}

struct Node *reverse(struct Node *head)
{
    if (head==NULL || head->next==NULL)
        return head;//0 or 1 原地反转
    struct Node *temp = head -> next;
    struct Node *newp = reverse(temp);
    temp -> next=head;
    head -> next=NULL;
    return newp;
}//递归

void Output(struct Node *head)
{
    struct Node *p;
    p = head;
    while(p != NULL)
    {
        printf("%d", p -> val);
        printf("%c",p -> next == NULL ? '\n' : ' ');
        p = p-> next;
    }
}
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    printf("请输入链表的长度n以及n个数字:");
    for(int i=0;i<size;i++)
        scanf("%d",arr+i);
    struct Node *head=construct(arr,size);//构造结构体链表
    head = reverse(head);//原地反转
    Output(head);
    return 0;
}
