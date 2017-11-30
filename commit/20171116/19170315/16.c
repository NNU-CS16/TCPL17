  #include <stdio.h>
  #include <stdlib.h>
<<<<<<< HEAD
  
=======

>>>>>>> 4cf8c4e4af49134b907ed6e65c5c31cc1d10c94d
  int main(int argc, char *argv[])
  {
      FILE *pSourceFile, *pDestFile;
      char ch;
      if ((pSourceFile = fopen(*(argv + 1), "r")) == NULL)
      {
          printf("Cannot open source file!\n");
          exit(1);
      }
      if ((pDestFile = fopen(*(argv + 2), "w")) == NULL)
      {
          printf("Cannot open the dest file!\n");
          exit(1);
      }
      ch = fgetc(pSourceFile);
      while (feof(pSourceFile) == 0)
      {
          fputc(ch, pDestFile);
          ch = fgetc(pSourceFile);
      }
      fclose(pSourceFile);
      fclose(pDestFile);
      return 0;
  }
<<<<<<< HEAD
  
=======

>>>>>>> 4cf8c4e4af49134b907ed6e65c5c31cc1d10c94d
