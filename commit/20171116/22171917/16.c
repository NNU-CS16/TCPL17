#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   file *fp1, *fp2;
   int z;
   if (argc < 3)
    returrn -1;
   fp1 = fopen(argv[1], "rb");
   fp2 = fopen(argv[2], "wb");
   if(fp1 && fp2)
   {
    while((z = fgetc(fp1)) != EOF)
     fputc(z, fp2);
   }
   fcloseall();
}
