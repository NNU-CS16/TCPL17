#include "head.h"

void report()
{
        struct book *p=creat();
        struct book *p2=p;
        struct book *p3=p;
        struct book *p4=p;
        struct book *p5=p;
        struct book *p6=p;
        struct book *p7=p;
        int count1=0,count2=0;
        while(p!=NULL)
        {
                count1++;
                p=p->next;
        }
        printf("\n");
        printf("总共有%d本书\n\n",count1);
        struct book *f=NULL;
        count2=count1;
        while(p4!=NULL)
        {
                f=p4;
                p4=p4->next;
                while(p4!=NULL)
                {
                if(strcmp(f->writer,p4->writer)==0)
                {
                        count2--;
                        break;
                } 
                p4=p4->next;
                }
                p4=f->next;
        }
        printf("总共有%d个作者\n\n",count2);
        int m=0,n=1;
        while(p5!=NULL)
        {
                f=p5;
                p6=f->next;;
                while(p6!=NULL)
                {
                if(strcmp(f->writer,p6->writer)==0)
                {
                        n++;
                }
                p6=p6->next;
                }
                if(n>m)
                {
                        m=n;
                        p7=f;
                }
                p5=p5->next;
        }
        printf("拥有图书数量最多的作者是%s\n\n",p7->writer);

        
        double high,low;
        high=p2->price;
        p2=p2->next;
        while(p2!=NULL)
        {
                if(p2->price>high)
                        high=p2->price;
                else
                        p2=p2->next;
        }
        printf("价格最高为%lf\n\n",high);
        low=p3->price;
        p3=p3->next;
        while(p3!=NULL)
        {
                if(p3->price<low)
                        low=p3->price;
                else
                        p3=p3->next;
        }
        printf("价格最低为%lf\n\n",low);
}
