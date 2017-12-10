#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
}; //链表结点类型定义
struct Node *insert(struct Node *head,int val)
{
    struct Node *p,*q;
    p=(struct Node *)malloc(sizeof(struct Node));
    q=(struct Node *)malloc(sizeof(struct Node));
    p->next=q;
    q->next=NULL;
    return p;
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
List ReverseList(List head)  
{  
     if(head->next == NULL || head->next->next == NULL)    
       {  
             return head;
       }  
      ListNode *t = NULL,  *p = head->next,  *q = head->next->next;  
       while(q != NULL)  
       {          
            t = q->next;  
            q->next = p;  
            p = q;  
            q = t;  
       }    
       head->next->next = NULL;   
       head->next = p; 
       return head;  
}  
void PrintList(List head)
{  
     ListNode* p = head->next;  
       while(p!= NULL)  
       {     
             printf("%d ", p->data);  
             p = p->next;  
       }  
       printf("/n");  
}  
int main()
{
     struct Node *insert(head,val);  
      int i;  
       struct Node *p1;  
     for(int i = 1; i <= 10; i++)  
       {  
          q=(struct Node *)malloc(sizeof(struct Node));  
          q->data=i;  
          q->next=NULL;  
          p->next=q;  
          p=q;          
        }            
      PrintList(head);  
        head = ReverseList(head);
        PrintList(head);
     output(head);  
     return 0;
}
