#include <stdio.h>
#include <string.h>
int main()
{
   char a[100+3];
   char e[50],b,c[50],d;
   gets(a);
   int i=0,g=0;
   while(a[i]!=' ')
   e[g++]=a[i++];
   ++i;
   b=a[i];
   i+=2;
   int j=0; 
   while(a[i]!=' ')
   c[j++]=a[i++];
   ++i;
   d=a[i];
   int m=0,p=0;
   for(int t=0;t<strlen(e);++t)
   if(e[t]==b)
   m++;
   for(int h=0;h<strlen(c);++h)
   if(c[h]==d)
   p++;
   int s1=0,s2=0;
   for(int i=0;i<m;++i)
    s1=10*s1+b-'0';
   for(int j=0;j<p;++j)
   s2=s2*10+d-'0';
   printf("%d",s1+s2);
   printf("\n");
   return 0;
} 

