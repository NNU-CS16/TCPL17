#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
}; //链表结点类型定义
struct Node *insert(struct Node *head, int val)
{
    struct Node *p1;
    p1=(struct Node *)malloc(sizeof(struct Node));
    p1->val=val;
    p1->next=NULL;
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
struct Insert_List(struct Node *head,int pos,int val)  
{  
    int i=0;  
      struct Node * p=head;  
      while((NULL!=p)&&(i<pos-1)) 
      {   
            p=p->next;  
            i++;  
      }  
      if(p==NULL||i>pos-1)
    return  false;  
    struct Node * q=malloc(sizeof(struct Node));  
      q->data=val;  
      q->next=p->next;  
      p->next=q;  
}  
int main()
{
    int val;
    printf("请输入val的值")；
    scanf（"%d\n",&val）;
    struct Node *insert(head,val)
    output(head);
    return 0;
}
