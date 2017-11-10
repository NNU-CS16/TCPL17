#include<stdio.h>
int is_int_pal(int n); 
int main()
{

int n;
scanf("%d", &n);
printf("%d\n", is_int_pal(n));

return 0;
}
int is_int_pal(int n)
{
int a[101],i,b=n,c;
for(i=0;b>=1;i++)
  {a[i]=b%10;
   b=b/10;}
   c=i;
for(i=0;i<c/2;i++)
  {if(a[i]!=a[c-i-1])
   {return -1;}}
   return 0;


}

