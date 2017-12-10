#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
}; //链表结点类型定义
struct Node* insert(struct Node *head, int val);
{
struct Node *p1;
     p1=(struct Node *)=malloc(sizeof(struct Node));
     p1->val=val;
     p1->next=NULL;
     if(*head==NULL)
     {
        p1->next=*head;
          *head=p1;
    }
    else
    {
          while(t->next)
          {
               *head=*head->next;
          }
          *head->next=p1;
      }
} //尾插法
void output(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
        printf("%X\t%d\t%X\n",p,p->val,p->next);
        p=p->next;
    }
}

int main()
{
    int val;
    printf("请输入val的值");
    scanf("%d\n",&val);
    struct Node *insert(head,val)
    output(head);
    return 0;
}
