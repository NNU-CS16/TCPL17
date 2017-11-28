  #include <stdio.h>
  #include <stdlib.h>

  int main(int argc, char *argv[])
  {
      FILE *fp;
      char ch;
      if ((fp = fopen(*++argv, "r")) == NULL)
      {
          printf("Cannot open the file!\n");
          exit(1);
      }
      ch = fgetc(fp);
      while (ch != EOF)
      {
          putchar(ch);
          ch = fgetc(fp);
      }
      printf("\n");
      if (fclose(fp))
          printf("Cannot close the file!\n");
      return 0;
  }
