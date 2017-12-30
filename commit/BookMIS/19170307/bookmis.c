#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
      char book_name[30];
      int IBSM;
      double price;
      char author[20];
      char state[20];
      char name[20];
      char sex[10];
      int xuehao;
      struct book *book_next;
};
void Print_Book(struct book *head_book);/*浏览所有图书信息*/
struct book *Create_New_Book();/*创建新的图书库，图书编号输入为0时结束*/
struct book *Search_Book_IBSM(int IBSM,struct book *head_book);
struct book *Search_Book_name(char *b_name,struct book *head_book);
struct book *Search_Book_price(double price_h,double price_l,struct book *head_book);
struct book *Insert_Book(struct book *head_book,struct book *stud_book);/*增加图
书，逐个添加*/
struct book *Delete_Book(struct book *head_book,int IBSM);/*删除图书*/
struct book *modify_Book(struct book *head_book, int IBSM);
int report(struct book* head_book, int size);
int main()
{
        struct book *head_book,*p_book;
        char book_name[30],name[20],author[20],sex[10];
        int IBSM;
        double price,price_h,price_l;
        int size_book=sizeof(struct book);
        int m=1,n=1,f,size=15;
        char *b_name;
        int xuehao;
        int choice;
        printf("\n欢迎您第一次进入图书管理系统!\n\n");
        printf("----->[向导]----->[新建图书库]\n\n");
        printf("注意:当输入图书编号为0时,进入下一步.\n\n");
        head_book=Create_New_Book();
        system("cls");
        do{
                printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                printf("\n");
                printf("\t\t\t[1]:查询图书\t");printf(" [2]:添加图书\n");
                printf("\t\t\t[3]:删除图书\t");printf(" [4]:遍历图书\n");
                printf("\t\t\t[5]:修改图书\t");printf(" [6]:统计图书信息\n");
                printf("\t\t\t〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓\n\n");
                printf("\t\t\t0:退出\n\n");
                printf("请选择<0~6>:");
                scanf("%d",&choice);
                switch(choice){
                case 1:
                        system("cls");
                        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                        printf("1.按编号查询\n\n");
                        printf("2.按名称查询\n\n");
                        printf("3.按价格区间查询\n\n");
                        printf("0.返回主菜单\n\n");
                        printf("请选择:");
                        scanf("%d",&f);
                        if(f==1)
                        {
                            printf("请输入查询图书编号:");
                            scanf("%d",&IBSM);
                            printf("相关信息如下:\n\n");
                            head_book=Search_Book_IBSM(IBSM,head_book);
                            break;
                        }
                        else if(f==2)
                        {
                                b_name=book_name;
                                printf("请输入查询图书名称:");
                                scanf("%s",b_name);
                                printf("相关信息如下:\n\n");
                                head_book=Search_Book_name(b_name,head_book);
                                break;
                        }
                        else if(f==3)
                        {
                                printf("请输入最高价格:");
                                scanf("%lf",&price_h);
                                printf("请输入最低价格:");
                                scanf("%lf",&price_l);
                                printf("相关信息如下:\n\n");
                                head_book=Search_Book_price(price_h,price_l,head_book);
                                break;
                        }
                        else if(f==0)
                        {
                                break;
                        }
                        break;

                case 2:
                        system("cls");
                        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                        printf("请输入图书名称:");
                        scanf("%s",book_name);
                        printf("请输入图书编号:");
                        scanf("%d",&IBSM);
                        printf("请输入单价:");
                        scanf("%lf",&price);
                printf("请输入作者名字:");
                scanf("%s",author);
                printf("\n");
                        struct book *ptr_b;
                for(ptr_b=head_book;ptr_b;ptr_b=ptr_b->book_next)
                {
                        if(ptr_b->IBSM==IBSM)
                        {
                                printf("此编号图书已存在\n");
                                m=0;
                                break;
                        }
                }
                if(m)
                {
                    p_book=(struct book *)malloc(size_book);
                    strcpy(p_book->book_name,book_name);
                    p_book->IBSM=IBSM;
                    p_book->price=price;
                    p_book->xuehao=0;
                    strcpy(p_book->author,author);
                    strcpy(p_book->state,"存在");
                    strcpy(p_book->sex,"待定");
                    strcpy(p_book->name,"待定");
                        head_book=Insert_Book(head_book,p_book);
                        printf("\n添加图书成功!\n\n");
                        }
                        break;
                case 3:
                        system("cls");
                        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                        printf("输入删除图书编号:\n");
                        scanf("%d",&IBSM);
                        head_book=Delete_Book(head_book,IBSM);
                        printf("\n删除图书成功!\n\n");
                        break;
                case 4:
                        system("cls");
                        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                        Print_Book(head_book);
                        break;
                case 5:
                        system("cls");
                        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                        printf("输入修改图书编号:\n");
                        scanf("%d",&IBSM);
                        head_book=modify_Book(head_book,IBSM);
                        printf("\n修改图书成功!\n\n");
                        break;
                case 6:
                        system("cls");
                        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                        report(head_book, size);
                        break;
                case 0:
                        system("cls");
                        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
                        printf("\n谢谢您的使用!\n\n");
                        break;
                }
        }while(choice!=0);

        return 0;
}
struct book *Create_New_Book()
{
        struct book *head_book,*p_book;
        int IBSM;
        double price;
        char book_name[30],author[20];
        int size_book=sizeof(struct book);

        head_book=NULL;
        printf("请输入图书名称:");
        scanf("%s",book_name);
        printf("请输入图书编号:");
        scanf("%d",&IBSM);
        printf("请输入单价:");
        scanf("%lf",&price);
        printf("请输入作者名字:");
        scanf("%s",author);
        printf("\n");
        while(IBSM!=0){
                p_book=(struct book *)malloc(size_book);
                strcpy(p_book->book_name,book_name);
                p_book->IBSM=IBSM;
                p_book->price=price;
                p_book->xuehao=0;
                strcpy(p_book->author,author);
                strcpy(p_book->state,"存在");
                strcpy(p_book->sex,"待定");
                strcpy(p_book->name,"待定");
                head_book=Insert_Book(head_book,p_book);
                printf("请输入图书名称:");
                scanf("%s",book_name);
                printf("请输入图书编号:");
                scanf("%d",&IBSM);
                printf("请输入单价:");
                scanf("%lf",&price);
                printf("请输入作者名字:");
                scanf("%s",author);
                printf("\n");
        }

        return head_book;
}
struct book *Search_Book_IBSM(int IBSM,struct book *head_book)
{
        struct book *ptr_book;
        int flag=0;
        for(ptr_book=head_book;ptr_book;ptr_book=ptr_book->book_next)
        {
                if(ptr_book->IBSM==IBSM)
                {
                        printf("图书编号:%d\n",ptr_book->IBSM);
                        printf("图书名称:%s\n",ptr_book->book_name);
                        printf("图书单价:%.2lf\n",ptr_book->price);
                        printf("图书作者:%s\n",ptr_book->author);
                        printf("\n");
                        flag++;
                }
        }
        if(flag==0)
        {
           printf("暂无此图书信息!\n\n");
        }
        return head_book;
}
struct book *Search_Book_name(char *b_name,struct book *head_book)
{
        struct book *ptr_book;
        int flag=0;
        for(ptr_book=head_book;ptr_book;ptr_book=ptr_book->book_next)
        {
                if(strcmp(ptr_book->book_name,b_name)==0)
                {
                        printf("图书编号:%d\n",ptr_book->IBSM);
                        printf("图书名称:%s\n",ptr_book->book_name);
                        printf("图书单价:%.2lf\n",ptr_book->price);
                        printf("图书作者:%s\n",ptr_book->author);
                        printf("\n");
                        flag++;
                }
        }
        if(flag==0)
        {
           printf("暂无此图书信息!\n\n");
        }
        return head_book;
}
struct book *Search_Book_price(double price_h,double price_l,struct book *head_book)
{
        struct book *ptr_book;
        int flag=0;
        for(ptr_book=head_book;ptr_book;ptr_book=ptr_book->book_next)
        {
                if((ptr_book->price>=price_l)&&(ptr_book->price<=price_h))
                {
                        printf("图书编号:%d\n",ptr_book->IBSM);
                        printf("图书名称:%s\n",ptr_book->book_name);
                        printf("图书单价:%.2lf\n",ptr_book->price);
                        printf("图书作者:%s\n",ptr_book->author);
                        printf("\n");
                        flag++;
                }
        }
        if(flag==0)
        {
           printf("暂无此图书信息!\n\n");
        }
        return head_book;
}
struct book *Delete_Book(struct book *head_book,int IBSM)
{
        struct book *ptr1_book,*ptr2_book;

        while(head_book!=NULL && head_book->IBSM==IBSM)
        {
                ptr2_book=head_book;
                head_book=head_book->book_next;
                free(ptr2_book);
        }
        if(head_book==NULL)
                return NULL;

        ptr1_book=head_book;
        ptr2_book=head_book->book_next;
        while(ptr2_book!=NULL)
        {
                if(ptr2_book->IBSM==IBSM)
                {
                        ptr1_book->book_next=ptr2_book->book_next;
                        free(ptr2_book);
                }
                else
                        ptr1_book=ptr2_book;
                ptr2_book=ptr1_book->book_next;
        }

        return head_book;
}
struct book *Insert_Book(struct book *head_book,struct book *stud_book)
{
        struct book *ptr_b,*ptr1_b,*ptr2_b;
        ptr2_b=head_book;
        ptr_b=stud_book;
        if(head_book==NULL)
        {
                head_book=ptr_b;
                head_book->book_next=NULL;
        }
        else
        {
                while((ptr_b->IBSM > ptr2_b->IBSM) && (ptr2_b->book_next!=NULL)){
                        ptr1_b=ptr2_b;
                        ptr2_b=ptr2_b->book_next;

        }
                if(ptr_b->IBSM <= ptr2_b->IBSM)
                {
                        if(head_book==ptr2_b) head_book=ptr_b;
                        else ptr1_b->book_next=ptr_b;
                        ptr_b->book_next=ptr2_b;
                }
                else
                {
                        ptr2_b->book_next=ptr_b;
                        ptr_b->book_next=NULL;
                }
        }
        return head_book;
}

struct book *modify_Book(struct book *head_book, int IBSM)
{
    struct book *ptr_book;
    head_book=Search_Book_IBSM(IBSM,head_book);
printf("更新图书信息\n");
    printf("书名:");
    scanf("%s",ptr_book->book_name);
    printf("作者:");
    scanf("%s",ptr_book->author);
    printf("价格:");
    scanf("%lf",&ptr_book->price);
    return head_book;
}

int report(struct book* head_book, int size)
{
    struct book* p = head_book;
    struct book* pmax = NULL;
    struct book* pmin = NULL;
    char* pmax_str;
    int num[20];
    int i = 0, k = 1;
    double max_p = 0.0, min_p = 100.0;
    int max_arr = 0;
    char *str[20] = {0};
    int arr[20] = {0};
    str[0] = p->author;
    while (p != NULL)
    {
         int flag = -1;
         if (p->price > max_p)
         {
           max_p = p->price;
           pmax = p;
         }

         if (p->price < min_p)
         {
           min_p = p->price;
           pmin = p;
         }

          for (i = 0; i < k; i++)
          {
              if (strcmp(str[i], p->author) == 0)
              {
                arr[i]++;
                flag = 0;
              }
          }

          if (flag == -1)
          {
            str[k] = p->author;
            arr[k]++;
            k++;
          }
          p = p->book_next;
      }

      for (i = 0; i < k; i++)
      {
          if (arr[i] > max_arr)
          {
            max_arr = arr[i];
            pmax_str = str[i];
          }
      }
      printf("图书数目为:");
      printf("%d\n",size);
      printf("作者数目为:");
      printf("%d\n",k);
      printf("拥有图书最多的作者:");
      printf("%s\n",pmax_str);
      printf("价格最高的图书:");
      printf("%s\n",pmax->book_name);
      printf("价格最低的图书:");
      printf("%s\n",pmin->book_name);
      return 0;
}
void Print_Book(struct book *head_book)
{
        struct book *ptr_b;
        if(head_book==NULL){
                printf("\n无记录\n\n");
                return;
        }
        printf("\n图书编号\t图书名称\t图书单价\t图书作者\n\n");
        for(ptr_b=head_book;ptr_b;ptr_b=ptr_b->book_next)
            printf("%d\t\t%s\t\t%.2lf\t\t%s\n\n",ptr_b->IBSM,ptr_b->book_name,ptr_b->price,ptr_b->author);
}

