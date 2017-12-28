  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "Book.h"
  Book_Node* InsertBeforeHead(Book_Node* bookary, Book_Node* newp);
  
  int menu1()
  {
      printf("====================图书管理信息系统====================\n");
      printf("%s\n",STARS1);
      printf("(i)添加图书信息\n");
      printf("(u)修改图书信息\n");
      printf("(d)删除图书信息\n");
      printf("(o)显示全部图书信息\n");
      printf("(r)统计图书信息\n");
      printf("(s)查询图书信息\n");
      printf("(q)退出系统\n");
      printf("输入命令:");
      return 0;
  }

  int menu2()
  {
     printf("%s\n",STARS2);
     printf("(t)根据书名查询\n");
     printf("(a)根据作者查询\n");
     printf("(i)根据ISBN查询\n");
     printf("(p)根据价格查询\n");
     printf("(q)退出系统\n");
     printf("输入命令:");
     return 0;
  }

  int errCmd()
  {
      printf("Error Command!\n");
      return -1;
  }

  Book_Node* loadArray(Book_Node* bookary, int size, char* filename)
  {
      Book_Node* newp;
      int i = 0;
      FILE *fp;
      if ((fp = fopen(filename,"r")) == NULL)
      {
          printf("无法打开文件!\n");
          exit(1);
      }

      //读出图书信息，并存入结构体链表bookary中
      while (i < size)
      {
          newp = (Book_Node*)malloc(sizeof(Book_Node));
          fscanf(fp, "%s %s %s %lf",newp->title,newp->author,newp->ISBN,&newp->price);
          bookary = InsertBeforeHead(bookary, newp);
          i++;
      }
      fclose(fp);
      return bookary;
  }
         
  Book_Node* InsertBeforeHead(Book_Node* bookary, Book_Node* newp)
  {
      newp->next = bookary;
      bookary = newp;
      return bookary;
  }

  Book_Node* insert(Book_Node* bookary, int *psize)
  {
      Book_Node* r = NULL;
      Book_Node* newp;
      newp = (Book_Node*)malloc(sizeof(Book_Node));
      do
      {
          printf("ISBN号为:") ;
          scanf("%s",newp->ISBN);
          char *ISBN = newp->ISBN;
          r = search_ISBN(bookary, ISBN);
          if (r != NULL)
              printf("此ISBN号在系统中已存在!\n");
      }while (r != NULL);
      printf("书名:");
      scanf("%s",newp->title);
      printf("作者:");
      scanf("%s",newp->author);
      printf("ISBN号:");
      scanf("%s",newp->ISBN);
      printf("价格:");
      scanf("%lf",&newp->price);
      getchar();
      bookary = InsertBeforeHead(bookary, newp);
      (*psize)++;
      return bookary;      
  }

  void update(Book_Node* bookary, char *ISBN)
  {
      Book_Node* p;
      p = search_ISBN(bookary, ISBN);
      printf("更新图书信息\n");
      printf("书名:");
      scanf("%s",p->title);
      printf("作者:");
      scanf("%s",p->author);
      printf("价格:");
      scanf("%lf",&p->price);
      getchar();
  }

  int delete(Book_Node* bookary, int *psize, char* ISBN)
  {
      Book_Node* p = bookary;
      Book_Node* prev = NULL;
      Book_Node* r = search_ISBN(bookary, ISBN);
      if (r == NULL)
      {
          return -1;//未找到要删除的图书记录
      }
      //删除记录
      while (p != NULL)
      {
          if (strcmp(p->ISBN, ISBN) == 0)
              break;
          prev = p;
          p = p->next;
      }
      if (p == bookary)
          bookary = bookary->next;
      else
          prev->next = p->next;
      free(p);
      (*psize)--;
      return 0;
  }

  void output(Book_Node* bookary, int size)
  {
      Book_Node* p = bookary;
      while (size > 0 && p != NULL)
      {
          printf("%s %s %s %lf\n",p->title,p->author,p->ISBN,p->price);
          p = p->next;
          size--;
      }
  }

  int report(Book_Node* bookary, int size)
  {
      Book_Node* p = bookary;
      Book_Node* pmax = NULL;
      Book_Node* pmin = NULL;
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
          p = p->next;   
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
      printf("%s\n",pmax->title);
      printf("价格最低的图书:");
      printf("%s\n",pmin->title);
  return 0;
  }

  Book_Node* search_title(Book_Node* bookary, char* title)
  {
      Book_Node* p = bookary;
      Book_Node* prev = NULL;
      while (p != NULL)
      {
          if (strcmp(p->title, title) == 0)
          {
              prev = p;
              break;
          }
          p = p->next;
      }
      return prev;
  }
  
  void search_author(Book_Node* bookary, char* author)
  {
      Book_Node* p = bookary;
      Book_Node* prev = NULL;
      while (p != NULL)
      {
          if (strcmp(p->author, author) == 0)
          {
              prev = p;
              printf("%s %s %s %lf\n",prev->title,prev->author,prev->ISBN,prev->price);
          }
          p = p->next;
      }
      if (prev == NULL)
          printf("此书不存在！！");
  }

  Book_Node* search_ISBN(Book_Node* bookary, char* ISBN)
  {
      Book_Node* p = bookary;
      Book_Node* prev = NULL;
      while (p != NULL)
      {
          if (strcmp(p->ISBN, ISBN) == 0)
          {
              prev = p;
              break;
          }
          p = p->next;
      }
      return prev;
  }

  void search_price(Book_Node* bookary, double price)
  {
      Book_Node* p = bookary;
      Book_Node* prev = NULL;
      while (p != NULL)
      {
          if (p->price == price)
          {
              prev = p;
              printf("%s %s %s %lf\n",prev->title,prev->author,prev->ISBN,prev->price);
          }
          p = p->next;
      }
      if (prev == NULL)
          printf("此书不存在！！");
  }

  int saveAs(Book_Node* bookary, char* filename)
  {
      FILE *fp;
      Book_Node* p = bookary;
      fp = fopen(filename, "w");
      if (fp == NULL)
      {
          return -1;
      }
      while (p != NULL)
      {
          fprintf(fp, "%s\t", p->title);
          fprintf(fp, "%s\t", p->author);
          fprintf(fp, "%s\t", p->ISBN);
          fprintf(fp, "%lf\t", p->price);
          p = p->next;
      }
      fclose(fp);
      return 0;
  }

  void show(Book_Node* p)
  {
      printf("%s %s %s %lf\n",p->title,p->author,p->ISBN,p->price);
  }
