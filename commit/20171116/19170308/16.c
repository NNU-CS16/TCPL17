#include <stdio.h>
#include <stdlib.h>
#define LEN 200

int main(int argc, char *argv[])
{
   FILE *fp1, *fp2;
   char str[LEN];

   if ((fp1 = fopen(argv[1], "r")) == NULL)
   {
      printf("Can't open file 1 !\n");
      exit(1);
   }
   if ((fp2 = fopen(argv[2], "a")) == NULL)
   {
      printf("Can't open file 2 !\n");
      exit(1);
   }
   while (!feof(fp1))
   {
      fgets(str, LEN, fp1);
      fputs(str, fp2);
   }
   fclose(fp1);
   fclose(fp2);

   return 0;
}
