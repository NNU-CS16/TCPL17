#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"conio.h"
#define Pquantity 3
#define MAX 1000
#define N 5
int k=0;
  /*结构体类型*/
typedef struct LNode//申明节点的类型和指向节点的指针类型
{
    int stuid;/*编号*/
    char name[20];/*书名*/
    char author[20];/*作者*/
    char press[20];/*出版社*/
    float price;/*价格*/
    int quantity;/*数量*/
}LNode,*Linklist;

int read_file(Linklist LL)
{
FILE *fp;
    int i=0;
  if((fp=fopen("book.txt","rt"))==NULL)
  {printf("\n\n—————库存文件不存在！请创");
   return 0;
  }
  while(feof(fp)!=1)
    {
  fread(&stu[i],sizeof(LinkList LL),1,fp);
  if(LL->stuid==0)
    break;
  else
    i++;
  }
  fclose(fp);
  return i;
}
void save_file(LinkList LL,int sum)
{
FILE*fp;
 int i;
 if((fp=fopen("book.txt","wb"))==NULL)
 {printf("写文件错误!\n");
  return;
 }
   for(i=0;i<sum;i++)
     if(fwrite(LL,sizeof(LinkList LL),1,fp)!=1)
       printf("写文件错误!\n");
     fclose(fp);
}


/*创建图书信息*/

LinkList Input()
{
int i,n;
LinkList L,p;

L=(LinkList)malloc(sizeof(LNode));

L->next=NULL;
 printf("请输入要输入的书本数:\n");
 scanf("%2d",&n);
  for(i=n;i>0;i--)
 {
 printf("**************************************\n");
 printf("**      请输入第%d个学生的信息**\n",i);
 printf("**************************************\n");
  p=(LinkList)malloc(sizeof(LNode));   //
 printf("请输入书本编号：");
scanf("%d",&p->stduid);
printf("请输入书名：");
  scanf("%s",p->name);
  printf("请输入作者：");
  scanf("%s",p->author);
  printf("请输入出版社：");
  scanf("%s",p->press);
 printf("请输入图书价格：");
  scanf("%f",&p->price);
   printf("请输入图书数量：");
  scanf("%d",&p->quantity);
 L->next=p; //把新结点插入到链表头部
}
return L;
}


/*删除图书信息*/
void Delete(LinkList L)
{
 LinkList p,q;
 int num,ch;
 char s[20];
 if(L==NULL)
 printf("请先输入数据\n");
 else
{
 p=L;  //L是头结点的头指针,最后p指向要删除的结点的前一个位置
 q=p->next;  //q指向p的下一个结点，即最后指向要删除的结点
 printf("1.按书名删除\n2.按编号删除\n请选择：");
 scanf("%d",&ch);
 if(ch==1)
{
 printf("请输入书名:");
 scanf("%s",s);
 while(strcmp(q->name,s)!=0&&q->next!=NULL){
 p=q;
 q=q->next;
 }
 if(strcmp(q->name,s)==0)    //q指向的结点要被删除,p指向要删除的结点的前一个位置
 {
 p->next=q->next;
 printf("被删除书本的信息如下:\n");
 printf("
printf("编号\t书名\t作者\t出版社\t价格\t数量\n");
printf("%d\t%s\t%s\t%s\t%.2f\t%d\n",p->stuid,p->name,p->author,p->press,p->quantity);
 free(q);        //释放要删除的结点q
 }
 else
 printf("没有该学生的信息\n");
 }//按姓名删除
 else
 {
 printf("请输入要删除的书本编号:");
 scanf("%10d",&num);
 while(q->stuid!=num&&q->next!=NULL)
 {
        p=q;
    q=q->next;
 }
 if(q->stuid==num)    //q指向的结点要被删除,p指向要删除的结点的 前一个位置

{
p->next=q->next;
printf("被删除学生的信息如下:\n");
printf("编号\t书名\t作者\t出版社\t价格\t数量\n");
printf("%d\t%s\t%s\t%s\t%.2f\t%d\n",p->stuid,p->name,p->author,p->press,p->quantity);
free(q);   //释放要删除的结点q
}
 else
 printf("没有该学生的信息\n");
    }//按学号删除
    }//有学生信息
 }

void Display(LinkList L) //显示学生信息
{
 LinkList p;
 p=L->next;
// L为头指针p指向第一个结点
 if(L==NULL)
 printf("请先输入数据\n");
 else{
        printf("所有同学信息如下:\n");
 printf("编号\t书名\t作者\t出版社\t价格\t数量\n");
while(p)

{
printf("%d\t%s\t%s\t%s\t%.2f\t%d\n",p->stuid,p->name,p->author,p->press,p->quantity);
p=p->next;
}


}
}


/*查询图书信息*/
void Search(LinkList L)
{
 LinkList p;
 int num,ch;
 char sn[20];
 p=L->next;
 if(!L)
printf("请先输入数据\n");
 else
    {
 printf("1.按编号查找\n2.按姓名查找\n请选择:");
 scanf("%d",&ch);
 if(ch==1){
 printf("请输入要查找的图书编号:\n");
 scanf("%10d",&num);
 while(p&&p->stuid!=num)
 p=p->next;
 if(p->stuid==num)
 {




printf("编号\t书名\t作者\t出版社\t价格\t数量\n");
printf("%d\t%s\t%s\t%s\t%.2f\t%d\n",p->stuid,p->name,p->author,p->press,p->quantity);

}



else
 printf("没有该学生的信息\n");
 }//按学号查找ch==1
 else
 {
 printf("请输入要查找学生的姓名:\n");
 scanf("%s",sn);
 while(p&&strcmp(p->name,sn)!=0)
p=p->next;
if(strcmp(p->name,sn)==0)
 {
   printf("编号\t书名\t作者\t出版社\t价格\t数量\n");
printf("%d\t%s\t%s\t%s\t%.2f\t%d\n",p->stuid,p->name,p->author,p->press,p->quantity);
 }
else
 printf("没有该学生的信息\n");
 }//按姓名查找ch==2
 }//有数据
 }

/*修改图书信息*/
void update(LinkList L)
  {
      int num,i,choice;
LinkList p;
     printf("\n\n\n      请输入您要修改的图书的编号");
     scanf("%d",&num);
     for(i=0;i<k;i++)
     { if(num==p->stuid)
        printf("编号\t书名\t作者\t出版社\t价格\t数量\n");
printf("%d\t%s\t%s\t%s\t%.2f\t%d\n",p->stuid,p->name,p->author,p->press,p->quantity);

     printf("\n\n\n     ********请输入您想要修改的数据********\n\n");
     printf("                1. 书名\n\n");
     printf("                2. 作者\n\n");
     printf("                3. 出版社\n\n");
     printf("                4. 价格\n\n");
     printf("                5. 数量\n\n");
     printf("                 请选择（1-5）:");
    scanf("%d",&choice);
    switch(choice)
    {

     case 1:{
           printf("\n   请输入你改的新书名");
             scanf("%s",p->name);
         break;
        }
     case 2:{
           printf("\n   请输入你改的新作者");
             scanf("%s",p->author);
         break;
        }
     case 3:{
           printf("\n   请输入你改的新出版社");
             scanf("%s",p->press);
         break;
        }
     case 4:{
           printf("\n   请输入你改的新价格");
             scanf("%f",p->price);
         break;
     case 5:{
           printf("\n   请输入你改的新数量");
             scanf("%d",p->quantity);
         break;
        }
        }
    }

     printf("编号\t书名\t作者\t出版社\t价格\t数量\n");
printf("%d\t%s\t%s\t%s\t%.2f\t%d\n",p->stuid,p->name,p->author,p->press,p->quantity);
     printf("按任意键加回车返回主菜单!");
     scanf("%d",&i);
     break;
   }
}
void tongji(LinkList L)
{
    printf("这个功能还没做");
}
void pquantitydis()
{
   printf(" \n\n\n                   **********************************\n");
   printf("                   *                                *\n");
   printf("                   *                                *\n");
   printf("                   *         22171902方涵钰         *\n");
   printf("                   *     欢迎进入图书信息管理系统   *\n");
   printf("                   *                                *\n");
   printf("                   *                                *\n");
   printf("                   *                                *\n");
   printf("                   **********************************\n");

}
void check()
{
   char userName[5];/*用户名*/

        printf("\n       请输入您的用户名:");
        gets(userName);
        printf("欢迎%s进入图书管理系统",userName);

        }

void menu()
{
  LinkList LL;
  int choice,k,sum;
  sum=read_file(LL);
  if(sum==0)
   {
       printf("首先录入基本库存信息！按回车后进入—————\n");
       getch();
    sum=input(LL);
   }

  do
  {
     printf("\n\n\n               ********图书信息管理系统********\n\n");
     printf("                      1. 创建图书信息\n\n");
     printf("                      2. 查询图书信息\n\n");
     printf("                      3. 修改图书信息\n\n");
     printf("                      4. 删除图书信息\n\n");
     printf("                      5. 图书价格信息排名\n\n");
     printf("                      0. 退出系统\n\n");
     printf("                       请选择（0-6）:");
     scanf("%d",&choice);
    switch(choice)
    {
      case 1: k=input(LL); break;/*创建图书信息*/
      case 2: inquire(LL); break;/*查询图书信息*/
      case 3: update(LL); break;/*修改图书信息*/
      case 4: deletel(LL); break;/*删除图书信息*/
      case 5: sort(LL); break;/*图书价格信息排名*/
      case 0: break;
    }
  }while(choice!=0);
  save_file(stu,sum);
}

int main()
{
 int i,sum;
 pquantitydis();
  check();
int ch;

    LinkList LL;
 while(1)
 {
 Menu();
 printf("请选择您要进行的操作:");

scanf("%d",&ch);
 while(ch<0||ch>8)
 {
 printf("输入错误!请重新输入:");
 fflush(stdin);
 scanf("%d",&ch);
 }

switch(ch)
 {
 case 1:
 LL=Input();
 break;
 case 2:
 Display(LL);
 break;
case 3:
 Insert(LL);
 break;
 case 4:
 Delete(LL);
 break;
 case 5:
 Search(LL);
 break;
 case 6:
 tongji(LL);
 break;

case 0:
tuichu();
 break;


        }

    }
}

