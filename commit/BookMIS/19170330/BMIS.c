#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gyh.h"

int main ()
{
    struct book *head_book, *p_book;
    char book_name[50], author[20], ISBN[8];
    double price;
    int choice, f;
    int m=1, n=1;//后面选择时使用
    int size_book=sizeof(struct book);
    char *b_name,*a_name;

    printf("\n\t   欢迎你进入我的图书管理系统，祝你使用愉快!\n");
    printf("\tWelcome to the Book Management Information System!\n");
    int menu()//总菜单
    {   
        printf("\n\t\t====== 图书管理系统菜单 ======\n");
        printf("\t(1)查询图书条目\n");
        printf("\t(2)添加图书条目\n");
        printf("\t(3)修改图书条目\n");
        printf("\t(4)删除图书条目\n");
        printf("\t(5)显示图书条目\n");
        printf("\t(6)图书记录等统计信息\n");
        printf("\t(0)退出系统\n");
        printf("请输入命令(0~6):     ");
        return 0;
    }
    
    do{
        menu(); //打开菜单
        scanf("%d",&choice);
        switch (choice){
        case 0://退出系统
            system("cls");
            printf("\n\t\t====== 图书管理系统 ======\n");
            printf("\t\t====== 谢谢您的使用，欢迎再次光临！======\n");
            printf("\t\t\t系统提示:系统已退出\n");
            break;
        case 1://查询图书
            system("cls");
            printf("\n\t\t====== 图书管理系统 ======\n");
            printf("\t\t请按照一下方式选择查询方法： \n");
            printf("\t\t 1 按ISBN查询 \n");
            printf("\t\t 2 按书名查询 \n");
            printf("\t\t 3 按作者查询 \n");
            printf("\t\t 0 返回主菜单 \n");
            printf("\t 请选择：");
            scanf("%d",&f);
            if(f==1)//ISBN查
            {
                printf("\t请输入查询图书的ISBN：\n");
                scanf("%s",ISBN);
                printf("\t该图书信息如下: \n");
                head_book = Search_Book_ISBN(ISBN, head_book);
				getchar();                
				break;
            }
            else if(f==2)//书名查
            {
                b_name = book_name;
                printf("\t\t请输入查询的图书名字： \n");
                fgets(b_name,100,stdin);
                printf("\t该图书信息如下： \n");
                head_book = Search_Book_name(b_name, head_book);
				getchar();                
				break;
            }
            else if(f==3)//作者查
            {
                a_name = author;
                getchar();
                printf("\t\t请输入查询的作者名字： \n");
                fgets(a_name,100,stdin);
                printf("\t该图书信息如下： \n");
                head_book = Search_Author_name(a_name, head_book);
				getchar();               
				break;
            }
            else if(f==0)
            {
                break;
            }
			getchar();            
			break;
        case 2://添加图书
            system("cls");
            printf("\n\t\t====== 图书管理系统 ======\n");
            printf("\t输入书名为：  \n");
            scanf("%s",book_name);
            printf("\t输入作者为： \n");
            scanf("%s",author);
            printf("\t输入图书的ISBN为：  \n");
            scanf("%s",ISBN);
            printf("\t输入图书的价格为：  \n");
            scanf("%f",&price);
            printf("\n");
            struct book *ptr_b;
            for (ptr_b=head_book; ptr_b; ptr_b=ptr_b->book_next)
            {
                if(ptr_b->ISBN == ISBN)//ISBN重复的情况
                {
                    printf("该图书已存在\n");
                    m = 0;
                    break;
                }
            }
            if(m)
            {
                p_book=(struct book *)malloc(size_book);
                strcpy(p_book->book_name, book_name);
                strcpy(p_book->author, author);
                strcpy(p_book->ISBN, ISBN);
                p_book->price = price;
                head_book = Insert_Book(head_book,p_book);
                printf("\n\t成功添加图书\n");
            }
			getchar();            
			break;
        case 3://修改图书
            system("cls");
            printf("\n\t\t====== 图书管理系统 ======\n");
            printf("\t输入需要修改图书的ISBN:   \n");
            scanf("%s",ISBN);
            head_book = Change_Book(head_book, ISBN);
            printf("\n\t成功修改图书\n");
            getchar();
	    	break;
        case 4://删除图书
            system("cls");
            printf("\n\t\t====== 图书管理系统 ======\n");
            printf("输入要删除的图书ISBN：  \n");
            scanf("%s",ISBN);
            head_book = Delete_Book(head_book, ISBN);
            printf("\n\t成功删除图书\n");
            getchar();
	    	break;
        case 5://显示图书条目
            system("cls");
            printf("\n\t\t====== 图书管理系统 ======\n");
            Print_Book(head_book);
            getchar();
	    	break;
        case 6://图书记录统计信息
            system("cls");
            printf("\n\t\t====== 图书管理系统 ======\n");
            Report_Book(head_book, size_book);
            getchar();
            break;
       }
   }while (choice!=0);
   return 0;
}
