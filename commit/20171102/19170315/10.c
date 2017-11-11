  #include <stdio.h>
  #include <string.h>
  int is_str_pal(const char* str);
  int main()
  {
     char str[10] = {0};
     scanf("%s",str);
     char* pa;
     pa = (char *)str;
     int t = is_str_pal(pa);
     printf("%d\n",t);
     return 0;
  }

  int is_str_pal(const char* str)
  {
     char i, j;
     int flag = -1;
     int len = strlen(str);
     for(i = 0, j = len-1; i < j; i++, j--)
     {
         if(str[i] != str[j])
         {
             flag = 0;
             break;
         }
     }
     return flag;
  }
