#include<stdio.h>
#include<stdlib.h>
struct Node *construct(int arr[],int size);
struct Node
{
    int val;
    struct Node* next;
}; //链表结点类型定义
struct Node *construct(int arr[],int size)
{
struct Node *head=(struct Node *)malloc(sizeof(struct Node));
head->val=arr[0];
head->next=NULL;
return head;
}
int main()
{
int arr[5]={0,6,8,4,2};
struct Node *construct(arr,5);
return 0;
}
