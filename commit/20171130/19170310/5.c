#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
}; //链表结点类型定义
struct Node *insert(struct Node *head, int val)
{
    struct Node *p1,*target;
    p1=(struct Node *)malloc(sizeof(struct Node));
    p1->next=target;
    target->next=NULL;
    return p1;
}
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
bool Delete_List(struct Node *head,int pos,int *val)  
{  
    int i=0;  
    struct Node *p=head;  
    while((NULL!=p)&&(i<pos-1))  
      {  
        p=p->pNext;  
            i++;  
      }  
      if(p==NULL||i>pos-1)    
            return false;  
    struct Node *target=p->next;  
      *val=struct Node *target->data;  
      p->next=struct Node *target->next;  
      free(struct Node *target);  
      struct Node *target=NULL;；  
}  
int main()
{
    int val;
    struct Node *insert(head,val)
    output(head);
    bool Delete_List(head,pos,val)  
    return 0;
}
