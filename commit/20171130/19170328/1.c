#include<stdio.h>
#include<stdlib.h>
//链表是一种常见的数据结构。数组可以存放数据，但是使用数组时要先指定数组中包含元素的个数，即数组长度。但是如果向这个数组中加入的元素个数超过了数组的大小时，便不能将内容完全保存。例如在定义一个班级的人数时，如果小班是30人，普通班是50人，且定义班级人数时使用数组，那么要定义数组的个数为最大，也就是最少为50个元素，否则不满足最大时的情况。这种方式非常浪费空间。而链表，其存储元素的个数不受限定的，当进行添加元素的时候存储的个数就会随之改变。

struct Node//链表结构体
{
    int val;//Data 存放在这里的数据 本题指的是整型数字
    struct Node* next; //指向下一节点(元素)的指针
};

struct Node* Initial(int value) //由前一个结点生成下一个结点
{
    struct Node* newnode;//定义新的节点的地址
    newnode = (struct Node*)malloc(sizeof(struct Node));//为新的节点分配存储空间
    newnode -> val = value;
    newnode -> next = NULL;//新节点本身的后继指针为空，由shitf进行进行节点的构造
    return newnode;
}

void Scan(struct Node *head)
{

    struct Node* shift;
    for(shift = head; shift != NULL; shift = shift -> next)
        printf("%d ",shift -> val);
} //接受一个链表头地址 扫描链表并输出

struct Node* construct(int arr[], int size)
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* shift = NULL;
    head = Initial(arr[0]);    
    shift = head;
    struct Node*newnode;
    for(int i =0 ; i<size; i++)
    {
        newnode = Initial(arr[i]);
        shift -> next = newnode;//shift的后继指针指向新节点地址
        shift = newnode;//此时shift指针是新节点的地址
    }
    return head;//返回头指针地址
}

 int main()
{
    int arr[10];
    int i;
    printf("请输入一个长度为10的字符数组:\n");
    for (i=0; i<10; i++)
       scanf("%d",&arr[i]);
    struct Node* p = construct(arr, 10);
    Scan(p);
    return 0;
}
