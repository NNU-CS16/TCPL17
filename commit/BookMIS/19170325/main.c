#include "cmd.h"

int menu(void)
{
    printf("===Book Management Information System===\n");
    printf("(s) to search\n");
    printf("(c) to change\n");
    printf("(a) to add\n");
    printf("(d) to delete\n");
    printf("(p) to present\n");
    printf("(q) to quit\n");
    printf("(r) to refer\n");
    printf("please input your command: \n");

    return 0;
}

int errCmd(void)
{
    printf("Error command! \n");
    return -1;
}

int main(void)
{
   char *filename = "Bookfile.csv";
   int size = Loadarr(Bookarr, filename);
   int r;
   Book *p = Bookarr;
   char str[20];
   for (int i =0; i < size; i++)
   {
      printf("%s\t%s\t%s\t%.2f\n", p->name, p->writer, p->ISBN, p->price);
      p++;
   }

do{
   menu();
   char cmd = getchar();
   getchar();
   if (cmd == 'q')
   {
       Save(Bookarr, size, filename);
       break;
   }
   switch (cmd)
   {
       case 'a':
           printf("New book information: \n");
           r = Add(Bookarr, &size);
           if (r == 0)
                printf("Add successfully!\n");
           break;
       case 's':
           printf("The information you want to search: \n");
           scanf("%s", str);
           getchar();
           p = Search(Bookarr, size, str);
           if (p == NULL)
              printf("Not find! \n");
           else
              printf("%s\t%s\t%s\t%f\n", p->name, p->writer, p->ISBN, p->price);
           break;
      case 'c':
           printf("The Book you want to change is: \n");
           scanf("%s", str);
           getchar();
           Change(Bookarr, size, str);
           break;
      case 'd':
           printf("The book you want to delete is: \n");
           scanf("%s", str);
           getchar();
           r = Delete(Bookarr, &size, str);
           if (r == 0)
               printf("delete successfully! \n");
           else
               printf("fault !\n");
           break;
      case 'p':
           Present(Bookarr, size);
           break;
      case 'r':
           Reference(Bookarr, size);
           break;
      default : errCmd();
   }
  }while (1);

  return 0;
}
