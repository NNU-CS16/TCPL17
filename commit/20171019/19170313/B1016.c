#include<stdio.h>
#include<math.h>
int main()
{
   char a[10],b[10];
   int c,d,e,p=0,q=0;
   int i=0,g=0,f,h,x,y,s1=0,s2=0;
   scanf("%s%d%s%d",a,&c,b,&d);
   while(i<=10&&g<=10)
{
   if(a[i]-'0'!=c)
   a[i++];
   else
   p++;
   if(b[g]-'0'!=d)
   b[g++];
   else
   q++;
}
   for(f=0;f<=p;f++)
{
   x=pow(10,f);
   s1=s1+c*x;
}
   for(h=0;h<=q;h++)
{
   y=pow(10,h);
   s2=s2+d*y;
}
   e=s1+s2;
   printf("%d",e);
   return 0;
}
