#include "emmm.h"

int main ()
{   
    char cmd;
    struct Book *head_book , *p_book;
    head_book = load_book();
    char name[40] , auth[20] , ISBN[8];
    double price;
    int f;
    
    do{
    menu (); //显示菜单
    cmd = getchar (); //读取命令
    getchar ();

    if (cmd == 'q')
    {
        saveAs (head_book);
        break;
    }

    switch (cmd)
    {
      case's':
          printf ("*******请选择查询方式*******");
          printf ("1-----按编号查询：\n");
          printf ("2-----按书名查询：\n");
          printf ("3-----按作者查询：\n");
          printf ("0-----返回主菜单：\n");
	  printf ("*****************************");
          printf ("输入指令：\n");
          scanf ("%d" , &f);
          
          if (f == 1)
          {
              printf ("请输入图书编号：\n");
              scanf ("%s" , ISBN);
              printf ("信息如下：\n");
              head_book = search_book_ISBN (ISBN , head_book);
              break;
          }
          
          else if (f == 2)
          {
              char keyword[20];
              printf ("请输入书名关键词：\n");
              scanf ("%s" , keyword);
              printf ("信息如下：\n");
              head_book = search_book_name (keyword , head_book);
              break;
          }
          
          else if (f == 3)
          {
              printf ("请输入作者：\n");
              scanf ("%s" , auth);
              printf ("信息如下：\n");
              head_book = search_book_auth (auth , head_book);
              break;
          }
          
          else if (f == 0)
          {
              menu ();
              break;
          }
          break;
    
      case'i':
          printf ("输入插入图书的信息：\n");
	  head_book = insert_book (head_book);
          printf ("/图书插入成功！/\n");
	  break;
    
      case'u':
	  printf ("输入修改图书编号：\n");
  	  scanf ("%s" , ISBN);
  	  printf ("修改学生信息：\n");
	  head_book = update_book (head_book);
	  break;

      case'd':
	  printf ("输入删除的图书编号：\n");
	  scanf ("%s" , ISBN);
          head_book = delete_book (head_book , ISBN);
          break;

      case'a':
          printf ("*****浏览图书信息*****");
	  list_book (head_book);
	  break;

      case'r':
 	  printf ("*****图书统计报表*****");
          report_book (head_book);
          break;

      default:errCmd();
    }
  }while(1);
  return 0;
}

int menu()
{
    printf ("~~~~~~^.^~~~~~~^.^~~~~~~\n");
    printf ("#          ^.^         #\n");
    printf ("=== 图书管理系统菜单 ===\n");
    printf ("  (s)   查询图书条目    \n");
    printf ("  (i)   添加图书条目    \n");
    printf ("  (u)   修改图书条目    \n");
    printf ("  (d)   删除图书条目    \n");
    printf ("  (a)   浏览图书信息    \n");
    printf ("  (r)   图书统计报表    \n");
    printf ("(q)退出系统\n");
    printf ("~~~~~~~^.^~~~~~~^.^~~~~~\n");
    printf ("输入命令：");
    return 0;
}

int errCmd()
{
    printf ("Error Command!\n");
    return -1;
}

