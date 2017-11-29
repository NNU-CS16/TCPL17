  #include <stdio.h>
  #include <string.h>

  int main()
  {
      int i, j;
      char *pstr[] = {"nanjing","wuxi","xuzhou","changzhou","suzhou"};
      char *ptemp = NULL;
      for (j = 0; j < 4; j++)
      {
          for (i = 0; i < 4 - j; i++)
          {
              if (strcmp(pstr[i],pstr[i + 1]) > 0)
              {
                  ptemp = pstr[i];
                  pstr[i] = pstr[i + 1];
                  pstr[i + 1] = ptemp;
              }
          }
      }
      for (i = 0; i < 5; i++)
          puts(pstr[i]);
      return 0;
  }

