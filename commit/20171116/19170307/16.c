#include <stdio.h>

int main(int argc, char *argv[])
{
   FILE *fp1, *fp2;
   char c;
   if(argc < 3) return -1;
   fp1 = fopen(argv[1], "rb");
   fp2 = fopen(argv[2], "wb");
   if(fp1 && fp2)
   {
      while((c = fgetc(fp1)) != EOF)
      fputc(c, fp2);
   }
   fclose(fp1);
   fclose(fp2);
}

