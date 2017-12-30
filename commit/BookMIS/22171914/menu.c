#include "zcz.h"
#include "insert.h"
#include "search.h"
#include "delete.h"
#include "output.h"

#include "count.h"
int main()
{
  struct book *head,*p;
  char name[50],writer[20],ISBN[8];
  double price;
  int size=sizeof(struct book);
  int m=1,n=1,f;

  int choice;
  printf("欢迎进入图书馆里系统\n");
  printf("------>向导---->新建图书库\n");
  printf("注意：当输入编号为0时，进入下一步\n");
  dq();
  system("cls");
  do
  {
    printf("图书管理系统\n");
        printf("\n");
        printf("\n");
        printf("[1]:查询图书\n");
        printf("[2]:添加图书\n");
        printf("[3]:删除图书\n");
        printf("[4]:遍历图书\n");
        printf("[5]:统计图书\n");
        printf("〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓\n");
        printf("0:退出\n");
        printf("请选择<0~5>:");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
            system("cls");
            printf("图书管理系统\n");
            printf("1.按编号查询\n");
            printf("0.返回主菜单\n");
            printf("请选择:");
            scanf("%d",&f);
            if(f==1)
            {
                printf("请输入查询图书编号:");
                scanf("%s",ISBN);
                printf("相关信息如下:\n");
                head=search(ISBN,head);
                break;
            }

            else if(f==0)
            {

              break;
            }
            break;
        case 2:
            system("cls");
            printf("〓〓〓〓〓图书管理系统〓〓〓〓〓\n");
            printf("请输入图书名称:");
            scanf("%s",name);
            printf("请输入图书编号:");
            scanf("%s",ISBN);
            printf("请输入单价:");
            scanf("%lf",&price);
            printf("请输入作者名字:");
            scanf("%s",writer);
            printf("\n");
            struct book *pb;
            pb=(struct book *)malloc(size);
            for(pb=head;pb;pb=pb->next)
            {
              if(pb->ISBN==ISBN)
              {
                printf("此编号图书已存在\n");
                m=0;
                break;
              }
            }
            if(m)
            {
            p=(struct book *)malloc(size);
            strcpy(p->name,name);
            strcpy(p->ISBN,ISBN);
            p->price=price;
            strcpy(p->writer,writer);
            head=insert(head,p);
            printf("添加图书成功!\n");
            }
            break;
        case 3:
            system("cls");
            printf("〓〓〓〓〓图书管理系统〓〓〓〓〓\n");
            printf("输入删除图书编号:\n");
            scanf("%s",ISBN);
            head=delete(head,ISBN);
            printf("删除图书成功!\n");
            break;
        case 4:
            system("cls");
            printf("〓〓〓〓〓图书管理系统〓〓〓〓〓\n");
 
            output(head);
            break;
        case 5:
            system("cls");
            printf("〓〓〓〓〓图书管理系统〓〓〓〓〓\n");
            count();
            break;
        case 0:
            system("cls");
            printf("〓〓〓〓〓图书管理系统〓〓〓〓〓\n");
            printf("谢谢您的使用!\n");
            break;
        }
    }while(choice!=0);
    return 0;
}
