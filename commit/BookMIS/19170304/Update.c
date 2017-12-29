#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include "head.h"



struct book *Update(struct book *head)

{

    char ISBN1[8];

    char author1[50];

    char name_keyword[50];

    int c,i,len1,len2,flag=0,mark;

    struct book *p;

    p=(struct book *)malloc(sizeof(struct book));

    printf("请查找你想修改的图书:\n");

    printf("[1]通过ISBN码查找");

    printf("[2]通过作者查找");

    printf("[3]通过书名关键字查找");

    printf("请输入指令： ");

    scanf("%d",&c);

    switch(c)

     {

        case 1:

            printf("请输入所查图书的ISBN:");

            scanf("%s[^\n]",ISBN1);

            printf("查询结果：");

            while(p!=NULL)

            {

                if(strcmp(ISBN1,p->ISBN)==0)

                {

                     printf("ISBN:%s\t书名：%s\t作者：%s\t价格：%lf\n",p->ISBN,p->name,p->author,p->price);

                     flag=1;

                     break;

                }

              else

                     p=p->next;

            }

                if(flag==0)

                    printf("无此图书");

                if(flag==1)

                {

                    printf("修改图书信息");

                    printf("书名:");

                    scanf("%s[^\n]",p->name);

                    printf("作者:");

	            scanf("%s[^\n]",p->author);

                    printf("价格:");

                    scanf("%lf",&p->price);

                }  

               break;

                    

         case 2:

            printf("请输入所查图书的作者");

            scanf("%s[^\n]",author1);

            printf("查询结果：");

            while(p!=NULL)

            {

                if(strcmp(author1,p->author)==0)

                {

                    printf("ISBN:%s\t 书名：%s\t 作者：%s\t 价格：%lf\n",p->ISBN,p->name,p->author,p->price);

                    flag=1;

                } 

                if(flag==1)

                {  

                    printf("修改图书信息");

                    printf("书名:");

                    scanf("%s[^\n]",p->name);

                    printf("作者:");

                    scanf("%s[^\n]",p->author);

                    printf("价格:");

                    scanf("%lf",&p->price);

                } 

                p=p->next;

             }

                 if(flag==0)

                    printf("无此作者的图书");

            break;



             

        case 3:

            printf("请输入所查图书的书名关键字");

            scanf("%s[^\n]",name_keyword);

            printf("查询结果：");

            len1=strlen(name_keyword);

            len2=strlen(p->name);

            while(p!=NULL)

            {    for(i=0;i<=len2-len1+1;i++)

                {

                    if(strncmp(p->name+i,name_keyword,len1)==0)

                    {

                        printf("ISBN:%s\t 书名：%s\t 作者：%s\t 价格：%lf\n",p->ISBN,p->name,p->author,p->price);

                         flag=1;

                        break;

                    }

                }

               if(flag==1)

               {    

                    printf("修改图书信息");

                    printf("书名:");

                    scanf("%s[^\n]",p->name);

                    printf("作者:");

                    scanf("%s[^\n]",p->author);

                    printf("价格:");

                    scanf("%lf",&p->price);

               }

               p=p->next;

            }

            if(flag==0)

                 printf("无包含此关键字的图书");

             break;

         default:

                printf("error commamd");

     }

     return head;

}
