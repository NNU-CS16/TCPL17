#include<stdio.h>
static int count=0;
void move(int n,char a,char b,char c,int *p)
{
  if(n==2)
   {
     printf("%c %c\n",a,c);
      (*p)++;
     printf("%c %c\n",a,c);
      (*p)++;
   }
  else
   {
     move(n-2,a,c,b,&count);
     printf("%c %c\n",a,c);
      (*p)++;
     printf("%c %c\n",a,c);
      (*p)++;
     move(n-2,b,a,c,&count);
   }

}
int main()
{
  int n;
  int *p;
  p=&count;
  scanf("%d",&n);
  move(2*n,'a','b','c',&count);
  printf("%d\n",count);
  return 0;
}
