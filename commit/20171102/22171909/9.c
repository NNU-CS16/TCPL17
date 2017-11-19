 #include <stdio.h>
 #include <string.h>
 char str[1000];
 char str2[1000];
 int is_int_pal(int n)
 {
    int i = 0,m,len;
    char a;
    len = strlen(str);
    for (n = len-1; n >= 0; --n)
    {
         a = str[n];
         str2[i] = a;
         ++i;
    }
    m = strcmp(str, str2);
       if (m == 0)
          return 0;
       else
          return -1;
 }

 int main()
 {
 int n;
 scanf("%s",str);
 printf("%d\n", is_int_pal(n));
 return 0;
 }

