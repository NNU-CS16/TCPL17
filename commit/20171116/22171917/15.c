#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
   file *fp;
   char m;
   argc = 2;
   if ((fp=fopen(argv[1],"r"))==NULL)
   {
      printf("can't open the file!\n")
      exit (1);
   }
   m=fgetc(fp);
   while(m!=EOF)
   {
     putchar(m);
     m=fgetc(fp);
   }
   printf("\n");
   if (fclose(fp))
    printf("error to close the file!\n");
   return 0;
}

  
