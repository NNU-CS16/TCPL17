#include<stdio.h>
#include<string.h>
int is_int_pal(int n)
{
  char s[1000];
  sprintf(s,"%d",n);
  int l;
  l=strlen(s);
  int i=1;
  char a[1000];
  for(i=0;i<=l;i++)
  {
      a[i]=s[l-i-1];
  }
  int k;
  k=strcmp(a,s);
  if(k==0)
      printf("0");
  else 
      printf("-1");
}
int main()
{
   int n;
   scanf("%d",&n);
   is_int_pal(n);
   return 0;
}












