#include<stdio.h>
#include<stdlib.h>
struct Node//定义链表
{
        int val;
        struct Node *next;
};
/*
struct Node *head,*p;//定义头结点以及P指针
head=(struct Node*)malloc(sizeof(struct Node));//把Node的地址赋给head
p=(struct Node*)malloc(sizeof(struct Node));//把Node的地址赋给p
head->next=p;//把p插入到head的下一个结点
for(int i=0;i<size;i++)//给链表赋值
{
	p->val=arr[i];//p指针指向val然后将arr值赋给val
	//printf("debug %d ",arr[i]);
	if(i<size-1)//防止最后多一个空结点
	{
		p->next=(struct Node*)malloc(sizeof(struct Node));//给新结点空间
		p=p->next;//p指针指向下一个结点
	}
}*/
struct Node* insert(struct Node* head,int val)
{
struct Node *p=val;
p->next=head->next;
head->next=p;
p=head;
return p->next;
}

int main()
{
int arr[9]={1,9,2,8,3,7,4,6,5};
int n,i;
struct Node *head,*p;//定义头结点以及P指针
head=(struct Node*)malloc(sizeof(struct Node));//把Node的地址赋给head
p=(struct Node*)malloc(sizeof(struct Node));//把Node的地址赋给p
head->next=p;//把p插入到head的下一个结点
for(int i=0;i<9;i++)//给链表赋值
{
        p->val=arr[i];//p指针指向val然后将arr值赋给val
        //printf("debug %d ",arr[i]);
        if(i<8)//防止最后多一个空结点
        {
                p->next=(struct Node*)malloc(sizeof(struct Node));//给新结点空间
                p=p->next;//p指针指向下一个结点
        }
}
printf("%d",insert(head,1)->val);
return 0;
}
