#include <stdio.h>

#include <stdlib.h>



struct Node 

{

        int val;

        struct Node *next;

}





struct Node *creatreverse(int arr[],int size);

struct Node *insertBH(struct Node *head,struct Node *newp);

void output (struct Node *head);



int main()

{

        int arr[50];

        int size,i;

        scanf("%d",&size);

        for(i=0;i<size;i++)

                scanf("%d",&arr[i]);

        struct Node *head=creat(arr,size);

        head=reverse(head);

        output(head);

        return 0;

}



struct Node *creatreverse(int arr[],int size)

{

        struct Node *head,*newp;

        int i;

        head=NULL;

        for(i=0;i<size;i++)

        {

                newp=(struct Node *)malloc(sizeof(struct Node));

                newp->val=arr[i];

                head=insertBH(head,newp);

        }

        return head;

}



struct Node *insertBH(struct Node *head,struct Node *newp)

{

        newp->next=head;

        head=newp;

        return head;

}



void output(struct Node *head)

{

        struct Node *p;

        p=head;

        while(p!=NULL)

        {

                printf("%d ",p->val);

                p=p->next;

        }

        printf("\n");

}


