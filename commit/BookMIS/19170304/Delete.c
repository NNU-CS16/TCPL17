#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include "head.h"



struct book *Delete(struct book *head)

{

    struct book *prev,*p;

    p=(struct book *)malloc(sizeof(struct book));

    char name_keyword[50];

    int i,len1,len2,flag=0;

    prev=NULL;

    printf("请输入要删除的图书的书名关键字");

            scanf("%s[^\n]",name_keyword);

            len1=strlen(name_keyword);

            len2=strlen(p->name);

            while(p!=NULL)

            {   

                for(i=0;i<=len2-len1+1;i++)

                {

                    if(strncmp(p->name+i,name_keyword,len1)==0)

                    {

                        flag=1;

	                break;

	            } 

                }

                if(flag==0)

                {

                    prev=p;

                    p=p->next;

	        }

                if(flag==1)

                {

                    if(p=head)

                        head=head->next;

                    else

	                prev->next=p->next;

                    free(p);

                    break;

                 }

            }

           return head;

} 
