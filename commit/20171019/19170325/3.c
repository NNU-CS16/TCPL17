#include<stdio.h>
#include<string.h>

void print(char c);

int main()
{

   int i;

   char a[100];

   printf("please input number:\n");

   scanf("%s",a);

   print(a[0]);

   for(i=1;i<strlen(a);i++)

   {

      printf(" ");

      print(a[i]);

   }

   printf("\n");

   return 0;
}

void print(char c)
{

   switch(c)

   {
      case '-':printf("fu");break;
      case '0':printf("ling");break;
      case '1':printf("yi");break;
      case '2':printf("er");break;
      case '3':printf("san");break;
      case '4':printf("si");break;
      case '5':printf("wu");break;
      case '6':printf("liu");break;
      case '7':printf("qi");break;
      case '8':printf("ba");break;
      case '9':printf("jiu");break;
   };

}
