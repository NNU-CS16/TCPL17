 #include <stdio.h>
 #include <string.h>
 char a[1000];
 char b[1000];
 int is_str_pal(const char* str)
 { 
   int i = 0, n, m, len;
   len = strlen(a);
     for (n = len-1; n >= 0; --n)
       {
	   str = &a[n];
	   b[i] = *str;
           ++i;
       }
   m = strcmp(a, b);
     if (m == 0)
        return 0;
     else
        return -1;
 }

 int main()
 {
 const char* str;
 scanf ("%s", a);
 printf ("%d\n", is_str_pal(str));
 return 0;
 }
