#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *shenqing();
void Output(struct Node *head);

int main()
{
    int val;
    printf("请输入尾部插入数值：");
    scanf("%d",&val);
    struct Node *head=shenqing(val);
    Output(head);
    return 0;
}

struct Node *shenqing(int val)
{
    struct Node *p1,*p2,*p3,*p4;

    p1=(struct Node *)malloc(sizeof(struct Node)); p1->data=101;
    p2=(struct Node *)malloc(sizeof(struct Node)); p2->data=103;
    p3=(struct Node *)malloc(sizeof(struct Node)); p3->data=105;
    p4=(struct Node *)malloc(sizeof(struct Node)); p4->data=val;

    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=NULL;

    free(p1);
    free(p2);
    free(p3);
    free(p4);

    return p1;

}

void Output(struct Node *head)
{
    struct Node *p;

    p=head;
    while(p!=NULL)
    {
    printf("%d\n",p->data);
    p=p->next;
    }
}

