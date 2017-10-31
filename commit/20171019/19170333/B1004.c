#include<stdio.h>
#include<stdlib.h>
int main()
{
   int u=0,o,p,j=0,n,x,m,i;
   scanf("%d",&n);getchar();
   char * s[100];
   char * b[100];
   int  a[100];
   
   for (x=0;x<n;x++)
   { s[x]=(char*)malloc(sizeof(char)*10);
     b[x]=(char*)malloc(sizeof(char)*10); }
   for(x=0;x<n;x++)
  {
   scanf("%s %s %d",s[x],b[x],&a[x]);getchar();
  }
  m=a[0];
  o=a[0];
  for (i=1;i<n;i++)
  if (m<a[i])
  { m=a[i];
    j=i; }
  
  for(p=1;p<n;p++)
  if (o>a[p])
  { o=a[p];
   u=p; }
  
   printf("%s %s\n",*(s+j),*(b+j));
   printf("%s %s\n",*(s+u),*(b+u));
  
  return 0;
}
