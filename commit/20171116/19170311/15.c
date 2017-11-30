#include <stdio.h>
int main(int argc, char *argv[])
{
   FILE* fp;

   fp = fopen(argv[1], "r");
   char c = fgetc(fp);
   while (c != EOF)
   {
      putchar(c);
      c = fgetc(fp);
   }
   fclose(fp);

   return 0;
}
