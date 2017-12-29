  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "Book.h"

  int main()
  {
      char title[50];
      char author[20];
      char ISBN[8];
      double price;
      Book_Node* prev = NULL;
      Book_Node* bookary = NULL;
      int size = 15;
      char *filename = "BookCatalogue";
      bookary = loadArray(bookary, size, filename);
      do
      {
          menu1();//显示菜单
          char cmd1;
 	  cmd1 = getchar();//读取命令
          if (cmd1 == 'q')
          {
              saveAs(bookary, filename);
              break;
          }
          switch (cmd1)
          {
              case 'i':
                  printf("输入添加书目信息:\n");
                  prev = insert(bookary, &size);
                  show(prev);
                  output(bookary, size);
                  getchar();
                  break;
              case 'u':
                  getchar();
                  printf("输入书目的ISBN:");
                  gets(ISBN);
                  printf("修改图书信息:\n");
                  update(bookary, ISBN);
                  output(bookary, size);
                  getchar();
                  break;
              case 'd':
                  getchar();
                  printf("被删除书目的ISBN为:");
                  gets(ISBN);
                  int r = delete(bookary, &size, ISBN);
                  if (r == 0)
                  {
                      printf("成功删除图书记录!\n");
                  }
                  else
                  {
                      printf("此书不存在，无法删除！！\n");
                  }
                  output(bookary, size);
                  getchar();
                  break;
              case 'o':
                  output(bookary,size);
                  getchar();
                  break;
              case 'r':
                  report(bookary, size);
                  getchar();
                  break;
              case 's':
                  getchar();
                  menu2();//显示菜单
                  char cmd2;
                  cmd2 = getchar();//读取命令
                  if (cmd2 == 'q')
                  {
                      saveAs(bookary, filename);
                      getchar();
                      break;
                  }
                  switch (cmd2)
                  {
                      case 't':
                          getchar();
                          printf("请输入书名:");
                          gets(title);
                          prev = search_title(bookary, title);
                          if (prev == NULL)
                          {
                              printf("此书不存在!!");
                          }
                          else
                          {
                              show(prev);
                          }
                          getchar();
                          break;
                      case 'a':
                          getchar();
                          printf("请输入作者名:");
                          gets(author);
                          search_author(bookary, author);
                          getchar();
                          break;
                      case 'i':
                          getchar();
                          printf("请输入ISBN:");
                          gets(ISBN);
                          prev = search_ISBN(bookary, ISBN);
                          if (prev == NULL)
                          {
                              printf("此书不存在!!");
                          }
                          else
                          {
                              show(prev);
                          }
                          getchar();
                          break;
                      case 'p':
                          getchar();
                          printf("请输入价格:");
                          scanf("%lf",&price);
                          search_price(bookary, price);
                          getchar();
                          break;
                      default: errCmd();
                  }
                  break;
              default: errCmd();
          }
          saveAs(bookary, filename);  
      }while (1);
      printf("Thank you and goodbye!\n");
      return 0;
  }
