#include<stdio.h>
#include<string.h>
int my_strcmp( const char *str1, const char *str2)
{
int la=strlen(str1),lb=strlen(str2);
int i,n;
if(la>lb)
    n=lb;
else
    n=la;
    for(i=0;i<n;i++)
    {
        if(str1[i]>str2[i]) return 1;
        if(str1[i]<str2[i]) return -1;
    }
   return 0;
}
int main()
{
 char a[1000],b[1000];
 scanf("%s%s",a,b);
 printf("%d\n",my_strcmp(a,b));
 return 0;
}
