#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  if(n<0)
   {
	   printf("fu ");
	   n = -n;
   }
  i = n;
  int j=1;
  while(i>9)
   {
      i = i/10;
      j=j*10;
   }
  int d;
  char *s[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
  while(j>=1)
   {
       d = n/j;
       printf("%s", s[d]);
       if(j>9)
	printf(" ");
       n = n%j;
       j=j/10;}
   return 0;
}
