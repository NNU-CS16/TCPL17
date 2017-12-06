#include<stdio.h>
int bin_insert(int n,int m,int j, int i)
{
   int zym = ~0<<(i+1);
   int yym = (~0<<j)-1;
   int ym = zym | yym;
   return (ym & n) | (m<<j);
}
int main()
{
int n,m,j,i;
scanf("%d%d%d%d",&n,&m,&j,&i);
printf("%d\n",bin_insert(n,m,j,i));
return 0;
}

