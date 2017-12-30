#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"

struct book *InfoSta(struct book *head)
{
    int num=0;
    struct book *p;
    p=head;
    while(p!=NULL)
    {
        num++;
        p=p->next;
    }
    printf("图书数目:");
    printf("%d种\n",num);     
    p=head;
    struct Author
    {
        char author_name[50];
        int cnt;
        struct Author *next;
    };
    int flag=0;
    struct Author *head1;
    strcpy(head1->author_name,p->author);
    head1->cnt=1;
    struct Author *m;
    m=(struct Author *)malloc(sizeof(struct Author));
    int i=1;int k=0;
    for(int j=0;j<num;j++)
    {
        m=head1;
        p=p->next;
        while(m!=NULL)
        {   
             if(p->author!=m->author_name)
             {   m=m->next;                        
                 k++;
             }
             else
             {
                 flag=1;    
                 break;
             }
        }   
        if(flag==0)
        {
            i++;
            head1=head1->next;
            strcpy(head1->author_name,p->author);
            head1->cnt=1;
        }
        if(flag==1)
        {
            for(int l=0;l<k;l++)
            {
                head1=head1->next;
            }
            head1->cnt+=1;      
         }
     }
    printf("作者数目：");
    printf("%d\n",i);
    struct Author *max;
    max=(struct Author *)malloc(sizeof (struct Author));
    max=head1;
    head1=head1->next;
    for(int l=0;l<i-1;l++)
    {
        if(max->cnt<head1->cnt)
            max=head1;
        else
            head1=head1->next;
     }
     printf("拥有图书最多的作者：");
     printf("%s[^\n]\n",max->author_name);
     p=head;
     struct book *Max,*Min;
     Max=p;
     p=p->next;
     for(int l=0;l<num-1;l++)
     {
         if(Max->price<p->price)
             Max=p;
         else
             p=p->next;
     }
     printf("价格最高的书：");
     printf("%s\n",Max->name);
     p=head;
     Min=p;
     p=p->next;
     for(int l=0;l<num;l++)
     {
         if(Min->price>p->price)
             Min=p;
         else
             p=p->next;
     }
     printf("价格最低的书：");
     printf("%s[^\n]\n",Min->name);
     return head;
}                 
            
