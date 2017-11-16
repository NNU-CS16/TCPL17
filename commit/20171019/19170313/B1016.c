#include<stdio.h>
#include<math.h>
int main()
{
   char a[10],b[10];
   int c,d,e,p=0,q=0;
   int i=0,g=0,f,h,x,y,s1=0,s2=0;
   scanf("%s%d%s%d",a,&c,b,&d);
   while(i<=10)
{
   if(a[i]==' ')
   break;
   if(a[i]-'0'!=c)
   i++;
   if(a[i]-'0'==c)
   {p++;i++;}
}
   while(q<=10)
{
   if(b[g]==' ')
   break;
   if(b[g]-'0'!=d)
   g++;
   if(b[g]-'0'==d)
   {q++;g++;}
}
   for(f=0;f<p;f++)
{
   x=pow(10,f);
   s1=s1+c*x;
}
   for(h=0;h<q;h++)
{
   y=pow(10,h);
   s2=s2+d*y;
}
   e=s1+s2;
   printf("%d\n",e);
   return 0;
}
