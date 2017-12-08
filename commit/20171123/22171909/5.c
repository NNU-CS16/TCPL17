 #include <stdio.h>
 #include <string.h>

 int Substr(const char* str, const char* substr)
 {
  int a, i = 0, j = 0, len1, len2;
  len1 = strlen(str);
  len2 = strlen(substr);
  for (i = 0; i < len1; ++i)
  {
     for (j = 0; j < len2; ++j)
     {
        if (str[i] == substr[j])
         a = --i;
     }
  }
     if (j == len2)
         return a;
     else 
         return -1;
     if (i == len1)
         return -1;
 }

 int main()
 {
  char str[100], substr[100];
  printf("请输入主串：");
  fgets(str, 100, stdin);
  printf("请输入子串：");
  fgets(substr, 100, stdin);
  printf("%d\n", Substr(str, substr));
  return 0;
 } 
