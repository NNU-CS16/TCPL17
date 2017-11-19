 #include <stdio.h>
 #include <string.h>
 char str[1000];
 void reverse(char*str)
 {
    int i,len;
    len=strlen(str);
    for (i=len; i>=0; --i)
         printf("%c",str[i]);
 }

 int main()
 {
 scanf("%s",str);
 reverse(str);
 printf("\n");
 return 0;
 }

