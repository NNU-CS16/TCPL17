struct Node *shenqing();
void Output(struct Node *head);

int main()
{
    int val;
    printf("请输入排序前插入数值：");
    scanf("%d",&val);
    struct Node *head=shenqing(val);
    Output(head);
    return 0;
}

struct Node *shenqing(int val)
{
    struct Node *p1,*p2,*p3,*p4;


    int i,j,temp;
    int a[4]={101,103,105,val};
    for(i=0;i<4;i++)
        for(j=0;j<4-i;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }

    p1=(struct Node *)malloc(sizeof(struct Node)); p1->data=a[0];
    p2=(struct Node *)malloc(sizeof(struct Node)); p2->data=a[1];
    p3=(struct Node *)malloc(sizeof(struct Node)); p3->data=a[2];
    p4=(struct Node *)malloc(sizeof(struct Node)); p4->data=a[3];


    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=NULL;

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

