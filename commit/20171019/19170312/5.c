#include<stdio.h>
int main()
{
 char c;
 int i=0;
 int flag=0;
 c=getchar();
 while(c!='.')
 {
  if(c==' ')
   {
     if(i!=0)
     {
       printf("%d",i);
       i=0;
       flag=1;
     }
   }
   else i++;
   c=getchar();
   if(flag==1&&i==0&&c!='.'&&c!=' ') //To prevent from redundant blank.
   printf(" ");
 }
 if(i!=0)
 printf("%d\n",i);
 return 0;
}
