#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cmd.h"

//检查该书是否存在
int check(struct book *head,char *m)
{
    struct book *p;
    p=head;
    while(p != NULL)
    {
        if(strcmp(p->ISBN,m) == 0)
            break;
        p=p->next;
    }
    if(p == NULL)
        return 0;
    else
        return 1;
}
//添加图书条目
Book *addbook(struct book *head)
{
 
    Book *p;
    char name[50],writer[20],ISBN[20];
    int size=sizeof(Book);
    int n;
    float price;
    do
    {
        printf("请输入图书编号:");
        scanf("%s",ISBN);
        n=check(head,ISBN);
        if(n == 0)
            break;
        else
            printf("您输入的编号已存在,请重新输入!\n");
    }
    while(1);
    printf("请输入图书名:");
    scanf("%s",name);
    getchar();
    printf("请输入作者名:");
    scanf("%s",writer);
    getchar();
    printf("请输入价格:");
    scanf("%f",&price);
    getchar();
    p=(Book *)malloc(size);
    strcpy(p->ISBN,ISBN);
    strcpy(p->name,name);
    strcpy(p->writer,writer);
    p->price=price;
    name_sort(head);
    return head;
}

//显示图书条目
void print_book(Book *head)
{   
    Book *ptr;
    name_sort(head);
    if (head == NULL)
    {
    printf("no book!\n");
    }
    printf("Name\tWriter\tISBN\tPrice\n");
    for (ptr = head; ptr; ptr=ptr->next)
    {
        printf("%s\t%s\t%s\t%.2f\n", Bookarr->name, Bookarr->writer,
                                   Bookarr->ISBN, Bookarr->price);
    }
}
//图书条目的删除
void deletebook(struct book *head)
{
    char a[20];
    char b,ch='1';
    struct book *p1,*p2;
    FILE *fp;
    printf("请输入要删除的图书编号:");
    scanf("%s",a);
    p1=head;
    if((strcmp(p1->ISBN,a)==0)&&p1->next==NULL)//对于文件中只有一组数据
    {
        printf("是否清空文件!(y/n)\n");
        getchar();
        scanf("%c",&b);
        getchar();
        switch(b)
       {
        case 'n':
            break;
        case 'y':
 
            if((fp=fopen("f1.txt","w"))==NULL)
            {
                printf("File open error!\n");
                exit(0);
            }
            fclose(fp);
            printf("文件已清空!\n");
        }
    }
    else
{
        while((strcmp(p1->ISBN,a)!=0) && p1->next!=NULL)
        {
            p2=p1;
            p1=p1->next;
        }
     
        if(p1->next==NULL)
        {
            if(strcmp(p1->ISBN,a) == 0)
            {
                p2->next=NULL;
                printf("是否确定从文件中彻底删除该图书?(y/n)\n");
                getchar();
                scanf("%c",&b);
                switch(b)
                {
                case 'n':
                   break;
                case 'y':
                   fprint(head);
                   printf("删除成功!\n");
                   getchar();
                   break;
                }
            }
                 
            else
            {
               printf("没有找到要删除的数据!\n");
               getchar();
            }
        }
        else if ( p1 == head)
        {
            head=p1->next;
            printf("是否确定从文件中彻底删除该图书?(y/n)\n");
            getchar();
            scanf("%c",&b);
          
            switch(b)
            {
            case 'n':
                   break;
            case 'y':
                 fprint(head);
                 printf("删除成功!\n");
                 getchar();
                 break;
            }
                 
        }
        else
        {
            p2->next=p1->next;
            printf("是否确定从文件中彻底删除该图书?(y/n)\n");
              getchar();
            scanf("%c",&b);
         
            switch(b)
            {
            case 'n':
                   break;
            case 'y':
                 fprint(head);
                 printf("删除成功!\n");
                 getchar();
                 break;
            }
        }
    }
           
}
//图书查询
//按编号查询
void ISBN_search(Book *head)
{
    char a[20];
    struct book *p; 
    printf("请输入您要查询的图书编号:");
    scanf("%s",a);
    getchar();
    p=head;
    while(p != NULL)
    {
        if(strcmp( p-> ISBN,a) == 0)
            break;
        p=p->next;
    }
     
    if(p==NULL)
    {
        printf("没有找到该编号的图书!\n");
    }
    else
    {
        printf(" 你所查询的图书信息如下\n");
        printf(" %s\n%s\n%s\n%f\n",p->name,p->writer,p->ISBN,p->price);
    }
}
//按作者名查询图书信息
void writer_search(Book *head)
{
    char a[50];
    int flag=0;
    struct book *p; 
    printf("请选择您要查询的图书作者名:");
    scanf("%s",a);
    getchar();
    p=head;
    while(p!=NULL)
    {
        if(strcmp(p->writer,a) == 0)
        {
            flag=1;
            break;
        }
        p=p->next;
    }
    if(flag==0){
        printf("没有找到该图书名的图书!\n");
         
    }
    else
    {
    printf("你所查询的图书信息如下\n");
    while(p!=NULL)
    {
        if(strcmp(p->writer,a)==0)
        {
          printf("%s\n%s\n%s\n%f\n",p->name,p->writer,p->ISBN,p->price);
                flag=1;
        }
    p=p->next;
    }
    }
}
//书名查询
int find(const char *str,const char *substr)
{
    int i,j,k;
    for(i = 0; str[i]; ++i)
    {
        for(k = i,j = 0; str[k] && substr[j] 
                        && str [k] == substr[j]; ++k,++j)
            if( !substr[j]) return i;
    }
    return -1;
}
void name_search(Book *head)
{
    char a[20];
    int flag=0;
    Book *p;
    printf("输入要查寻的图书关键字:");
    scanf("%s",a);
    p=head;
    while(p != NULL)
    {
    if(find (p->name,a) != -1)
    {
        printf("你所查询的图书信息如下:");
        printf("%s\t%s\t%s\t%f\n",p->name,p->writer,p->ISBN,p->price);
    }
    p = p->next;
    }
       if(flag == 0)
           printf("没有找到含该关键字的图书!");
}
void search(Book *head)
{
    int a;
    printf("              ==========================================================\n");
     printf("                     **          1-按图书编号查询        **\n");
     printf("                     **          2-按图书名称查询        **\n");
     printf("                     **          3-按图书作者查询        **\n");
     printf("                     **          0-退出查询              ××\n");
     printf("             ==========================================================\n");
     printf("请输入所选择的编号:");
     scanf("%d",&a);
     getchar();
     switch(a)
     {
         case 0:
             break;
         case 1:
             ISBN_search(head);
             break;
         case 2:
             name_search(head);
             break;
         case 3:
             writer_search(head);
             break;
         default:
             printf("输入错误!\n");
             break;
     }
}
//修改图书信息
void change(Book *head)
{
    int b;
    char c,a[20];
    Book *p;
    printf("请输入要修改的图书编号:");
    scanf("%s",a);
    p=head;
    while(p!=NULL)
    {
        if(strcmp(p->ISBN,a) == 0)
            break;
        p=p->next;
    }
    if(p==NULL)
    {
        printf("没有找到该编号的图书!\n");
        getchar();
    }
    else
    {
        printf("              ============================================================\n");
        printf("              **                          1-编号                        **\n");
        printf("              **                          2-图书名                      **\n");
        printf("              **                          3-作者名                      **\n");
        printf("              **                          4-价格                        **\n");
        printf("              **                          5-修改全部                    **\n");
        printf("              **                          0-放弃修改                    **\n");
        printf("              ============================================================\n");
        printf("请选择你要修改的信息编号:");
        scanf("%d",&b);
        getchar();
        switch(b)
        {
        case 1:
            printf("请输入新编号:");
            scanf("%s",p->ISBN);
            printf("修改成功!\n");
            getchar();
            break;
        case 2:
            printf("请输入新图书名:");
            scanf("%s",p->name);
            printf("修改成功!\n");
            getchar();
            break;
        case 3:
            printf("请输入新作者名:");
            scanf("%s",p->writer);
            printf("修改成功!\n");
            getchar();
            break;
        case 4:
            printf("请输入新价格:");
            scanf("%f",&p->price);
            getchar();
            printf("修改成功!\n");
            break;
        case 5:
            printf("请输入新图书编号:");
            scanf("%s",p->ISBN);
            getchar();
            printf("请输入新图书名:");
            scanf("%s",p->name);
            getchar();
            printf("请输入新作者名:");
            scanf("%s",p->writer);
            getchar();
            printf("请输入新价格:");
            scanf("%f",&p->price);
            getchar();
            printf("修改成功!\n");
            getchar();
            break;
        case 0:
            break;
        default :
            printf("您的输入有误!\n");
            break;
        }
        printf("是否将修改后的信息保存到文件中?(y/n)\n");
        scanf("%c",&c);
        getchar();
        switch(c)
        {
        case 'n':
            break;
         case 'y':
            fprint(head);
            printf("保存成功!\n");
            getchar();
            break;
        }              
    }
}

void name_sort(Book *head)//按名称排序
{
    Book *a[1000],*p,*p1,*temp;
    int i,k,index,n=0;
    char b;
    p1=head;
    for(p=head;p;p=p->next)
        n++;
    for(i=0;i<n;i++)
    {
        a[i]=p1;
        p1=p1->next;
    }
    for(k=0;k<n-1;k++)
    {
        index=k;
        for(i=k+1;i<n;i++)
        {
            if(strcmp(a[index]->name,a[i]->name)>0)
                index=i;
        }
        temp=a[index];
        a[index]=a[k];
        a[k]=temp;
    }
}

struct writer
{
        char name[20];
        int num;
};
void statistics (Book *head)
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

    strcpy(head1->author_name,p->writer);

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

             if(p->writer!=m->author_name)

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

            strcpy(head1->author_name,p->writer);

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

     printf("%s\n",max->author_name);

     p=head;

     struct book *Max,*Min;

     Max=p;

     p=p->next;

     for(int l=0;l<num-1;l++)

     {

         if(Max->price < p->price)

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

         if(Min->price > p->price)

             Min=p;

         else

             p=p->next;

     }

     printf("价格最低的书：");

     printf("%s\n",Min->name);
}    
